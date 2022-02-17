//Mając daną dodatnią liczbę całkowitą N, stwórzmy nową liczbę dodając kwadraty cyfr
//        liczby N. Można udowodnić, że postępując w ten sposób wielokrotnie otrzymamy w końcu
//wynik 1 lub 4.
//Przykład:
//13 = 12 + 32 = 1 + 9 = 10 (Krok 1)
//10 = 12 + 02 = 1 + 0 = 1 (Krok 2, kończymy iterację ponieważ uzyskaliśmy liczbę 1)
//Jeżeli w opisanej powyżej procedurze uzyskamy wynik 1, to liczbę N nazywamy “jednokwadratową”.
//Proszę napisać program, który znajduje K-tą liczbę w zadanym przedziale [L, U], która
//        jest jednocześnie jednokwadratowa i pierwsza.


#include<stdio.h>
#include<math.h>

int primes(int a){
    if (a < 2) return 0;
    int m = pow(a, 0.5);
    for (int i = 2; i <= m; i++){
        if (a % i == 0) return 0;
    }
    return 1;
}

int jk(a){
    if (a == 1) return 1;
    if (a == 4) return 0;
    int sum = 0;
    while (a > 0){
        sum += (a % 10) * (a % 10);
        a /= 10;
    }
    return jk(sum);
}
int generator(int L, int U, int K){
    int counter = 0;
    for (int i = L; i <= U; i++){
        if (jk(i) == 1 && primes(i) == 1){
            counter++;
            if (counter == K) return i;
        }
    }
    return -1;
}


int main() {
    int L, U, K;
    scanf("%d %d %d", &L, &U, &K);
    //printf("%d", primes(1));
    printf("%d", generator(L, U, K));
    return 0;
}
