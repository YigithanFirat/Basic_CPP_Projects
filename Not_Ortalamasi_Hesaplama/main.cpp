#include <iostream>
using namespace std;
int main()
{
    int vize_n, final_n;
    cout << "Vize notunuzu giriniz: ";
    cin >> vize_n;
    cout << "Final notunuzu giriniz: ";
    cin >> final_n;
    double toplam = (vize_n * 0.4) + (final_n * 0.6);
    if(toplam >= 90 && toplam <= 100) cout << "Ortalama: " << toplam << " Harf Notu: AA" << endl;
    else if(toplam >= 80) cout << "Ortalama: " << toplam << " Harf Notu: BA - Durum: Basarili" << endl;
    else if(toplam >= 70) cout << "Ortalama: " << toplam << " Harf Notu: BB - Durum: Basarili" << endl;
    else if(toplam >= 60) cout << "Ortalama: " << toplam << " Harf Notu: CB - Durum: Basarili" << endl;
    else if(toplam >= 50) cout << "Ortalama: " << toplam << " Harf Notu: CC - Durum: Basarili" << endl;
    else if(toplam >= 40) cout << "Ortalama: " << toplam << " Harf Notu: DC - Durum: Basarisiz" << endl;
    else if(toplam >= 30) cout << "Ortalama: " << toplam << " Harf Notu: DD - Durum: Basarisiz" << endl;
    else cout << "Ortalama: " << toplam << " Harf Notu: FF - Durum: Basarisiz" << endl; 
    return 0;
}