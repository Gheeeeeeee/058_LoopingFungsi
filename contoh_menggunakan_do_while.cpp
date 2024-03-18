#include <iostream>
using namespace std;

int main(){
    char pilihan;

    do {
        cout << "berangkat mengambil takjil" << endl;
        cout << "antri takjil" << endl;
        cout << "ambil takjil" << endl;
        cout << "Apakah mau antri kembali ?" << endl;
    cin >> pilihan;
       
    }
     while(pilihan == 'y' || pilihan == 'Y');
}