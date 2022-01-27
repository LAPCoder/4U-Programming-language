# 4U (Programming language)

It's [my (@LAPCoder)](https://github.com/LAPCoder) programming language.
(Please put a ⭐ if you lke it 😀!)

```
    ____     _      _      _____   _____   _____   _____    ___    _   _   _   _   _____   _   _   _____ 
   / _  |   | |    | |    |  .  \ |  .  \ /  _  \ /  ___\  / ^ \  | \_/ | | \_/ | |_   _| |  \| | /  ___\
  / / | |   | |    | |    |  ___/ |  _  / | |_| | | |_;¨; /  _  \ | \_/ | | \_/ |  _| |_  | \ \ | | |_;¨;
 / /__| |___| |    | |    |_|     |_| \_\ \_____/ \_____/ |_| |_| |_| |_| |_| |_| |_____| |_|\__| \_____/
/___    ____  \____/ /
    |__|     \______/      _        ___    _   _   _____   _   _    ___    _____   _____ 
                          | |      / ^ \  |  \| | /  ___\ | | | |  / ^ \  /  ___\ |  ---'
                          | |___  /  _  \ | \ \ | | |_;¨; | \_/ | /  _  \ | |_;¨; |  ===
                          |_____| |_| |_| |_|\__| \_____/ \_____/ |_| |_| \_____/ |_____|
```

## Lastest version

V0.0.0 is the lastest version.
V0.0.1 is in developpement.

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

You must have ```gcc```, ```bison``` or ```yacc```, ```flex``` or ```lex``` and ```glib``` for modify.
If you want not modify, you must have ```gcc```, and go to step 1, 5, 6 and 7.
If you want execute example-program, just go to step 1 and 7.

## 1: Go to your directory

### Windows

On Windows, enter this command:
```batch
cd <directory name>
```
\<directory name\> is the directory where you installed folder "4u vX.X.X" (X.X.X is your version number).
It's like ```C:\Users\user\Documents\4U\4U 0.0.0```

### Linux

On Linux, enter this command:
```bash
cd <directory name>
```
\<directory name\> is the directory where you installed folder "4u vX.X.X" (X.X.X is your version number).
It's like ```/home/user/Documents/4U/4U\ 0.0.0``` (for with space enter ```\ ```).

## 2: Compile the lexical analyzer
  
Enter this command (if you use ```flex```):
```bash
flex -o lexique_4u.c lexique_4u.lex
```
## 3: Compile the syntax analyzer
  
Enter this command (if you use ```bison```):
```bash
bison -d syntaxe_4u.y
```

## 4: Compile the compiler
  
Enter this command (if you use ```gcc```):
```bash
gcc lexique_4u.c syntaxe_4u.tab.c generation_code.c `pkg-config --cflags --libs glib-2.0` -o 4u
```

## 5: Execute the 4u program

Enter this command (if you use ```gcc```) in a terminal (CMD):
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

# LICENSE

See the [LICENSE.md](https://github.com/LAPCoder/4U-Programming-language/blob/main/LICENSE.md) for more information.
