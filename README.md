# C-py
Call in file "file.so" in python 


## INSTRUCTIONS

: run command in file program.c
"replace" file_name  for other name 


$ gcc -shared -o libname_file.so -fPIC file_name.c


## or method 

$ gcc -c -fPIC file_name.c -o file_name.o
$ gcc file_name.o  -shared -o libfile_name.so




