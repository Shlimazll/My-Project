 
#include<stdio.h>
long int factor(int n);
int main() {
    int n;
    printf("Pozitif bir sayı girin: ");
    scanf("%d",&n);
    printf(" %d! = %ld", n, factor(n));
    return 0;
}
 
long int factor(int n) {
    if (n>=1)
        return n*factor(n-1);
    else
        return 1;
}
 
