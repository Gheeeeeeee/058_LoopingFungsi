#include <iostream>
using namespace std;

int main(){
int i;
int arr[5];

for (i = 0 ; i<5; i++){
        cout << i << " : "<< "gheo" << endl;
}

    for (i = 0; i < 5; i++){
            cout << "masukkan bilangan = ";
            cin >> arr[i];
    }

    for (i = 0; i<5; i++) {
        cout << "bilangan5 ke - " << i << arr[i] << endl; 
    }
}