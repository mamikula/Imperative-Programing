#include <stdio.h>
//void what(int tab[], int size){
//    int cnt = 0;
//    int swap = 0;
//    do{
//        cnt++;
//        swap = 0;
//        for(int i = 0; i < size - 1; i++){
//            if (tab[i] > tab[i + 1]){
//                int a = tab[i];
//                tab[i] = tab[i + 1];
//                tab[i + 1] = a;
//                swap = 1;
//            }
//        }
//        size--;
//
//    }while(swap);
//    printf("%d ", cnt);
//}


struct osoba{
    const char* imie;
    char nazwisko[64];
} o = {"Annaaaa", "Nowak"};

int main() {
   struct osoba *ps = &o;
   ps->nazwisko = ps->imie;
   //ps->imie = ps->nazwisko;
   printf("%s ", ps->imie);
   printf("%s ", ps->nazwisko);
}
