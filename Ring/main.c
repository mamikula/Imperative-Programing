#include <stdio.h>
#include <math.h>
#include <string.h>


int primes(int x){

    int cnt = 0;
    for (int i = 2; i <= pow(x, 0.5); i++) {
        if (x % i == 0) cnt++;
    }
    if (cnt == 0) return 1;
    else return 0;
}


int main() {

    char s[50], odp[51], tmp[51],  min_l;


    scanf("%s", s);
    int n = strlen(s);
    min_l = s[0];

    for (int i = 0; i < n; i++){
        odp[i] = s[i];
        if (s[i] < min_l) min_l = s[i];
    }






    for (int i = 0; i < n; i++){
        if (s[i] == min_l){
            for (int j = 2; j < n; j++) {
                if (primes(j) == 1) {
                    for (int k = 0; k < n; k++) {
                        tmp[k] = s[(i + (k * j)) % n];
                    }
                    int is = 0;
                    for (int k = 0; k < n; k++) {
                        if (tmp[k] < odp[k]) {
                            is = 1;
                        }
                        if (tmp[k] > odp[k]) break;

                    }
                    if (is == 1) {
                        for (int l = 0; l < n; l++) {
                            odp[l] = tmp[l];
                        }
                    }
                }
            }
        }

    }
    for(int i = 0; i < n; i++){
        printf("%c", odp[i]);
    }

    return 0;
}
