#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int sayi = rand() % 100;
    int tahmin = -1, adet = 0;
    while(tahmin != sayi)
    {
        cout << "Tahmininizi giriniz: ";
        cin >> tahmin;
        adet++;
        if(tahmin > sayi)
        {
            cout << "BILGI: Daha kucuk bir sayi tahmin etmelisiniz!" << endl;
        }
        else if(sayi > tahmin)
        {
            cout << "BILGI: Daha buyuk bir sayi tahmin etmelisiniz!" << endl;
        }
        else
        {
            cout << "TEBRIKLER! Rastgele Sayi: " << sayi << "Tahmininiz: " << tahmin << "Adim:" << adet << endl;
        }
    }
    return 0;
}