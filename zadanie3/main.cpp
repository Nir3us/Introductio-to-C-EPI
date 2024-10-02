#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {

    int pierwsza = 0;
    int druga = 0;



    cout << "Podaj 2 liczby:";
    cin >> pierwsza;
    cin >> druga;

    if(pierwsza == 0 || druga == 0) {
        cout << "Nie wolno dzielic przez zero!" << endl;
    } else if (pierwsza % druga == 0) {
        cout << "Liczba " << pierwsza << " jest podzielna przez " << druga << " bez reszty" << endl;
    } else if (druga % pierwsza == 0) {
        cout << "Liczba " << druga << " jest podzielna przez " << pierwsza << " bez reszty" << endl;
    } else {
        cout << "Liczby nie sa przez siebie podzielne" << endl;
    }

    int liczba_przedmiotow;
    cout << "Podaj liczbe przedmotow:";
    cin >> liczba_przedmiotow;
    string przedmioty[liczba_przedmiotow];
    for(int c = 0; c <= liczba_przedmiotow; c++) {
        cout << "Podaj nazwe:" << c + 1 << "przedmiotu";
        cin >> przedmioty[c]

    }

    int oceny[7] = {0, 0, 0, 0, 0, 0, 0};
    int tymczasowa_najgorsza = 0;
    int najgorsza = 1;
    int najlepsza = 0;
    int druga_wartosc = 0;
    float suma = 0;
    for(int n = 0; n <= 6; n++) {

        cout << "Podaj " << n + 1 << " ocene z przemiotu" << przedmioty[g];
        cin >> oceny[n];

        while (oceny[n] < 1 || oceny[n] > 6) {
            cout << "Niepoprawna ocena. Podaj ocene z zakresu 1-6:";
            cin >> oceny[n];
            cout << endl;
        }
        cout << "Teraz mam wartosc: " << oceny[n] << endl;

        suma += oceny[n];


        if(najlepsza < oceny[n]) {
            najlepsza = oceny[n];
        }

    }

    for(int i = 0; i <=6; i++) {

        tymczasowa_najgorsza = oceny[i];

        for(int a = 0; a <=6; a++) {
            druga_wartosc = oceny[a];
                    if(tymczasowa_najgorsza != druga_wartosc) {
                        najgorsza = tymczasowa_najgorsza;
                    }
        }
    }
    cout << "Najlepsza ocena to: " << najlepsza << endl;
    cout << "Najgorsza ocena to: " << najgorsza << endl;
    cout << "Srednia ocen to: " << suma/7 << endl;




    return 0;
}
