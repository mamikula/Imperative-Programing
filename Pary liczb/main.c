//Mamy daną tablicę A liczb całkowitych o długości N oraz liczbę całkowitą K. Element
//        tablicy Ai ma parę, jeżeli w tablicy znajduje się inny element, Aj != Ai
//, o wartości z
//        przedziału [Ai − K, Ai + K]
//Proszę napisać program, który wylicza liczbę elementów, które mają parę.

#include <stdio.h>
#include <stdlib.h>


int my_compare(const void *a, const void *b) {
    int _a = *(int *) a;
    int _b = *(int *) b;
    if (_a < _b) return -1;
    else if (_a == _b) return 0;
    else return 1;
}


int pairs(int T[], int N, int K){
    int cnt = 0;
    for (int i = 0; i < N;){
        int tmp = 0, j = i;
        while (j != N && T[j] == T[i]){
            j++;
            tmp++;
        }
        if (i != 0 && T[i - 1] >= T[i] - K) cnt += tmp;
        else if (j != N && T[j] <= T[j - 1] + K) cnt += tmp;
        i = j;
    }
    printf("%d ", cnt);
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int *T = (int *) calloc(N, sizeof(int));
    for (int i = 0; i < N; ++i) { scanf("%d", &T[i]); }
    qsort(T, N, sizeof(int), my_compare);
    pairs(T, N, K);
}


