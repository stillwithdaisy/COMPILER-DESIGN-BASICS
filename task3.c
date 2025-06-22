#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "register", "return", "short", "signed", "sizeof",
    "static", "struct", "switch", "typedef", "union", "unsigned", "void",
    "volatile", "while"
};

int isKeyword(char *word) {
    for (int i = 0; i < 32; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || 
            ch == '=' || ch == '<' || ch == '>' || ch == '!');
}

void analyzeFile(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Error: Cannot open file.\n");
        return;
    }

    char ch, buffer[100];
    int i = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalnum(ch) || ch == '_') {
            buffer[i++] = ch;
        } else if (isspace(ch) || ch == ';' || ch == ',' || ch == '(' || ch == ')'
                   || ch == '{' || ch == '}') {
            buffer[i] = '\0';
            i = 0;

            if (strlen(buffer) > 0) {
                if (isKeyword(buffer)) {
                    printf("[Keyword\t: %s]\n", buffer);
                } else {
                    printf("[Identifier\t: %s]\n", buffer);
                }
            }
        } else if (isOperator(ch)) {
            char next = fgetc(fp);
            if ((ch == '=' || ch == '<' || ch == '>' || ch == '!') && next == '=') {
                printf("[Operator\t: %c%c]\n", ch, next);
            } else {
                printf("[Operator\t: %c]\n", ch);
                ungetc(next, fp);
            }

            buffer[i] = '\0';
            i = 0;
        }
    }

    fclose(fp);
}

int main() {
    char filename[100];
    printf("Enter the file name: ");
    scanf("%s", filename);
    analyzeFile(filename);
    return 0;
}
