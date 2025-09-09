#include <iostream>
#include <ctime>
using namespace std;
int bakiye;
void Islemler(int islem, int hesap_no)
{
    int miktar, hedef_hesap;
    switch(islem)
    {
        case 1:
        {
            cout << "\n[HESAP NO: " << hesap_no << "] Bakiyeniz: " << bakiye << " TL\n";
            break;
        }
        case 2:
        {
            cout << "\nCekmek istediginiz miktari giriniz: ";
            cin >> miktar;
            if (miktar <= bakiye && miktar > 0)
            {
                bakiye -= miktar;
                cout << miktar << " TL hesabinizdan cekilmistir. Yeni bakiyeniz: " << bakiye << " TL\n";
            }
            else
                cout << "Yetersiz bakiye veya hatali miktar!\n";
            break;
        }
        case 3:
        {
            cout << "\nYatirmak istediginiz miktari giriniz: ";
            cin >> miktar;
            if (miktar > 0)
            {
                bakiye += miktar;
                cout << miktar << " TL hesabiniza yatirildi. Yeni bakiyeniz: " << bakiye << " TL\n";
            }
            else
                cout << "Gecersiz miktar!\n";
            break;
        }
        case 4:
        {
            cout << "\nTransfer yapmak istediginiz hesap numarasini giriniz: ";
            cin >> hedef_hesap;
            cout << "Transfer miktarini giriniz: ";
            cin >> miktar;
            if (miktar <= bakiye && miktar > 0 && hedef_hesap != hesap_no)
            {
                bakiye -= miktar;
                cout << hedef_hesap << " nolu hesaba " << miktar << " TL transfer edildi. Yeni bakiye: " << bakiye << " TL\n";
            }
            else
                cout << "Transfer basarisiz! (Yetersiz bakiye, hatali miktar veya kendi hesabiniz)\n";
            break;
        }
        case 5:
        {
            cout << "\nSistemden cikis yapiliyor... Tesekkur ederiz!\n";
            break;
        }
        default:
        {
            cout << "Gecersiz islem secimi!\n";
            break;
        }
    }
}

void ATM_MENU()
{
    cout << "\n======= ATM MENU =======\n";
    cout << "1 - Bakiye Goruntuleme\n";
    cout << "2 - Para Cekme\n";
    cout << "3 - Para Yatirma\n";
    cout << "4 - Para Transferi\n";
    cout << "5 - Sistemden Cikis\n";
    cout << "========================\n";
    cout << "Yapmak istediginiz islemi seciniz: ";
}

int main()
{
    int hNo, islem;
    cout << "Hesap numaranizi giriniz (5 haneli): ";
    cin >> hNo;
    while(hNo < 10000 || hNo > 99999)
    {
        cout << "Gecersiz hesap no! Tekrar giriniz: ";
        cin >> hNo;
    }
    srand(time(0));
    bakiye = rand() % 10000; 
    cout << "\nHesap no: " << hNo << " basariyla girildi. Baslangic bakiyeniz: " << bakiye << " TL\n";
    do
    {
        ATM_MENU();
        cin >> islem;
        Islemler(islem, hNo);
    }while (islem != 5);
    return 0;
}