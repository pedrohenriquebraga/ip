#include <stdio.h>
 
int main() {
 
    int n;
 
    scanf("%d", &n);
 
    while (n > 0) {
        
        int a, b;
        int reversedA = 0, reversedB = 0;

        scanf("%d%d", &a, &b);

        while (a > 0 && b > 0) {
          if (a > 0) {
            reversedA = reversedA * 10 + a % 10;
            a /= 10;
          }

          if (b > 0) {
            reversedB = reversedB * 10 + b % 10;
            b /= 10;
          }
        }
 
        if (reversedA > reversedB) {
          printf("%d\n", reversedA);
        } else {
          printf("%d\n", reversedB);
        }
 
        n--;
    }
    
 
    return 0;
}