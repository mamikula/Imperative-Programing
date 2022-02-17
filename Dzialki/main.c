#include <stdio.h>
#include <malloc.h>


int main() {

    int n;
    scanf("%d", &n );

    int max = 0, field, stop = 0;

    int **T;
    T = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++){
        T[i] = malloc(n * sizeof(int));
    }


    for (int i = 0;  i < n; i++){
        for (int j = 0; j < n ; j++){
            scanf("%d", &T[i][j]);
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int w = i + 1; w < n; w++){
                for (int k = j + 1; k < n; k++){
                    field = (w - i + 1) * (k - j + 1);
                    if (field < max) continue;
                    stop = 0;
                    for (int x = i; x <= w; x++){
                        for (int y = j; y <= k; y++){
                            if (T[x][y] == 1){
                                stop = 1;
                                break;
                            }
                        }
                        if (stop == 1) break;
                    }
                    if (stop == 0){
                        if (max < field) max = field;
                    }
                }
            }
        }
    }

    printf("%d", max);

    for (int i = 0; i < n; i++){
        free(T[i]);
    }
    free(T);

return 0;

}
