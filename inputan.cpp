

#include <iostream>
using namespace std;
int main() {
    int angka;
    cout<<"masukan bilangan : ";
    cin>>angka;
    if (angka % 2 == 0)
    {
        cout<<angka;
        cout<<" adalah bilangan genap ";
    } else {
        cout<<angka;
        cout<<" adalah bilangan ganjil";
    }
    return 0;
}
