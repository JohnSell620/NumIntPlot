## NumIntPlot
Qt application for computing triple integrals by Gaussian Quadrature rules, testing [HPC-library](https://github.com/JohnSell620/HPC-Library) numerical linear algebra library, and (TODO) 2- and 3-D plotting.

## Windows Development Installation
Complete the following to set up dev environment in **Visual Studio 2017**.

#### 1. Install Qt 

<ol type="I">
	<li>Download the <b>OFFLINE</b> Windows Host Qt installer from <a href="https://www.qt.io/offline-installers">here</a>.</li>
	<li>Run the installer. Only the <b>MSVC 2017 64-bit</b> component needs to be installed -- all other components and tools are unncessary.</li>
</ol>
<p align="center"><img src="images\qtinstallerpic.png" alt="Qt Installer" width="250px" /></p>

#### 2. Install the **Qt Visual Studio Tools** Extension

<ol type="I">
	<li>Select <b>Tools</b> > <b>Extensions and Updates</b> > <b>Online</b> and search for the extension by name, then click <i>Download</i>.</li>
	<li>Configure the Qt Visual Studio Tools extension: Select <b>Qt VS Tools</b> > <b>Qt Options</b> > <b>Add</b> to point VS 2017 to the Qt installation. Set the <b>PATH</b> to the <b>parent folder</b> of `\bin`:</li>
</ol>

<p align="center" ><img src="images\qtoptions.png" alt="Qt Options" width="250px" />
<img src="images\qtpathsnip.png" alt="Qt Options" width="250px" padding-left="200px" /></p>

#### 3. Fork This Repo on Github and Pull To Local


## Linux Development Installation

This project requires Qt to be installed. Installation instructions for Ubuntu can be found [here](https://wiki.qt.io/Install_Qt_5_on_Ubuntu).



## Acknowledgements
- [C++ Mathematical Expression Parsing And Evaluation Library](https://github.com/ArashPartow/exprtk) by Arash Partow.
- [QCustomPlot](https://www.qcustomplot.com) by Emanuel Eichhammer.

## Screenshots
<p align="center"><img src="images\numint1.png" alt="Double Integration" width="550px" /></p>
<p align="center"><img src="images\numint2.png" alt="Matrix Computation" width="550px" /></p>
