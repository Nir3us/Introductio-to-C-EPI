#include <iostream>
using namespace std;

int main() {
    cout << "podaj wielkosc tablicy";
    int wielkosc = 0;
    cin >> wielkosc;
    cout << "podaj elementy tablicy";
    int tablica[wielkosc];
    for(int i = 0; i<wielkosc; i++){
        cin >> tablica[i];
    }
    int suma = 0;
    for(int i = 0; i<wielkosc; i++){
        if(tablica[i] % 2 == 0 && tablica[i] <= 50){
            suma++;
        }
    }
    cout << "Liczba parzystych liczb mniejszych lub rownych 50 w tablicy to: " << suma << endl;
    return 0;
}
