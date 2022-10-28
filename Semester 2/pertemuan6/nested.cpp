#include <iostream>

#define MAKS 8

int main(){
    int baris, kolom, hasilkali;
     
    for(baris = 1; baris <= MAKS; baris++){
        for(kolom = 1; kolom <= MAKS; kolom++){
            hasilkali = baris * kolom;
            if(hasilkali < 10){
                printf(" ");
            }
            printf(" %d", hasilkali);
        }
    printf("\n");
    }
    return 0;
}