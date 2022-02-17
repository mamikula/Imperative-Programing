//Dana jest tablica int t1[N][N]. W każdym wierszu tablicy t1 znajdują się uporządkowane rosnąco (w obrębie wiersza) liczby naturalne. Proszę napisać program, który łączy
//wiersze tablicy t1 i buduje liniową tablicę t2[N ∗ N] tak, aby liczby w tablicy t2 były
//unikalne (nie powtarzały się) i były uporządkowane rosnąco.
//Uwaga: Ponieważ elementy w tablicy t1 mogą sie powtarzać, faktyczna długość tablicy
//t2 może być mniejsza niż N ∗ N.

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int T1[101][101];
    int T2[10000];
    int Tid[101];


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &T1[i][j]);
        }
    }

    int transfer = 0, minid = 0, sms, mini;

    while(1){
        sms = 0;
        mini = 999999999;

        for (int i = 0; i < N; i++) {
            if (Tid[i] == N) continue;

            if (T1[i][Tid[i]] < mini) {
                minid = i;
                mini = T1[i][Tid[i]];
                sms = 1;
           }
        }
        if (sms == 0){
            for (int j = 0; j < transfer; j++){
                printf("%d ", T2[j]);
            }
            return 0;
        }
        if (transfer == 0){
            T2[0] = T1[minid][0];
            Tid[minid]++;
            transfer++;
        }
        else if(mini > T2[transfer - 1]){
            T2[transfer] = mini;
            Tid[minid]++;
            transfer++;
        }
        else Tid[minid]++;
    }
}



