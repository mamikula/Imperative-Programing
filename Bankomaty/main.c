#include <stdio.h>
#include <malloc.h>
#include <string.h>


void dziel(int t[],int i){
    if(t[0]==0){t[0]=1; }
    else{t[0]=0; }
    for(int j=1; j<=i; j++ ){
        if(t[j]%2==0) t[j]/=2;
        else{
            t[j]/=2;
            if(j+1<=i) t[j+1]+=10;
        }
    }
}

int main() {
    char num[30];
    int bin[100] = {0};
    scanf("%s", num);
    int len = strlen(num);
    int dec[31], dec2[31];
    dec[0] = 0;
    dec2[0] = 1;
    for(int i = 0; i < len; i++){
        if(num[i] == '1') dec[i + 1] = 1;
        else if(num[i] == '2') dec[i + 1] = 2;
        else if(num[i] == '3') dec[i + 1] = 3;
        else if(num[i] == '4') dec[i + 1] = 4;
        else if(num[i] == '5') dec[i + 1] = 5;
        else if(num[i] == '6') dec[i + 1] = 6;
        else if(num[i] == '7') dec[i + 1] = 7;
        else if(num[i] == '8') dec[i + 1] = 8;
        else if(num[i] == '9') dec[i + 1] = 9;
        else if(num[i] == '0') dec[i + 1] = 0;
    }

    for(int i = 0; i < len; i++){
        if(num[i] == '1') dec2[i + 1] = 1;
        else if(num[i] == '2') dec2[i + 1] = 2;
        else if(num[i] == '3') dec2[i + 1] = 3;
        else if(num[i] == '4') dec2[i + 1] = 4;
        else if(num[i] == '5') dec2[i + 1] = 5;
        else if(num[i] == '6') dec2[i + 1] = 6;
        else if(num[i] == '7') dec2[i + 1] = 7;
        else if(num[i] == '8') dec2[i + 1] = 8;
        else if(num[i] == '9') dec2[i + 1] = 9;
        else if(num[i] == '0') dec2[i + 1] = 0;
    }



    for(int i = 0; i < 100; i++) {
        bin[i] = dec[len] % 2;
        if (dec[0] == 0) dec[len] -= bin[i];
        else dec[len] += bin[i];
        dziel(dec, len);
    }
    if (dec[len] == 0) {
        for (int i = 0; i < 100; i++) {
            if (bin[i] != 0) printf("%d ", i);
        }
        printf("\n");
    }
    else printf("NO\n");

    for(int i = 0; i < 100; i++){
         bin[i] = 0;
    }


    for(int i = 0; i < 100; i++) {
        bin[i] = dec2[len] % 2;
        if (dec2[0] == 0) dec2[len] -= bin[i];
        else dec2[len] += bin[i];
        dziel(dec2, len);

    }
    if (dec2[len] == 0) {
        for (int i = 0; i < 100; i++) {
            if (bin[i] != 0) printf("%d ", i);
        }
    }
    else printf("NO");


    return 0;
}
