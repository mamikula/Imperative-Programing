#include <stdio.h>
#include <malloc.h>
#include <math.h>


int main() {
    int n, m, wy;
    scanf("%d %d %d", &n, &m, &wy);

    int **wejscia;

    wejscia = malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) wejscia[i] = malloc(2 * sizeof(int));

    for(int i = 0; i < m; i++){
        scanf("%d %d", &wejscia[i][0], &wejscia[i][1]);
    }

    // liczby binarne wczytywane jako napis
    char num1[m], num2[m];
    scanf("%s %s", num1, num2);
    int n1 = 0, n2 = 0;

    //zamiana napisu z liczbami binarnymi na liczby dziesietne
    int il = 1;
    for(int i = n - 1; i >= 0; i--){
        if (num1[i] == '1'){
            n1 += il;
        }
        il *= 2;
    }
    il = 1;
    for(int i = n - 1; i >= 0; i--){
        if (num2[i] == '1'){
            n2 += il;
        }
        il *= 2;
    }

    //tablica zawierajaca informacje czy bramka juz dzialala
    int *bramki;
    bramki = malloc(m * sizeof(int *));



    int l, p, tmp, cnt = 0; // l - lewe wejscie, p - prawe wejscie do bramki, tmp - wylicznik do bitu w liczbie, cnt - licznik jedynek
    for(;n1 <= n2; n1++) {
        for(int s = 0; s < m; s++) bramki[s] = -1;
        while (bramki[wy - 1] == -1) {
            for (int i = 0; i < m; i++) {
                l = -1;
                p = -1;
                if (bramki[i] == -1) {
                    if (wejscia[i][0] < 0){
                        tmp = n - (wejscia[i][0] *(-1));
                        if (n1 &(1 << tmp)) l = 1;
                        else l = 0;
                    }
                    else l = bramki[wejscia[i][0] - 1];

                    if (wejscia[i][1] < 0){
                        tmp = n - (wejscia[i][1] *(-1));
                        if (n1 &(1 << tmp)) p = 1;
                        else p = 0;
                    }
                    else p = bramki[wejscia[i][1] - 1];

                    if(l != p && l != -1 && p != -1) bramki[i] = 1;
                    else if(l == p && l != -1) bramki[i] = 0;
                }
            }
        }
        if (bramki[wy - 1] == 1) cnt += 1;
    }
    printf("%d", cnt);

    free(bramki);
    for(int i = 0; i < m; i++) free(wejscia[i]);
    free(wejscia);


    return 0;
}
