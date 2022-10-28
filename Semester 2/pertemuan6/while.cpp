#include <iostream>
#include <conio.h>

using namespace std;

#define ENTER '\r'
#define SPASI ' '

int main(){
    char karakter;
    int jumlahKarakter = 0, jumlahSpasi = 0;

    cout<<"Masukkan sebuah kalimat dan akhiri dengan ENTER."<<endl;
    cout<<"Kalimat > ";
    while((karakter = getche()) != ENTER){
        jumlahKarakter++;
        if(karakter == SPASI){
            jumlahSpasi++;
        }
    }

    printf("\n");
    printf("Jumlah Karakter = %d\n", jumlahKarakter);
    printf("Jumlah Spasi = %d\n", jumlahSpasi);
    
    return 0;
}
