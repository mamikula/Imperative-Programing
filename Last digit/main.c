#include <stdio.h>

int main() {
    long long int num;
    scanf("%lld",  &num);

    long long int sum;
    long long int res;


    sum = num * (0.9);
    while (sum > 0){
        res = sum;
        sum /= 10;
    }
    sum = num * (0.9);

    if (res > num){
        for (long long int i = sum; i >= 0; i--){
            res = 0;
            long long int j = i;
            while (j > 0){
                res += j;
                j /= 10;
            }
            if (res < num){
                printf( "-1");
                return 0;
            }
            if (res == num){
                printf("%lld", i);
                return 0;
            }
        }
    }
    else{
        for (long long int i = sum; i <= num; i++){
            res = 0;
            long long int j = i;
            while (j > 0){
                res += j;
                j /= 10;
            }
            if (res > num){
                printf( "-1");
                return 0;
            }
            if (res == num){
                printf("%lld", i);
                return 0;
            }
        }

    }
}
