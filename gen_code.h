/*A gen_code module that generates BOF files for the VM from SPL programs (by walking over the
AST). The functions gen_code_initialize and gen_code_program are called from the
compiler’s main (in compiler_main.c).*/

#include <stdio.h>
