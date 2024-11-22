/*A literal_table module, which the gen_code module would use to find the values of nu-
meric literals used in the program.*/

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