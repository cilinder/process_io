# process_io
Little C program for measuring resource usage of executing some program

To use:

## Linux

Clone the repository:
```
git clone https://github.com/cilinder/process_io.git
```
Compile the code (you need [gcc installed](https://gcc.gnu.org/install/))

```
cd process_io; mkdir bin; gcc src/process_io.c -o bin/process_io;
```
Use:
```
./bin/process_io <command>
```
Gives the memory consumption of `<command>`.
