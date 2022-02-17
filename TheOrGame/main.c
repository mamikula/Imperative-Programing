#include <stdio.h>
#include <malloc.h>


int min(int a, int b){
    if (a < b) return a;
    else return b;
}

int len_num(int G){
    int ct = 0;
    while (G > 0){
        G /= 2;
        ct += 1;
    }
    return ct;
}

int num_ones(int x){
    int cnt = 0;
    while (x > 0){
        if (x % 2 == 1) cnt += 1;
        x /= 2;
    }
    return cnt;
}

int main() {


    int N, G;
    scanf("%d %d", &N, &G);
    int* T;
    T = malloc(N * sizeof( int *));
    for(int i = 0; i < N; i++){ scanf("%d", &T[i]);  }
    int GO = num_ones(G);
    int maks = 0;
    for (int i = 0; i < N; i++)
        if (T[i] > maks) maks = T[i];


    int len = len_num(maks);

    for (int i = 0; i < len; i++){
        if (!(G & (1 << i))){
            for (int k = 0; k < N; k++){
                    if (T[k] & (1 << i)) T[k] = -1;
                }
        }
    }



    int ao = 0;
    int co;
    for(int i = 0; i < N; i++){
        co = 0;
        for (int k = 0; k < len; k++) {
            if (T[i] & (1 << k)){
                co += 1;
                ao += 1;
            }
        }
        if (T[i] != -1 && co == 0){
            printf("0");
            return 0;
        }
    }
    if (ao < GO){
        printf("0");
        return 0;
    }


    int cnt;
    int cntm = 10000000;


    for (int i = 0; i < len; i++){
        if (G & (1 << i)){
            cnt = 0;
            for (int k = 0; k < N; k++) {
                if ((T[k] & (1 << i)) && T[k] != -1){
                    cnt += 1;}
            }
            cntm = min(cntm, cnt);
        }
    }

    printf("%d", cntm);
    free(T);

    return 0;
}
