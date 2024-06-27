#include <stdio.h>

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to check (0-31): ");
    scanf("%d", &n);

    if (num & (1 << n)) {
        printf("The %d bit is set to 1\n", n);
    } else {
        printf("The %d bit is set to 0\n", n);
    }

    return 0;
}
