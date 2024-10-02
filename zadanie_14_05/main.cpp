#include <iostream>
using namespace std;
int wartosc = 0;
int tablica[5];
int ilosc_pieniedzy_na_starcie = 1000;
void tytul(){
    cout << "Wladca pierscieni" << endl;
}

void zeruje(int x){
    wartosc = 0;
}
void wypisz_tablice(int x[]){
    for(int a = 0; a < 5; a++){
        cout << x[a] << " ";
    }
    cout << endl;
}
void wyzeruj_tablice(int x[]){
    for(int a = 0; a < 5; a++){
        x[a] = 0;
    }
    cout << endl;
}

int fibo(int x){
    if(x<2){
        return x;
    }
    return fibo(x - 1) + fibo(x - 2);
}

void stan_konta(){
    cout << "Posiadasz na koncie kwote " << ilosc_pieniedzy_na_starcie << endl;
}
void wplata_na_konto(){
    cout << "Podaj kwote do wplaty";
    int wplata = 0;
    cin >> wplata;
    ilosc_pieniedzy_na_starcie += wplata;
    cout << "Wplaciles " << wplata << " ";
    stan_konta();
}
void wyplata_na_konto(){
    cout << "Podaj kwote do wplaty";
    int wyplata = 0;
    cin >> wyplata;
    ilosc_pieniedzy_na_starcie -= wyplata;
    cout << "Wplaciles " << wyplata << " ";
    stan_konta();
}

int main() {
    tytul();

    cout << "podaj wartosc";

    cin >> wartosc;
    cout << "podales wartosc: " << wartosc << endl;
    zeruje(wartosc);
    cout << "Twoja wartosc jest teraz rowna " << wartosc << endl;

    cout << "Podaj wartosci do 5 elementowej tablicy";
    for(int i = 0; i < 5; i++){
        cin >> tablica[i];
    }
    wypisz_tablice(tablica);
    wyzeruj_tablice(tablica);
    wypisz_tablice(tablica);

    cout << "Podaj ktora liczbe z ciagu fibonacciego:";
    int kolejna = 0;
    cin >> kolejna;
    cout << "Wartosc w ciagu fibonacciego na miejscu " << kolejna << " jest rowna " << fibo(kolejna) << endl;

    int wybor = 0;

    do{
        cout << "Bankomat - wybierz operacje:" << endl;
        cout << "1. Sprawdz stan konta" << endl;
        cout << "2. Wplac pieniadze" << endl;
        cout << "3. Wyplac pieniadze" << endl;
        cout << "0. Zakoncz" << endl;
        cin >> wybor;
        if(wybor == 1){
            stan_konta();
        }else if(wybor == 2){
            wplata_na_konto();
        }else if(wybor == 3){
            wyplata_na_konto();
        }
    }while(wybor != 0);


    return 0;
}
