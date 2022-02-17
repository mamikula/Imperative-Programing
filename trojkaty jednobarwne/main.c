#include <stdio.h>
#include <malloc.h>


int main() {
    int n, m, l, r;
    scanf("%d %d", &n, &m);
    int *T = malloc(sizeof(int) * (n + 1));
    for(int i = 0; i <= n ; i++) T[i] = 0;
    while (m > 0){
        scanf("%d %d", &l, &r);
        T[l]+=1;
        T[r]+=1;
        m--;
    }

    int difcol = 0;
    for (int i = 1; i < n + 1; i++){
        difcol += (T[i] * (n - 1 - T[i]))/2;
    }
    int onecol;
    onecol = (n * (n - 1) * (n - 2))/6 - difcol;
    printf("%d", onecol);

    return 0;
}
