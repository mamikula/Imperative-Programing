//Mamy daną tablicę A dodatnich liczb całkowitych o długości N, na której możemy wykonać co najwyżej K operacji.
// Operacja jest zdefiniowana następująco:
//1. Wybierz dowolny element tablicy A (A[i])
//2. Zastąp A[i] przez floor(A[i]/2)
//Proszę napisać program wyznaczający minimalną sumę elementów tablicy po wykonaniu
//na niej co najwyżej K operacji.


#include <stdio.h>

int ms(int T[], int N, int K) {
    int maks = 0;
    int mid = 0;
    while (K > 0){
        for (int i = 0; i < N; i++){
            if (T[i] > maks){
                maks = T[i];
                mid = i;
            }
        }
        T[mid] = T[mid] / 2;
        mid = -1;
        maks = 0;
        K--;
    }
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum += T[i];
    }
    return sum;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int T[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    int minsum = ms(T, N, K);
    printf("%d", minsum);
    return 0;
}
