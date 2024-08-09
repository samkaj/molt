#pragma once

#include "token.h"

/**
 * Read the path to a file and return a list of tokens.
 */
struct Token* lex(char* path);

/**
 * Read the contents of a file.
 */
char* read_file(char* path);
