# Notes
## How to create a static lib?
- Using "ar" and "ranlib" commands
### 1. Create the archive file

```
ar rc libname.a foo.o bar.o
```

where `foo.o` and `bar.o` are the compiled versions of the c file containing the utility functions.
- `r` flag is used to replace old libraries with same name
- `c` flag is used to create the lib if it does not exist

### 2. Index it
After an archive (.a) file is created we need to index it:
```
ranlib libname.a
```
or we can add s to the ar command so the final command would be: 
```
ar rcs libname.a foo.o bar.o
```
## How to use lib after creation?
```
gcc main.c -L. -lname -o prog
```
Where we replace *'libname.a'* with *'-lname'* (aka remove .a extenssion and replace lib with -l while keeping the same name after lib).

Also the `-L` is used to refer to the lib location, so `-L.` means that the libname.a is in the current directory.

## Tips
- When we copy `libname.a` file we use `cp -p` not `cp` to *keep permissions and ownerships also its last modification date*
