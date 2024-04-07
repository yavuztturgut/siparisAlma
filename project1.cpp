#include <iostream>
#include <string>

using namespace std;

class Siparis {
public:
    int masaNo;
    string yemek;
    string icecek;
    double ucret;
};

void ucretlendir(Siparis siparis) {
    if (siparis.icecek == "kola") {
        siparis.ucret += 15;
    }
    else if (siparis.icecek == "ayran") {
        siparis.ucret += 10;
    }
    else if (siparis.icecek == "fanta") {
        siparis.ucret += 20;
    }

    if (siparis.yemek == "pilav") {
        siparis.ucret += 60;
    }
    else if (siparis.yemek == "kebap") {
        siparis.ucret += 100;
    }
    else if (siparis.yemek == "tavuk") {
        siparis.ucret += 80;
    }
}

void yeniMasa() {
    Siparis yenisiparis;
    yenisiparis.ucret = 0;
    while (yenisiparis.ucret == 0) {
        cout << "Icecek seciniz: ";
        getline(cin, yenisiparis.icecek);
        if (yenisiparis.icecek == "kola" or yenisiparis.icecek == "ayran" or yenisiparis.icecek == "fanta") {
            cout << "Yemek seciniz: ";
            getline(cin, yenisiparis.yemek);

            if (yenisiparis.yemek == "pilav" or yenisiparis.yemek == "kebap" or yenisiparis.yemek == "tavuk") {
                ucretlendir(yenisiparis);
                cout << "Toplam ucret: " << yenisiparis.ucret << endl;
            }
            else {
                continue;
            }
        }
        else {
            continue;
        }
    }
}

void menu() {
    cout << "PILAV = 60TL, TAVUK = 80TL, KEBAP = 100TL\nAYRAN = 10TL, KOLA = 15TL, FANTA 20TL\n";
}

int main() {
    menu();
    yeniMasa();
    return 0;
}
