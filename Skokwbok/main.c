#include <stdio.h>
#include <malloc.h>

void lewo(int T[], int z){
    T[z] -= 1;
    T[z - 1] += 1;
    T[z - 2] += 1;
}

void prawo(int T[], int x){
    T[x] -= 1;
    T[x + 1] -= 1;
    T[x + 2] += 1;
}

void rozladowanie(int T[], int c){
    lewo(T, c);
    prawo(T, c - 1);
    prawo(T, c);
}



int main() {

    int bool = 1, n;

    scanf("%d", &n);

    int **pionki;
    pionki = malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++) pionki[i] = malloc(2 * sizeof(int *));


    for(int i = 0; i < n; i++){
        scanf("%d %d", &pionki[i][0], &pionki[i][1]);
    }

    int rozmiar = 80 + pionki[n - 1][0] - pionki[0][0];

    int *plansza;
    plansza = malloc((rozmiar * sizeof(int *)));


    for(int i = 0; i < rozmiar; i++){
        plansza[i] = 0;
    }

    for(int i = 0; i < n; i++){
        plansza[pionki[i][0] + 40] = pionki[i][1];
    }


    while (bool == 1){
        bool = 0;
        for(int i = 0; i < rozmiar; i++){
            if (plansza[i] >= 3) {
                bool = 1;
                int ile = plansza[i] / 3;
                while(ile > 0){
                    rozladowanie(plansza, i);
                    ile -= 1;
                }
            }
        }
    }


    int l = 0;
    int pole = rozmiar - 1;

    while (plansza[pole] == 0){
        pole -= 1;
    }


    bool = 1;

    while (bool == 1) {

        while (plansza[l] == 0){
            l += 1;
        }

        if (plansza[pole] > 0 && plansza[pole + 1] > 0) {
            prawo(plansza, pole);
            pole += 2;
        }
        else if (plansza[pole] == 2 & plansza[pole - 1] > 0){
            pole = pole - 1;
        }
        else if (plansza[pole] == 2 && plansza[pole + 1] == 0) {
            lewo(plansza, pole);
            prawo(plansza, pole - 1);
            pole += 1;

        }
        else if (plansza[pole] == 3) {
            rozladowanie(plansza, pole);
            pole = pole + 2;

        }
        else if (l == pole) bool = 0;

        else {
            pole = pole - 1;
            while (plansza[pole] == 0){
                pole -= 1;
            }
        }
    }


    for(int i = 0; i < rozmiar; i++){
        if(plansza[i] != 0) printf("%d ",i - 40);
    }

//    for(int i = 0; i < n; i++) free(pionki[i]);
//    free(pionki);


}
