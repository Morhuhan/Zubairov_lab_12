#include <stdio.h>
#include <malloc.h>

char* ucwords(char* string) {

    char* symbol = string;

    for (int i = 0; i < 255; i++) {

        if ( *(symbol) < 97 && (*(symbol + i) > 97)) {
            *(symbol + i) = *(symbol + i) - 32;
            break;
        }

    }

    for (int i = 0; i < 255; i++) {

        if (((*(symbol + i) < 49) || (*(symbol + i) > 57) || *(symbol + i) < 97) && (*(symbol + i + 1) != 32) && (*(symbol + i + 1) > 97)) {
            *(symbol + i + 1) = *(symbol + i + 1) - 32;
            if (*(symbol + i + 2) > 97) {
                i++;
            }
        }
    }

    return string;
}

int main() {

    char string[255] = "43,f,f  232ff, , , .!f";

    ucwords(string);

    for (int i = 0; i < 255; i++) {
        printf("%c", *(string + i));
    }

}
