#include <stdio.h>

int main() {

    int i;
    
    scanf("%d", &i);

    while (i > 0) {

        double temp, c;

        scanf("%lf", &temp);

        c = (5 * (temp - 32)) / 9.0;

        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", temp, c);
        i--;
    }

    return 0;
}