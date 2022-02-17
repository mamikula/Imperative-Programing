#include <stdio.h>
#include <malloc.h>
const int S = 201;


int main() {
    int **T;
    T = malloc(S * sizeof(int *));
    for (int i = 0; i < S; i++) T[i] = malloc(S * sizeof(int));

    int N;
    scanf("%d", &N);
    int **rec;
    rec = malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) rec[i] = malloc(4 * sizeof(int));

    for (int i = 0; i < N; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &rec[i][j]);
        }
    }

    for (int i = 0; i < S; i++){
        for (int j = 0; j < S; j++){
            T[i][j] = 0;
        }
    }

    int x,y,xe, ye;
    for (int i = 0; i < N; i++){
        if (rec[i][0] < rec[i][2]) {x = rec[i][0]; xe = rec[i][2];}
        else {x = rec[i][2]; xe = rec[i][0];}
        for (; x < xe; x++){
            if (rec[i][1] < rec[i][3]) {y = rec[i][1]; ye = rec[i][3];}
            else {y = rec[i][3]; ye = rec[i][1];}
            for (; y < ye; y++){
                if (T[x + 100][y + 100] == 1) T[x + 100][y + 100] = 0;
                else T[x + 100][y + 100] = 1;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < S; i++){
        for (int j = 0; j < S; j++){
            if (T[i][j] == 1) cnt++;
        }
    }
    printf("%d", cnt);

    for (int i = 0; i < S; i++){
        free(T[i]);
    }
    free(T);


    for (int i = 0; i < N; i++){
        free(rec[i]);
    }



    return 0;
}
