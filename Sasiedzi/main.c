
#include <stdio.h>
const int N = 100;

int possible(w, k, n){
    if  (w >= 0 && w < n && k >= 0 && k < n) return 1;
    else return 0;
}

int main() {

    int n,r, tab[N][N], res[N][N];
    scanf("%d %d", &n, &r);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &tab[i][j]);
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int sum = 0;
            for (int w = i - r; w <= i + r; w++){
                for (int k = j - r; k <= j + r; k++){
                    if (possible(w, k, n) == 1) sum += tab[w][k];
                }
            }
            res[i][j] = sum;
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
