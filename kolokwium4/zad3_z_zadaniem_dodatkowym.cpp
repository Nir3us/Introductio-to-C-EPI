#include <iostream>
using namespace std;
//zrobilem zadanie dodatkowe
int main() {
    int zmienna = 0;

    cout << "podaj wielkosc tablicy";
    cin >> zmienna;

    int tablica[zmienna];
    int pomocnik = 0;
    cout << "podaj 5 elementow tablicy";
    while(pomocnik < zmienna){

        cin >> tablica[pomocnik];
        pomocnik++;
    }
    int sprawdzenie = 0;
    cout << "podaj jaka liczbe chcesz sprawdzic: ";
    cin >> sprawdzenie;
    int pomocnik_dwa;
    int liczadlo = 0;
    while(pomocnik_dwa < zmienna){
        if(tablica[pomocnik_dwa] == sprawdzenie){
            liczadlo++;
        }
        pomocnik_dwa++;
    }
    cout << "Liczba " << sprawdzenie << " wystapila w tablicy " << liczadlo << " razy." << endl;


    return 0;
}
