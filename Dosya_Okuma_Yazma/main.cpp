#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    ofstream dosya("ajanda.txt");
    if(!dosya)
    {
        cerr << "Dosya acilamadi!" << endl;
        return 1;
    }
    string AjandaNotu;
    cout << "Ajandaya kaydetmek istediginiz notu giriniz: ";
    getline(cin, AjandaNotu);
    time_t saat = time(0);
    tm *zaman = localtime(&saat);
    char ZamanStr[20];
    strftime(ZamanStr, sizeof(ZamanStr), "%d/%m/%Y - %H.%M", zaman);
    dosya << "[" << ZamanStr << "] - " << AjandaNotu << endl;
    dosya.close();
    cout << "Not basariyla ajandaya kaydedildi." << endl;
    return 0;
}