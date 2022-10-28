#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char password[30];
    char benar = 'y';
    int counter = 0;

    do{
        printf("Masukkan password : ");
        scanf("%s", &password);

        if( strcmp(password, "uincoffe") == 0 ){
            benar = 'y';
        }else {
            benar = 't';
            printf("password salah, coba lagi!\n");
            counter++;
        }
    }   while(benar != 'y');
    printf ("\nselamat datang bos!\n ");
    printf ("\nperulangan selesai!\n");
    printf ("kesalahan password sebanyak %i kali.\n", counter);


    return 0;
   
}
