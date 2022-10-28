#include <iostream>
using namespace std;

int main(){
    int i, jumlahsiswa;
    float nilai, total, ratarata;
    total = 0;

    cout<<"Masukkan jumlah siswa : ";
    cin>>jumlahsiswa;
    cout<<"Masukkan nilai-nilai siswa sebagai berikut:\n\n";

    for(int i= 1; i <= jumlahsiswa; i++){
        printf("%d. ", i);
        cin>>nilai;
        total = total + nilai;
    }
    ratarata = total / jumlahsiswa;

    cout<<endl;
    cout<<"Total nilai = "<<total<<endl;
    cout<<"Rata-rata kelas = "<<ratarata;

    return 0;
}