#include <iostream>
#include <string>


using namespace std;

int main() {

    cout << "ZAD 1" << endl;

    int dzien_tygodnia;
    cout << "Podaj dzien tygodnia:";
    cin >> dzien_tygodnia;
    if(dzien_tygodnia == 1) {
        cout << "Poniedzialek" << endl;
    } else if(dzien_tygodnia == 2) {
        cout << "Wtorek" << endl;
    } else if(dzien_tygodnia == 3) {
        cout << "Sroda" << endl;
    } else if(dzien_tygodnia == 4) {
        cout << "Czwarek" << endl;
    } else if(dzien_tygodnia == 5) {
        cout << "Piatek" << endl;
    } else if(dzien_tygodnia == 6) {
        cout << "Sobota" << endl;
    } else if(dzien_tygodnia == 7) {
        cout << "Niedziela" << endl;
    }

    cout << "ZAD 2" << endl;
    int jeden;
    int dwa;
    int trzy;
    cout << "Podaj pierwsza z trzech liczb:";
    cin >> jeden;
    cout << "Podaj druga z trzech liczb:";
    cin >> dwa;
    cout << "Podaj trzecia z trzech liczb:";
    cin >> trzy;
    if(jeden + dwa > trzy || jeden + trzy > dwa || dwa + trzy > jeden) {
        cout << "Prawda!" << endl;
    } else {
        cout << "Falsz!"
    }

    cout << "ZAD 3" << endl;
    int liczba;
    cout << "Podaj liczbe:";
    cin >> liczba;
    if(liczba >= 10 && liczba <= 20){
        cout << "tak" << endl;
    } else if (liczba >= 30 && liczba <= 40) {
        cout << "tak" << endl;
    } else {
        cout << "nie" << endl;
    }

    string login;
    string haslo;
    int i = 1;
    while(i <= 3){
        cout << "Proba " << i << " Podaj login:";
        cin >> login;
        cout << "Podaj haslo:";
        cin >> haslo;
        if(login == "admin" && haslo == "admin123") {
            cout << "Masz pelny dostep" << endl;
            i = 4;
        } else if (login == "editor" && haslo == "editmode") {
            cout << "Masz dostep do edycji" << endl;
            i = 4;
        } else if (login == "guest" && haslo == "guest") {
            cout << "Mozesz tylko ogladac" << endl;
            i = 4;
        } else {
            cout << "Bledna nazwa uzytkownia lub haslo" << endl;
            i++;
        }

    }

    int cyfry;
    int suma;
    for(int n = 0; n <= 4; n++) {

        cout << "Podaj " << n + 1 << " cyfre:";
        cin >> cyfry;

        while (cyfry < 0 || cyfry > 9) {
            cout << "Niepoprawna cyfra. Podaj " << n +1 << " cyfre z zakresu 0-9:";
            cin >> cyfry;
            cout << endl;
        }


        suma += cyfry;

    }
    cout << "Suma wszystkich tych cyfr jest rowna: " << suma << endl;

    return 0;
}
