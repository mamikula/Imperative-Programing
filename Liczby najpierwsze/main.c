/*Dana jest liczba całkowita dodatnia n. Napisz program, który znajduje wszystkie liczby
pierwsze mniejsze od n, których cyfry tworzą ciąg niemalejący*/


#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int flag;

    for (int i = 2; i < n; i++) {
        flag = 1;

        int tmp = i;
        while (tmp > 0) {
            if (tmp % 10 < (tmp / 10) % 10) {
                flag = 0;
                break;
            }
            tmp /= 10;
        }
        if (flag) {
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0 && i != 2) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag) printf("%d\n", i);
    }
    return 0;
}