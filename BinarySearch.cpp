#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;



void input(){
    while (true)
    {
        cout << "Masukkan banyak elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }

        else
        {
            cout << "\n[!]Jumlah elemen tidak valid. Silakan coba lagi.\n" << endl;
        }
    }

    
}

