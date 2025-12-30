# YangCZGIS
YangCZGIS: a software of Yang Chizhong filtering and interpolation methods for geospatial data

[![License](https://img.shields.io/badge/license-MIT-green)](LICENSE)
[![Release](https://img.shields.io/github/v/release/Geostatistics-CSU/YangCZGIS)](https://github.com/Geostatistics-CSU/YangCZGIS/releases)
[![Platform](https://img.shields.io/badge/platform-Windows-blue)](https://github.com/Geostatistics-CSU/YangCZGIS/releases)

## 📖 Introduction
**YangCZGIS** is a fully open-source, freely accessible, and lightweight software developed for geospatial data analysis, specifically focusing on **Yang Chizhong (YangCZ) filtering and interpolation methods**.

Developed using the cross-platform **Qt framework** and **QGIS-based redevelopment**, YangCZGIS addresses the challenges of spatial interpolation with small samples and non-stationary processes. It integrates data management, exploratory analysis, advanced interpolation algorithms, and 2D/3D visualization into a single user-friendly platform.

This software constitutes the implementation of the research paper:
> **"YangCZGIS: a software of Yang Chizhong filtering and interpolation methods for geospatial data"**
> *Authors: Jie Yang, Qiliang Liu\*, Yueda Wu, Yuxuan Chen, Zhankun Liu, Xiancheng Mao, Min Deng.*
> *Affiliation: Department of Geo-informatics, Central South University, China.*

---

## 📥 Download & User Guide

### 1. Software Download
We provide both an installer and a portable version. You can download the latest release from our **GitHub Releases** page:

👉 **[Download YangCZGIS v1.0 (Click Here)](https://github.com/Geostatistics-CSU/YangCZGIS/releases)**

*   **Installer (`.exe`)**: Recommended. Follow the setup wizard to install.
*   **Portable (`.zip`)**: No installation required. Unzip and run `YCZSoftware_VS.exe` directly.

### 2. User Manual
For detailed instructions on operation and algorithms, please refer to the User Guide:

📄 **[View User Guide (PDF)](docs/User_Guide.pdf)**

---

## ✨ Key Features

YangCZGIS integrates four core functionalities to facilitate geospatial analysis:

### 1. Geospatial Data Management
*   Supports multiple formats: **ESRI Shapefile, GeoJSON, GMT, CSV, TXT**, etc.
*   Provides standardized data organization, projection transformation, and layer management (Zoom, Group, Rename, etc.).

### 2. Exploratory Spatial Data Analysis (ESDA)
*   **Statistical Tools:** Histogram, QQ plot, Box plot, Correlation analysis.
*   **Pattern Detection:** Includes **Yang Chizhong-spatial scan (YangScan)** and AMOEBA for extracting underlying patterns and hotspots in geospatial data.

### 3. YangCZ Interpolation Methods
Supports advanced interpolation methods based on Spatial Compound Variable Theory:
*   **OYangCZ:** Ordinary Yang Chizhong filtering and interpolation.
*   **GYangCZ:** Generalized Yang Chizhong method (Nonstationary).
*   **CoYangCZ:** Multivariate interpolation.
*   **STYangCZ:** Spatiotemporal interpolation.
*   *Note: Includes Cross-Validation (CV) for accuracy evaluation.*

### 4. 2D/3D Visual Mapping
*   **2D Visualization:** Thematic mapping, attribute rendering, and overview maps.
*   **3D Visualization:** OpenGL-based rendering for 3D points and voxel data, supporting visual-interactive result exploration.

---

## 💻 System Requirements
*   **Operating System:** Windows 10 / 11 (64-bit)
*   **Processor:** Intel Core i5 or higher recommended
*   **RAM:** 8 GB or higher recommended
*   **Disk Space:** ~1.5 GB for installation

---

## 🛠️ Development & Source Code
YangCZGIS is built upon:
*   **Language:** Python 3.8+ (Core algorithms) & C++ (Framework)
*   **Frameworks:** Qt, QGIS, GDAL, OpenGL
*   **Dependencies:** NumPy, Pandas, etc.

To compile from source, please clone this repository and open the project in **Visual Studio** (with Qt extension installed).

```bash
git clone https://github.com/Geostatistics-CSU/YangCZGIS.git
