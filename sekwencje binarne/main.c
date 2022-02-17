#include <stdio.h>
#include <malloc.h>

void bins(int res[], int fib[], int k, int n){
    if (k <= 0) {
        for (int i = n - 1; i >= 0; --i){
            printf("%d", res[i]);
        }
        return;
    }

    for (int i = 24; i >= 0; --i){
        if (fib[i] <= k){
            res[i] = 1;
            if (fib[i] == 0) k -= 1;
            else k = k - fib[i];
            return bins(res, fib, k, n);
        }
    }

}


int main() {

    int n, k;
    scanf("%d %d", &n, &k);


    int **res;
    res = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++){
        res[i] = 0;
    }

    int fib[25];
    fib[0] = 0;
    fib[1] = 2;
    fib[2] = 3;
    for (int i = 3; i < 25; i++){
        fib[i]  = fib[i - 1] + fib[i - 2];
    }

    if(k >= fib[n]) {
    printf("%d", -1);
    }
    else bins(res, fib, k - 1, n);

    free(res);
    return 0;
}
