//Dana jest tablica kwadratowa T[n][n] wypełniona liczbami naturalnymi oraz liczba naturalna k.
// Kwadratem zawartym w tablicy będziemy nazywać kwadrat o bokach złożonych
//z nieparzystej i większej od 1 liczby elementów całkowicie zawartych w tablicy. Proszę
//        napisać program, który w poszukuje w tablicy T kwadratów w niej zawartych, których
//suma elementów na obwodzie wynosi k. Program powinien wypisać liczbę znalezionych
//        kwadratów oraz współrzędne (indeks wiersza i kolumny) ich środków.
//Uwaga: Dany element tablicy może być środkiem kilku poszukiwanych kwadratów.

#include <stdio.h>
#include <malloc.h>
int min(int a, int b){
    if (a < b) return a;
    else return b;
}

int main() {
    int n, sumka, r = 1, cnt = 0, k;
    scanf("%d %d", &n, &k);


    int **T;
    T = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++){
        T[i] = malloc(n * sizeof(int));
    }

    int score[n*n][2];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &T[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            r = 1;
            while (r <= min(min(min(i, j), n - i - 1), n - j - 1)){
                sumka = 0;
                for (int l = 0; l < 2*r; l++){
                    sumka += T[i - r][j - r + l] +
                             T[i - r + l][j + r] +
                             T[i + r][j + r - l] +
                             T[i + r - l][j - r];
                }
                if (sumka == k){
                    score[cnt][0] = i;
                    score[cnt][1] = j;
                    cnt++;
                }
                r++;
            }
        }
    }

    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++) {
        printf("%d %d\n", score[i][0], score[i][1]);
    }


    for (int i = 0; i < n; i++){
        free(T[i]);
    }
    free(T);

    return 0;
}

