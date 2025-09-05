#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char islem;
    while(true)
    {
        cout << "\nBirinci sayiyi giriniz: ";
        cin >> a;
        cout << "Ikinci sayiyi giriniz: ";
        cin >> b;
        cout << "Islem seciniz (+, -, *, /) veya cikis icin q: ";
        cin >> islem;
        if(islem == 'q' || islem == 'Q')
        {
            cout << "Programdan cikis yapiliyor...";
            break;
        }
        switch(islem)
        {
            case '+':
            {
                cout << "Sonuc: " << a + b << endl;
                break;
            }

            case '-':
            {
                cout << "Sonuc: " << a - b << endl;
                break;
            }

            case '*':
            {
                cout << "Sonuc: " << a * b << endl;
                break;
            }

            case '/':
            {
                if(b == 0) cerr << "HATA: Bir sayi sifira bolunemez!";
                cout << "Sonuc: " << a / b << endl;
                break;
            }
        }
    }
    return 0;
}