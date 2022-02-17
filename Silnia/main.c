// Napisz program, który dla danej liczby całkowitej, n,
// wylicza i drukuje wartość jej silni, n!.
// Uwaga: Należy założyć, że wartość n! nie mieści się w żadnym z
// dostępnych w języku typów całkowitych.

#include <stdio.h>
const int N = 500;

int multiplication(int num, int result[], int res_size){
    int carry = 0; //przechowuje reszte ze wstawiania do liczby po przemnozeniu calej liczby przez kolejny skladnik silni, np 10 + 9, przechowuje 1
    for (int i = 0; i < res_size; i++){

        int comp = result[i] * num + carry; //zawiera liczbe ktora powinna byc wstawiona do pojedynczej komorki po przemnozeniu

        result[i] = comp % 10;

        carry = comp / 10; // zapisuje to co zostalo po wstawianiu, zeby wstawic na poczatku liczby
    }
    while (carry != 0){ // wstawianie nadmiaru na poczatek liczby
        result[res_size] = carry % 10;
        carry /= 10;
        res_size++; //zwiekszenie rozmiaru liczby
    }

    return res_size;
}


void silnia(int num){
    int result[N]; //tablica przechowujaca cyfry liczby generowanej

    result[0] = 1;
    int res_size = 1; //rozmiar liczby przechowywanej w tablicy

    for (int i = 2; i <= num; i++){
        res_size = multiplication(i, result, res_size);
    }

    for (int i = res_size - 1; i >= 0; i--){
        printf("%d", result[i]);
    }
}


int main() {
    int n;
    scanf("%d", &n);
    silnia(n);
    return 0;
}
