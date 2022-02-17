#include <stdio.h>
#include <malloc.h>


int main() {
    int n, k, l;
    scanf("%d %d %d", &n, &k, &l);

    int **T;
    T = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++){
    T[i] = malloc(n * sizeof(int));
    }

    int **P;
    P = malloc(k * sizeof(int *));
    for (int i = 0; i < l; i++){
        P[i] = malloc(l * sizeof(int));
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &T[i][j]);
        }
    }

    for (int i = 0; i < k; i++){
        for (int j = 0; j < l; j++){
            scanf("%d", &P[i][j]);
        }
    }


    int sum;
    int maksum = 0;
    for (int i = 0; i < n - k; i++){
        for (int j = 0; j < n - l; j++){
            sum = 0;
            for (int x = 0; x < k; x++){
                for (int y = 0; y < l; y++){
                    if (P[x][y] == 1){
                        sum += T[x + i][y + j];
                    }
                }
            }
            if (sum > maksum) maksum = sum;
        }
    }
    printf("%d", maksum);


    return 0;
}
//5 2 2
//5 1 0 1 0
//2 3 4 7 1
//2 7 4 0 1
//1 8 5 1 9
//0 1 6 3 0
//0 1
//1 0