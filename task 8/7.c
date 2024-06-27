#include <stdio.h>

int main() {
   char *src = "Hello, world!";
    char cpy[50];
    int i = 0;

    while (src[i] != '\0') {
        cpy[i] = src[i];
        i++;
    }
    cpy[i] = '\0';
    printf(" Source string: %s\n", src);
    printf("Copied string: %s\n", cpy);

    return 0;
}
