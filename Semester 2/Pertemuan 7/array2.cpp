#include <iostream>
using namespace std;

#define maks 5

int main(){
    //membuat array kosong
    int nilai[maks];

    //mengisi array
    for (int i = 0; i<maks; i++){
        printf("Masukkan nilai ke-%i: ", i+1);
        cin>>nilai[i];
    }

    cout<<endl;

    //mencetak isis array
    for(int i=0; i<maks; i++){
        printf("Nilai ke-%d: %d\n", i+1, nilai[i]);
    }

    //ukuran array dalam byte
    int size = sizeof(nilai);

    //banyakya isi array 'nilai'
    int length = sizeof(nilai) / sizeof(*nilai);

    cout<<endl;

    printf("Size: %d\n", sizeof(nilai));
    printf("Length: %d\n", sizeof(nilai) / sizeof(*nilai));


    return 0;
}