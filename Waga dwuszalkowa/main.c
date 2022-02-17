//Mamy dany zestaw n odważników o masach danych liczbami naturalnymi.
// Napisz program, który sprawdza, czy zadany ciężar w można zważyć przy
// pomocy wagi dwuszalkowej (czyli odważniki mogą być po obu stronach wagi).
//2 Wejście
//        Pierwszy wiersz standardowego wejścia zawiera dwie liczby naturalne 1 ¬ n ¬ 100 (liczba
//        odważników, jakie mamy do dyspozycji) i 1 ¬ w ¬ 106
//(masa, jaką chcemy zważyć).
//W kolejnym wierszu znajduje się dokładnie n liczb naturalnych: masy poszczególnych
//odważników.
//3 Wyjście
//        W pierwszym i jedynym wierszu standardowego wyjścia powinien znajdować się napis YES
//        jeżeli masę w można zważyć używając dowolnego podzbioru posiadanych odważników i
//napis NO w przeciwnym przypadku.



#include <stdio.h>


int waga(int odw[],int masa, int n){
    if (masa == 0) return 1;

    if (n == -1)  return 0;

    return (waga(odw, masa - odw[n], n - 1) ||
            waga(odw, masa + odw[n], n - 1) ||
            waga(odw, masa, n - 1));
}

int main() {

    int n, masa, sum = 0;
    scanf("%d %d", &n, &masa);

    int odw[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &odw[i]);
        sum += odw[i];
        //printf("%d %d", odw[i], sum);
    }
    if (sum >= masa){
        if (waga(odw, masa, n - 1) == 1) printf("YES");
        else printf("NO");
    }
    else printf("NO");

    return 0;
}
