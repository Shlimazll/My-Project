 
#include <stdio.h>
int main() {
    int n, reversedN = 0, remainder, originalN;
    printf("Sayý: ");
    scanf("%d", &n);
    originalN = n;
 
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
 
    if (originalN == reversedN)
        printf("%d sayýsý palindromik sayýdýr.", originalN);
    else
        printf("%d sayýsý palindromik sayý deðildir.", originalN);
 
    return 0;
}
 
