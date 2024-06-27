#include <stdio.h>

int main() {
    int number, zeroBits = 0, oneBits = 0;
    int totalBits = sizeof(int) * 8;
    printf("Enter the  number: ");
    scanf("%d", &number);
    for (int i = 0; i < totalBits; i++) {
        if (number & (1 << i)) {
            oneBits++;
        } else {
            zeroBits++;
        }
    }

    printf("Total zero bit is %d\n", zeroBits);
    printf("Total one bit is %d\n", oneBits);

    return 0;
}
