 
#include <stdio.h>
int main() {
    int n, reversedN = 0, remainder, originalN;
    printf("Say�: ");
    scanf("%d", &n);
    originalN = n;
 
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
 
    if (originalN == reversedN)
        printf("%d say�s� palindromik say�d�r.", originalN);
    else
        printf("%d say�s� palindromik say� de�ildir.", originalN);
 
    return 0;
}
 
