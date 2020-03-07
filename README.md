# CrackMe Source Code (C++)
This repository offers source codes for CrackMes with modern GUI forms written in C++ with VCL by Embarcadero. The main target of this repository is CTF organizers or Computer Science students who would like to develop small CrackMe with modern GUI or anyone interested in Software Reverse Engineering.

<p>Since Microsoft Visual Studio doesn't offer Design View for C++ Desktop applications without .Net Framework, we used Embarcadero C++Builder to design the GUI easily. (You can use Design View for Visual C++ with CLR on Visual Studio but it's using .Net Framework.)</p>

<p>You can find a compiled EXE binary in Win32/Release folder for each CrackMe.</p>

![Sample](https://github.com/d4ichi/CrackMe-DotNet/blob/master/Resource/img/sample.png)

## For CrackMe Creators
Indeed I provide some simple key evaluation functions, you can edit it and make your CrackMe harder as much as you want. All CrackMe here can popup information dialog. So you can put some information about your CTF, author, deadline, or instructions with just replacing some sentences.

## For Computer Science Students
If you are studying Software Reverse Engineering, reversing CrackMe is a good way to start your practical exercise. If you don't feel you are ready for CrackMes out there on GitHub, you could start coding your own CrackMe and analyze it. It will be much easier to play around with because you are the creator of the CrackMe.
Additionally, it's good for learning Reverse Engineering to observe the consequence of your code/implementation of obfuscation in reversed form.

## Contents

### CrackMe01
<p>One user input is required.</p>
<p>This CrackMe compares user input with a plain text key.</p>

![CrackMe](https://github.com/d4ichi/CrackMe/blob/master/Resource/img/crackme_one_input.png)

<p>Key for the sample binary: </p>

```
FASTCALL
```

## Requirements
- Embarcadero C++Builder
- C++ with VCL
- Target Platform: Windows Desktop 32Bit/64Bit

<p> Embarcadero offers free edition of C++Builder for uncommercial usage. Register an Embarcadero account to get an installer and its product key. Make sure to check the option "C++Builder Windows 32-bit Community" during installation.</p>

[C++Builder Community Edition - Embarcadero](https://www.embarcadero.com/products/cbuilder/starter "Embarcadero")

![VS2017](https://github.com/d4ichi/CrackMe/blob/master/Resource/img/embarcadero_installation.png)

## How to Build
Clone the entire repository first and open project file (.cbproj) on C++Builder.

To build a stand-alone executable, make sure to disable dynamic linking.
<p>Navigate to "Project -> Options" on C++Builder toolbar and set "false" on these two options:</p>

- Building -> C++ Linker -> Link with Dynamic RTL [(detail)](https://github.com/d4ichi/CrackMe/blob/master/Resource/img/build_config00.png "Build Configuration")
- Packages -> Runtime Packages -> Link with runtime packages  [(detail)](https://github.com/d4ichi/CrackMe/blob/master/Resource/img/build_config01.png "Build Configuration")

<p>Then, hit "Project -> Build CrackMe" on toolbar to build the project!</p>


## Notes
I will update/add new CrackMe source codes or templates occasionally.
<p>The "ClaimToFame CTF" is an imaginary competition. Replace it to whatever you want.</p>
