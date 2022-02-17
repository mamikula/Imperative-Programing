/*Napisz program, który dla zadanej liczby naturalnej n odpowiada na pytanie, czy liczba
ta jest iloczynem dowolnych dwóch kolejnych wyrazów ciągu Fibonacciego. Zakładamy,
że pierwsze dwa wyrazy ciągu Fibonacciego to 0 i 1.*/

#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int x;
    scanf("%d", &x);
    while (a*b <= x){

        if (a * b == x){
            printf("YES");
            return 0;
        }

        b = a + b;
        a = b - a;
    }
    printf("NO");


    return 0;
}
