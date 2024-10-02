#include <iostream>
using namespace std;

void do_duzej(char tab[], int a){
    for(int i = 0; i < a; i++){
        tab[i] = toupper(tab[i]);
    }
    for(int i = 0; i< a; i++){
        cout << tab[i];
    }
    cout << endl;
}

int main() {
    cout << "jak dlugie jest twoje imie i nazwisko?";
    int dlugosc = 0;
    cin >> dlugosc;
    cout << "Podaj swoje imie i nazwisko";
    char imie_nazwisko[dlugosc];
    for(int i = 0; i < dlugosc; i++){
        cin >> imie_nazwisko[i];
    }
    for(int i = 0; i< dlugosc; i++){
        cout << imie_nazwisko[i];
    }
    cout << endl;
    do_duzej(imie_nazwisko, dlugosc);


    return 0;
}
