//Napisz program, który przyjmuję tablicę liczb naturalnych i zwraca taki indeks, że sumy
//        wartości elementów tablicy na lewo i na prawo od wyznaczonego miejsca są równe. Można
//        założyć, że rozwiązanie istnieje.
//2 Wejście
//        W pierwszym wierszu standardowego wejścia znajduje się jedna dodatnia liczba całkowita
//1 ¬ n ¬ 1000 oznaczająca liczbę elementów tablicy. Kolejny wiersz zawiera dokładnie n
//        liczb całkowitych - elementy tablicy.
//3 Wyjście
//        Na standardowym wyjściu programu powinna znaleźć się jedna liczba - indeks elementu
//dzielącego tablicę na dwie części o równych sumach.

#include <stdio.h>

int sums(int tab[], int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += tab[i];
    }
    int sum2 = 0;
    for (int i = 0; i <=n; i++){
        sum -= tab[i];
        if (sum2 == sum) return i;
        sum2 += tab[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }
    printf("%d", sums(tab, n - 1));
    return 0;
}
