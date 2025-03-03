#pragma once
#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H
#include "parser.h"   // AST, Variable
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void generate_c_code(PROGRAM *program, FILE* f);

#endif