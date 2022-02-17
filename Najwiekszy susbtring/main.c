#include <stdio.h>


int main() {
    char napis[51];
    scanf("%s", &napis);
    int p = 0;
    char maks;
    int cnt = 0;

    while (napis[p] > 0) {
        maks = "";
        for (int i = p; napis[i] != 0; i++) {
            if (napis[i] > maks) {
                maks = napis[i];
                p = i;
                cnt = 1;
            }
            else if (napis[i] == maks) {
                cnt++;
                p = i;
            }
        }
        for (int j = 0; j < cnt; j++) {
            printf("%c", maks);
        }
        p++;


    }
    return 0;
}