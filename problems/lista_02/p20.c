#include <stdio.h>
 
int main() {
 
    unsigned long int num, l = 1, c = 1, graos = 0;
 
    scanf("%ld", &num);
 
    while (l <= 8) {
        while (c <= 8) {
            if (l == 1 && c == 1) {
                graos = num;
            } else {
                if (l % 2 == 1 && c % 2 == 1) {
                    graos = graos + num * 2;
                } else if (l % 2 == 0 && c % 2 == 0) {
                    graos = graos + num * 2;
                } else {
                    graos += num;
                }
            }
 
            c++;
        }
        l++;
        c = 1;
    }
    
    printf("%ld", graos);
 
    return 0;
}