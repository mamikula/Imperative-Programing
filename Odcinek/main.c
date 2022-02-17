#include <stdio.h>
#include <malloc.h>


int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int **T;
    T = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        T[i] = malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &T[i][j]);
        }
    }
    int sumpi, sumpoz, sums1, sums2;
    int maksum = -1000;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            sumpi = 0;
            sumpoz = 0;
            sums1 = 0;
            sums2 = 0;

            //pion
            for (int z = j; z < k + j; z++){
                sumpi += T[i][z%n];
            }
            if (sumpi > maksum) maksum = sumpi;

            //poz
            for (int z = i ; z < k + i; z++){
                sumpoz += T[z%n][j];
            }
            if (sumpoz > maksum) maksum = sumpoz;

            //skos lewy gorny prawy dolny
            for (int z = 0; z < k; z++){
                int x = i + z;
                int y = j + z;
                sums1 += T[x%n][y%n];
            }
            if (sums1 > maksum) maksum = sums1;

            //skos lewy dolny prawy gorny
            for (int z = 0; z < k; z++){
                int x = i - z;
                int y = j + z;
                if (x < 0) x = n + x;
                if (y >= n) y = y - n;
                sums2 += T[x][y];
            }
            if (sums2 > maksum) maksum = sums2;

        }
    }
    printf("%d", maksum);
    return 0;
}



//
//5 2
//8 1 0 1 0
//2 3 4 7 1
//2 7 4 0 1
//1 8 5 1 4
//0 1 6 3 9

//5 4
//1 1 1 1 1
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0

//3 3
//1 6 5
//9 6 4
//10 9 2


//6 6
//3 4 8 6 2 2
//7 6 3 8 6 4
//8 9 9 5 8 6
//4 9 8 8 2 5
//10 5 6 8 2 3
//6 7 5 6 5 7


//
//5 2
//8 1 0 1 0
//2 3 4 7 1
//2 7 4 0 1
//1 8 1 1 4
//0 1 6 3 9