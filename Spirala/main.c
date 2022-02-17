#include <stdio.h>
#include <malloc.h>
int main() {

    int n;
    scanf("%d", &n);
    int a = 1, w = 0, k = n - 1;
    int **t;
    t = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++){
        t[i] = malloc(n * sizeof(int));
    }
    while (w < k){
        for (int i = w; i <= k; i++){t[w][i] = a++;}
        for (int j = w + 1; j <= k; j++){t[j][k] = a++;}
        for (int i = k - 1; i > w; i--){t[k][i] = a++;}
        for (int j = k; j > w; j--){t[j][w] = a++;}
        w++;
        k--;
    }
    if (w == k) t[w][k] = a;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++){
        free(t[i]);
    }
    free(t);
    return 0;
}
