#include <iostream>
using namespace std;

#define maks 6

void tukar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int arr[], int n){
    //proses pengurutan
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                tukar(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    //membuat array kosong
    int nilai[maks];

    //mengisi array
    for(int i=0; i<maks; i++){
        printf("Masukkan nilai ke-%i: ", i+1);
        cin>>nilai[i];
    }

    //mencetak isis array sebelum diurutkan
    printf("\nArray seblum diurutkan\n");
    for(int i=0; i<maks; i++){
        printf("%d ", nilai[i]);
    }

    bubble(nilai, maks);

    //mencetak isis array setelah diurutkan
    printf("\nArray setelah diurutkan\n");
    for(int i=0; i<maks; i++){
        printf("%d ", nilai[i]);
    }

    return 0;
}