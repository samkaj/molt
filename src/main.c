#include "lex.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s <path>\n", argv[0]);
        return 1;
    }

    struct Token* tokens = lex(argv[1]);
    free(tokens);  
    return 0;
}
