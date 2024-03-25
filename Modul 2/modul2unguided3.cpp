#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int bilangan[5];
    int pilih,i;
    float jumlah,rata_rata;
    char lagi;

  do{
    cout << " ========== MENU ========== "<<endl;
    cout << "1. Input array "<<endl;
    cout << "2. Tampil array"<<endl;
    cout << "3. Cari nilai minimum"<<endl;
    cout << "4. Cari nilai maxsimum"<<endl;
    cout << "5. Hitung rata-rata \n "<<endl;

    cout << "Masukan pilihan : ";
    cin >> pilih;

    cout << "\n";
        switch (pilih)
    {
    case 1 :
        for (int i=0 ; i<5 ;i++) {
            cout << "Inputkan bilangan bulat " << i+1 << " : ";
            cin >> bilangan [i];
        }
        break;
    case 2 :
        for (int i=0 ; i<5 ;i++){
            cout << "bilangan array ke- " << i+1 << " adalah : " << bilangan[i] << endl;
        }
        break;
    case 3 :
        int minimum;
        minimum=bilangan[0];
        for (i=0 ;i<5 ;i++)
        if (minimum < bilangan[i])
        {
            minimum=bilangan[i];
        }
        cout << "Bilangan minimumya adalah " << minimum << endl;
        break;
    case 4 :
        int maksimum;
        maksimum=bilangan[0];
        for (i=0 ;i<5 ;i++)
        if (maksimum < bilangan[i])
        {
            maksimum=bilangan[i];
        }
        cout << "Bilangan maksimumnya adalah " << maksimum << endl;
        break;
    case 5 :
        int jumlah;
        jumlah = 0;
        for (int i=0 ; i<5 ; i++) {
           jumlah = jumlah + bilangan[i];
        }
        rata_rata = jumlah /5;
            cout << "Nilai Rata- Rata dari Input Array = " << rata_rata;
            cout << endl;
        break;
    default :
        cout << "Maaf Pilihan yang anda masukkan salah" << endl;
    }
    cout << "Ingin melakukan proses lagi ? [y/t]" <<endl;
    cin >> lagi;
}
while (lagi=='y');
return 0;
}

