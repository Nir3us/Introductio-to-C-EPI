#include <iostream>

using namespace std;

void najwiekszaNajmniejsza(int tab[], int wielkosc){

    int max = 0;
    int min = 9000;
    for(int i = 0; i < wielkosc; i++){
        if(min > tab[i]){
            min = tab[i];
        }

        if(max < tab[i]){
            max = tab[i];
        }
    }


    cout << "Najmniejszy element " << min << endl;
    cout << "Najwiekszy element " << max << endl;
}

void doEL(int* a){
    int licznik = 0;
    while(*a < 37){
        *a = *a + 1;
        cout << *a << endl;
        licznik++;
    }
    cout << "Zmienna osiagnela wartosc " << *a << endl;
    cout << "Liczba operacji wykonanych w petli: " << licznik << endl;
}

void otrzy(int* a){
    *a = *a*3;
    cout << *a << endl;
}


int main() {
    cout << "Podaj dlugosc tablicy";
    int dlugosc_tablicy = 0;
    cin >> dlugosc_tablicy;
    int tablica[dlugosc_tablicy];

    cout << "Podaj elementy tablicy";
    for(int i = 0; i < dlugosc_tablicy; i++){
        cin >> tablica[i];
    }
    najwiekszaNajmniejsza(tablica, dlugosc_tablicy);


    cout << "Podaj liczbe: ";
    int liczba_do_37 = 0;
    cin >> liczba_do_37;
    if(liczba_do_37 > 37){
        cout << "Blad, za duza liczba!" << endl;
    }else if(liczba_do_37 < 37){
        doEL(&liczba_do_37);
    }



    cout << "Podaj liczbe";
    int liczbaotrzy = 0;
    cin >> liczbaotrzy;
    otrzy(&liczbaotrzy);


    



    return 0;
}
