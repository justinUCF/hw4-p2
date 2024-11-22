/*A gen_code module that generates BOF files for the VM from SPL programs (by walking over the
AST). The functions gen_code_initialize and gen_code_program are called from the
compiler’s main (in compiler_main.c).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bof.h"
#include "lexer.h"
#include "parser.h"
#include "unparser.h"
#include "ast.h"
#include "utilities.h"
#include "symtab.h"
#include "scope_check.h"

// Initialize the code generator
extern void gen_code_initialize();

// Requires: bf is open for writing
// Generate code for prog into bf
extern void gen_code_program(BOFFILE bf, block_t prog);