#include <stdio.h>
#include <malloc.h>

char* ucwords(char* string) {

    char* symbol = string;

    *symbol = *symbol - 32;
    
    for (int i = 0; i < 16; i++) {

        if (*symbol == ' '){
        *(symbol + 1) = *(symbol + 1) - 32;
        }

        symbol++;
    }

    return string;
}

int main() {

    char string[17] = "he lo h lo hello";

    ucwords(string);

    for (int i = 0; i < 17; i++) {
        printf("%c", *(string + i));
    }

}
