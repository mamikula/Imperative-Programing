/*Liczba doskonała jest to taka liczba naturalna, która jest sumą wszystkich swych dzielników właściwych (to znaczy od niej mniejszych).
 * Najmniejszą liczbą doskonałą jest 6,
ponieważ jej dzielnikami właściwymi są 1, 2, 3 i 1 + 2 + 3 = 6.
Napisz program, który znajduje wszystkie liczby doskonałe w zadanym przedziale oraz
ich liczbę.*/
#include <math.h>
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int counter = 0;
    int sum;
    int result[m-n];
    int id = -1;

    for (int i = n; i <= m; i++) {
        sum = 1;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) sum += j + i / j;
        }

        if (sum == i && sum != 1) {
            counter += 1;
            id += 1;
            result[id] = i;
        }
        //printf("%d\n", i);
    }
    printf("%d\n", counter);
    for (int i = 0; i <= id; i++){
        printf("%d ", result[i]);
    }
    return 0;
}

