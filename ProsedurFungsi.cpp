#include <iostream>
using namespace std;

string nama;
int nXpander, nPorche, nAvanza, nBrio, nLamborgini;
int hXpander = 300, hPorche = 8000, hAvanza = 250, hBrio = 200, hLamborgini = 6000;

void input()
{
    cout << "Nama Pembeli : ";
    cin >> nama;

    cout << "Jumlah Xpander :";
    cin >> nXpander;

    cout << "Jumlah Porche :";
    cin >> nPorche;

    cout << "Jumlah Avanza :";
    cin >> nAvanza;

    cout << "Jumlah Brio :";
    cin >> nBrio;

    cout << "Jumlah Lamborgini :";
    cin >> nLamborgini;
}

int TotalHarga()
{
    return (nXpander * hXpander) + (nPorche * hPorche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborgini * nLamborgini);
}

void display()
{
    cout << "total harga : " << TotalHarga() << endl;
}

int main()
{

char pilihan;
do{
    input();
    display();
    cout << "Apahah ingin membeli lagi? ";
    cin >> pilihan;
    }while (pilihan == 'y' || pilihan == 'Y');
}