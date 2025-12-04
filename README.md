# MyGriding-Cpp
Find my way back to C++. All codes are run in WSL Ubuntu on Window 11.

BEGINNER folder: An introduction to C++
Using Vim as editor and to run code, type: 
-----------
g++ <fiel_name>.cpp -o <file_name>
----------
./<file_name>
-----------
Note: Vim checker helps beginner shape your style, 
a bit strict but some will it helpful. 
Consider it as a longterm investment

IMTERMEDIATE section: advand to higher, we will need a better tool
to build more complex programm. First step: Setup IDE, Vscode:
-----------
sudo snap install --classic code
-----------
code --version
-----------
Simply type code in the terminal to open Vscode, 
go to extension and add C/C++, Code Runner.

-----------
MakeFiles purpose:
1- Automation of Build process
2- Manage dependencies
3- Compile/Build multiple sources
4- Keeps track of compilations
-----------
Add extension C/C++ Makefile Project

In Vscode: Manage > Command Palette.. > C/C++ Make: INIT Project > C++ project

Note: If Makefile doesn't pop up, this means you're not in root. 
Makefile extension doesn't support multiple roots so either you go back to root or find a way around.







