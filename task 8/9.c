#include <stdio.h>
#include <math.h>

int main() {
    long long binary,bin;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    bin=binary;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }

    printf("%lld in binary = %d in decimal", bin,decimal);

    return 0;
}
