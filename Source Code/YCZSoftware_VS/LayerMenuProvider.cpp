#include "LayerMenuProvider.h"
#include "MainWindow.h"

#include <QMenu>
#include <QModelIndex>
#include <QIcon>

#include <qgslayertreeviewdefaultactions.h>
#include <qgslayertreenode.h>
#include <qgslayertreemodel.h>
#include <qgslayertree.h>
#include <qgsrasterlayer.h>
#include <qgslayertreeutils.h>

LayerMenuProvider::LayerMenuProvider(QgsLayerTreeView* view, QgsMapCanvas* canvas)
	: mView(view)
	, mCanvas(canvas)
{

}
LayerMenuProvider::~LayerMenuProvider()
{}

QMenu* LayerMenuProvider::createContextMenu()
{
    // icon path
    QString iconDir = "./icon/";

    QMenu* menu = new QMenu;
    QgsLayerTreeViewDefaultActions* actions = mView->defaultActions();
    QModelIndex idx = mView->currentIndex();
    

    // global menu
    if (!idx.isValid())
    {
        menu->addAction(actions->actionAddGroup(menu));
        menu->addAction(QIcon(iconDir + "mActionExpandTree.png"), tr("&Expand All"), mView, SLOT(expandAll()));
        menu->addAction(QIcon(iconDir + "mActionCollapseTree.png"), tr("&Collapse All"), mView, SLOT(collapseAll()));
    }
   
    else
    {
        QgsLayerTreeNode* node = mView->index2node(idx);
        // layer or group selected
        if (QgsLayerTree::isGroup(node))
        {
            menu->addAction(actions->actionZoomToGroup(mCanvas, menu));
            if (mView->selectedNodes(true).count() >= 2)
            {
                menu->addAction(actions->actionGroupSelected(menu));
            }
            menu->addAction(actions->actionAddGroup(menu));
            menu->addAction(actions->actionRemoveGroupOrLayer(menu));
            menu->addAction(actions->actionRenameGroupOrLayer(menu));
            menu->addAction(actions->actionCheckAndAllChildren(menu));
            menu->addAction(actions->actionMutuallyExclusiveGroup(menu));
        }
        else if (QgsLayerTree::isLayer(node))
        {
            QgsMapLayer* layer = QgsLayerTree::toLayer(node)->layer();
            menu->addAction(actions->actionZoomToLayer(mCanvas, menu));
            menu->addAction(actions->actionAddGroup(menu));
            menu->addAction(actions->actionMoveOutOfGroup(menu));
            menu->addAction(actions->actionMoveToTop(menu));
            menu->addAction(actions->actionMoveToBottom(menu));

            // 用自定义的槽函数代替默认的移除操作
            QAction* removeLayerAction = new QAction(tr("&Remove Layer"), menu);
            connect(removeLayerAction, &QAction::triggered, this, &LayerMenuProvider::removeLayerFromProject);
            menu->addAction(removeLayerAction);

            menu->addAction(actions->actionRenameGroupOrLayer(menu));
            menu->addAction(actions->actionShowFeatureCount(menu));

            if (mView->selectedNodes(true).count() == 1)
            {
                menu->addAction(QIcon(iconDir + "mActionLayerProp.png"), tr("&LayerProp"), this, SLOT(onActionLayerProp()));
            }
        }
    }

    return menu;
}


void LayerMenuProvider::onActionLayerProp()
{
    QModelIndex idx = mView->currentIndex();
    QgsLayerTreeNode* node = mView->index2node(idx);
    QgsMapLayer* layer = QgsLayerTree::toLayer(node)->layer();

    LayerPropForm* PropForm = new LayerPropForm(layer);
    PropForm->show();
}

void LayerMenuProvider::removeLayerFromProject()
{
    QModelIndex idx = mView->currentIndex();
    if (!idx.isValid()) return;

    QgsLayerTreeNode* node = mView->index2node(idx);
    if (QgsLayerTree::isLayer(node))
    {
        QgsMapLayer* layer = QgsLayerTree::toLayer(node)->layer();
        if (layer)
        {
            mView->layerTreeModel()->rootGroup()->removeLayer(layer);
            QgsProject::instance()->removeMapLayer(layer->id()); // 从项目中移除图层
            // 从图层管理器中移除图层
            
        }
    }
}