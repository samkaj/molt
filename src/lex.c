#include "lex.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Token* lex(char* path) {
    char* contents = read_file(path);
    int num_tokens;
    struct Token* token_list = malloc(num_tokens * sizeof(struct Token));

    char* contents_copy = contents;
    while (*contents_copy != '\0') {
        printf("%c", *contents_copy);
        contents_copy++;
    }

    free(contents);
    return token_list;
}

char* read_file(char* path) {
    FILE* file = fopen(path, "r");
    if (file == NULL) {
        printf("Error: could not open path %s\n", path);
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* contents = (char*)malloc((file_size + 1) * sizeof(char));
    if (contents == NULL) {
        printf("Error: could not allocate memory for contents\n");
        fclose(file);
        return NULL;
    }

    size_t index = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        contents[index++] = ch;
    }
    contents[index] = '\0';

    fclose(file);
    return contents;
}
