/*A gen_code module that generates BOF files for the VM from SPL programs (by walking over the
AST). The functions gen_code_initialize and gen_code_program are called from the
compiler’s main (in compiler_main.c).*/

#ifndef GEN_CODE_H
#define GEN_CODE_H

#include <stdio.h>
#include "bof.h"
#include "ast.h"
#include "utilities.h"
#include "code.h"
#include "code_seq.h"
#include "code_utils.h"
#include "literal_table.h"
