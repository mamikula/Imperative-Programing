//Niech a =
//        Pm−1
//k=0 akb
//        k będzie m-cyfrową liczbą naturalną. Jej reprezentacja w układzie o
//        podstawie b jest zatem am−1 . . . a0 (gdzie 0 ¬ ak < b dla k = 0, . . . , m − 1). Jeśli dla tej
//        liczby zachodzi
//        a =
//        mX−1
//i=0
//ai
//        m
//to powiemy, że a jest m-narcystyczną liczbą w bazie b.
//Na przykład dla b = 10 liczba 153 jest liczbą 3-narcystyczną, ponieważ
//153 = 13 + 53 + 33
//a dla b = 3 liczbą 3-narcystyczną jest 122:
//122(3) = 17(10) = 13 + 23 + 23
//Napisz program, który znajduje wszystkie liczby m-narcystyczne o bazie b.
//2 Wejście
//        Pierwszy i jedyny wiersz standardowego wejścia zawiera dwie liczby naturalne 1 ¬ m ¬ 8
//(liczba cyfr szukanych liczb w układzie o podstawie b) i 2 ¬ b ¬ 16 (podstawa systemu
//liczenia).
//3 Wyjście
//        Pierwszy i jedyny wiersz standardowego wyjścia powinien zawierać znalezione liczby mnarcystyczne (wypisane w układzie o podstawie b) oddzielone znakiem spacji, lub napis
//NO jeżeli takich liczb nie ma. Dla liczb w systemach b > 10 dodatkowe cyfry powinny być
//zapisane jako kolejne duże litery alfabetu (A - F).
#include <stdio.h>
#include <math.h>

int czyjest(int num, int sys, int size){
    int sum = 0;

  while (num > 0){
      sum = sum + pow(num % sys, size);
      num /= sys;
  }
  return sum;
}


void printsys(num, sys){
    if (num > 0){
        printsys(num / sys, sys);
        if(num % sys > 9){
            if (num % sys == 10) printf("A");
            else if (num % sys == 11) printf("B");
            else if (num % sys == 12) printf("C");
            else if (num % sys == 13) printf("D");
            else if (num % sys == 14) printf("E");
            else if (num % sys == 15) printf("F");
        }
        else printf("%d", num % sys);
    }
}


int liczby_narcystyczne(int ilec, int sys){
    int jes = 0;
    for (int i = pow(sys,ilec - 1); i < pow(sys,ilec); i++){
        if (czyjest(i, sys, ilec) == i) {
            printsys(i, sys);
            printf(" ");
            jes = 1;
        }
    }
    return jes;
}


int main() {
    int ilec, sys;
    int jes;
    scanf("%d %d", &ilec, &sys);
    jes = liczby_narcystyczne(ilec, sys);
    if (jes == 0) printf("NO");
    return 0;
}


