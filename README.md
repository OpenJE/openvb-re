OpenJE-RE
=========

OpenJE is an open source reverse engineered c++ implementation of the Jefferson Engine developed by Interplay Entertainment's Black Isle Studios.

- License: GPLv3 (see LICENSE for more information)

Disclaimer
----------

- This project is not affiliated with Bethesda Softworks LLC, Interplay Entertainment Corp., Bethesda Game Studios, or Black Isle Studios.
- This project is completely open source and no commercial use is intended.
- All copyrights belong to their respective owners.

Implementation
--------------

- [`OpenVB`](https://github.com/OpenJE/openvb) - The implementation repository of the reverse engineered code.

Current Status
--------------

This project is currently in early development. So far many classes have been identified via RTTI type information and from static object oriented analysis via OOAnalyzer, and most functions containing strings that directly hint at there name/functionality have been renamed.

This project is focusing most of its reverse engineering work on the use of Ghidra but will use IDA where/when necessary.

Re-Implementation of the F3 executable is currently in progress.

Getting Started
---------------

- A Ghidra zip file for the F3.exe is located in the ghidra directory along with both an exported header and source file of the up to date reverse engineered code.
    - OOAnalyzer was used as a bootstrap for finding class information beyond rtti type information.
        - OOAnalyzer: https://github.com/cmu-sei/pharos

- Ghidra pseudo code is located in the c directory, where header/interface files are located in the c/headers directory, and source/implementation files are located in the c/source directory.
- Reverse engineered C++ source code is located in the c++ directory, where header/interface files are located in the c++/headers directory, and source/implementation files are located in the c++/source directory.
- Re-Implementation of the F3 executable is located in the re-implementation directory.

Documentation
-------------

- [`OpenJE-RE`](/docs/OpenJE-RE.md) - provides in-depth information about the projects current state and its goals.
- [`F3`](/docs/F3.md) - documentation for the structs, classes, and functions of the Jefferson Engine.
