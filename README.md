

<div style="display: flex; justify-content: center;">
  <img src="https://upload.wikimedia.org/wikipedia/commons/3/32/C%2B%2B_logo.png" alt="Image 1" style="width: 30%; margin-right: 10px;">
  <img src="https://upload.wikimedia.org/wikipedia/commons/8/83/The_GNU_logo.png" alt="Image 2" style="width: 30%; margin-left: 10px;">
</div>








## GNU C++ Compiler

A simple C/C++ compiler implemented in lex and yacc.

## Prerequisites

-   Download Bison (GNU Parser Generator):
```bash
wget http://ftp.gnu.org/gnu/bison/bison-2.3.tar.gz
```

-   Extract files from the downloaded Bison package:
```bash
tar -xvzf bison-2.3.tar.gz
```

-  Now, enter the directory where the download bison package is extracted.
```bash
./run.bash /path/to/input/file /path/to/output/directory
```

-  You also need to download flex
```bash
sudo apt-get update
sudo apt-get install flex
```




-  use `run.bash` to compile and generate the compiler.o :

```bash
./bash run.bash 
```

-  In the terminal write:
  
```bash
 ./compiler.o << filename.cpp:
```

    
