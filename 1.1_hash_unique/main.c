#include <stdio.h>
#include <stdbool.h>


bool dupHash(char* word) {
    char alphabet[26];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 0;
    }

    while (*word != '\0') {
        if (*word >= 'A' && *word <= 'Z' ) {
            *word = *word + 32;
        }
        int index = *word - 'a';
        if (alphabet[index] == 0) {
            alphabet[index] = 1;
        }else {
            return false;
        }
        word++;
    }

    return true;
}

int main(void) {
    char word []= "Maxinkuckee";
    printf("%s", dupHash(word)? "true":"false");
    return 0;
}