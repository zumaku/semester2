#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char password[30];

    cout<<"====== PROGRAM LOGIN ======"<<endl;
    cout<<"Program ini adalah untuk\n";
    cout<<"penyeleksian kondisi if bagian kedua\n";
    cout<<"======================================"<<endl;

    printf("Masukkan Password : ");
    scanf("%s", &password);

    //percabangan if/else
if( strcmp(password, "uinCoffee") == 0 ){
        printf("Selamat datang bos!\n");
    } else {
        printf("Password salah, coba lagi!\n");
    }

    return 0;
}