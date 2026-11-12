
#include <iostream>
using namespace std;
int main() {
    int angka;
    char ulang;
    do {
        cout<<"Masukkan Bilangan : ";
        cin>>angka;
        if (angka % 2 == 0) {
        cout<<angka;
        cout<<" adalah bilangan genap "<<endl;
        } else {
        cout<<angka;
        cout<<" adalah bilangan ganjil : "<<endl;
        }
    cout<<"Tekan (a,b) : ";
    cin>>ulang;
    cout<<endl;
    } while (ulang == 'a' || ulang == 'b');
    
    system("pause");
    return 0;
}
