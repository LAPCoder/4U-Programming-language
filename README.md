# 4U (Programming language)

It's [my (@LAPCoder)](https://github.com/LAPCoder) programming language.
(Please put a ⭐ if you lke it 😀!)

[![GitHub release](https://img.shields.io/github/v/release/LAPCoder/4U-Programming-Language?include_prereleases)](https://github.com/LAPCoder/4U-Programming-language/releases)
[![License](https://img.shields.io/badge/license-CC--BY--NC--SA-green)](https://github.com/LAPCoder/4U-Programming-language/blob/main/LICENSE.md)
[![Downloads](https://img.shields.io/github/downloads/LAPCoder/4U-Programming-language/total)](https://github.com/LAPCoder/4U-Programming-language/tags)
![GitHub branch checks state](https://img.shields.io/github/checks-status/LAPCoder/4U-Programming-Language/main)
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/LAPCoder/4U-Programming-Language)
[![GitHub commit activity](https://img.shields.io/github/commit-activity/y/LAPCoder/4U-Programming-Language)](https://github.com/LAPCoder/4U-Programming-language/graphs/commit-activity)
[![GitHub Release Date](https://img.shields.io/github/release-date-pre/LAPCoder/4U-Programming-Language)](https://github.com/LAPCoder/4U-Programming-language/releases)
![GitHub language count](https://img.shields.io/github/languages/count/LAPCoder/4U-Programming-Language)
![GitHub deployments](https://img.shields.io/github/deployments/LAPCoder/4U-Programming-Language/github-pages)
[![GitHub Discussions](https://img.shields.io/github/discussions/LAPCoder/4U-Programming-Language)](https://github.com/LAPCoder/4U-Programming-language/discussions)
[![GitHub issues](https://img.shields.io/github/issues/LAPCoder/4U-Programming-Language?color=yellow)](https://github.com/LAPCoder/4U-Programming-language/issues?q=is%3Aissue+is%3Aopen)
[![GitHub closed issues](https://img.shields.io/github/issues-closed/LAPCoder/4U-Programming-Language?color=yellow)](https://github.com/LAPCoder/4U-Programming-language/issues?q=is%3Aissue+is%3Aclosed)
[![GitHub pull requests](https://img.shields.io/github/issues-pr/LAPCoder/4U-Programming-Language?color=yellow)](https://github.com/LAPCoder/4U-Programming-language/pulls?q=is%3Apr+is%3Aopen)
[![GitHub closed pull requests](https://img.shields.io/github/issues-pr-closed/LAPCoder/4U-Programming-Language?color=yellow)](https://github.com/LAPCoder/4U-Programming-language/pulls?q=is%3Apr+is%3Aclosed)

[![Shield.io](https://img.shields.io/badge/Make%20with-https%3A%2F%2Fshields.io%2F-informational)](https://shields.io)

```
                       _____   _____   _____   _____    ___    _   _   _   _   _____   _   _   _____ 
    ____   _      _   |  .  \ |  .  \ /  _  \ /  ___\  / ^ \  | \_/ | | \_/ | |_   _| |  \| | /  ___\
   / _  | | |    | |  |  ___/ |  _  / | |_| | | |_]¨; /  _  \ | \_/ | | \_/ |  _| |_  | \ \ | | |_]¨;
  / / | | | |    | |  |_|     |_| \_\ \_____/ \_____/ |_| |_| |_| |_| |_| |_| |_____| |_|\__| \_____/
 / /__| |_| |    | |   _        ___    _   _   _____   _   _    ___    _____   _____ 
/___    __  \____/ /  | |      / ^ \  |  \| | /  ___\ | | | |  / ^ \  /  ___\ |  ___'
    |__|   \______/   | |___  /  _  \ | \ \ | | |_]¨; | \_/ | /  _  \ | |_]¨; |  ===
                      |_____| |_| |_| |_|\__| \_____/ \_____/ |_| |_| \_____/ |__͞_͞_͞_.
```

## What is it?

This is not only a programming language. It's will be a code editor, a programming language, a doc, an IDE, an ODE...

## Lastest version

V0.0.1 is the lastest version.
V1.0.0 is in developpement.

# Objective

The main goal is to be useful, powerful, accessible and easy to use. <br />
Goal:
> Simpler than Python, more complete than C++, more object-oriented than Java, more interpreted than Python, more compiled than C, more cross-platform than HTML, here is the 4U!

Unfortunately, we are far from the goal.
So it is (and still) in (perpetual) development.

**For understanding**:

> Simpler than Python

The goal of language is to be accessible to everyone.

> More complete than C++

The 4U will have many different functionalities (applications, games, websites, 2D, 3D, sound, image...)

> More object than Java, more interpreted than Python

It will be compiled ***and*** interpreted:
- For a quick overview (when designing software), it can be interpreted.
- For a slower rendering (but faster to execute), it can be compiled in machine language (as currently).

> More cross-platform than HTML

The 4U will be cross-platform.

<!-- TODO : Mettre # Keywords -->

<!-- 
# How to install
Met le ici
-->
# How to use

You must have `gcc`, `bison` or `yacc`, `flex` or `lex` and `glib`.
<!-- If you want not modify, you must have `gcc`, and go to step 1, 5, 6 and 7.
If you want execute example-program, just go to step 1 and 7. -->

## 1: Go to your directory

### Windows

On Windows, enter this command:
```batch
cd <directory name>
```
\<directory name\> is the directory where you installed folder "4u vX.X.X" (X.X.X is your version number).
It's like `C:\Users\user\Documents\4U\4U 0.0.0`

### Linux

On Linux, enter this command:
```bash
cd <directory name>
```
\<directory name\> is the directory where you installed folder "4u vX.X.X" (X.X.X is your version number).
It's like `/home/user/Documents/4U/4U\ 0.0.0` (for with space enter `\ `).

## 2: Compile the lexical analyzer
  
Enter this command (if you use `flex`):
```bash
flex -o lexique_4u.c lexique_4u.lex
```
## 3: Compile the syntax analyzer
  
Enter this command (if you use `bison`):
```bash
bison -d syntax_4u.y
```

## 4: Compile the compiler
  
Enter this command (if you use `gcc`):
```bash
gcc lexique_4u.c syntax_4u.tab.c generation_code.c `pkg-config --cflags --libs glib-2.0` -o 4u
```

## 5: Execute the 4u program

Enter this command (if you use `gcc`) in a terminal (CMD):
```bash
./4u program.4u
```
\<program.4u\> is the name of your program.

## 6: Compile the program

Enter this command:
```bash
gcc program.c
```
\<program.c\> is the name of your program (compiled).

## 7: Compile the program

Enter this command:
```bash
./a.out
```
It's OK! Your code was executed! If you want to re-execute your code (and it's not changed), you can just do this command (step 7).
Else, you can execute (if you want):
```bash
cd
```

# Source

I use [this](https://totodu.net/Compilation/Compilation) tutorial.

# Logo

If you have a logo, share it in discussions.

# LICENSE

See the [LICENSE.md](https://github.com/LAPCoder/4U-Programming-language/blob/main/LICENSE.md) for more information.<br />
<a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/">
	<img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png" />
</a><br />
This work is licensed under a 
<a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/">
	Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License
</a>.
