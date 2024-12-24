# Modifying a Variable Through a Pointer in C

This repository demonstrates a common error in C programming where a variable is modified indirectly through a pointer. This can lead to unexpected behavior if not handled correctly. 

The `bug.c` file contains the erroneous code that modifies a variable through a pointer. The `bugSolution.c` file provides the corrected version and explanation.

## How to run

1.  Clone the repository.
2.  Compile the code using a C compiler (e.g., GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
3.  Run the executables:
   ```bash
   ./bug
   ./bugSolution
   ```