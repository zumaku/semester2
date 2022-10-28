#include <iostream>
using namespace std;
int main(){
    int total;

    cout<<"====== PROGRAM PEMBAYARAN ======"<<endl;
    cout<<"Program ini adalah untuk\n";
    cout<<"penyeleksian kondisi if bagian pertama\n";
    cout<<"======================================"<<endl;

    printf("Input Total Belanja : Rp. ");
    scanf("%i", &total);

    if(total > 100000){
        printf("Selama, Anda mendapatkan hadiah!\n");
    }

    printf("Terimakasih sudah berbelanja di toko kami\n");

    return 0;
}