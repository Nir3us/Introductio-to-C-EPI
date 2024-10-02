#include <iostream>
#include <ctime>
#include <string>


using namespace std;

int main() {

    string password = "Student321";
    int bledne = 1;
    while(bledne == 1) {
        cout << "Podaj haslo do sytemu:";
        string password_from_user = "";
        cin >> password_from_user;
        if(password_from_user == password) {
            cout << "witamy w systemie szefie!!!" << endl;
            bledne = 0;
        } else {
            cout << "bledne haslo!" << endl;
            bledne = 1;
        }
    }


    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "Dzisiejsza data to: " << dt << endl;



    cout << "Podaj wysokosc pol-trojkata:";
    int wysokosc = 0;
    cin >> wysokosc;
    string wierza = " *";
    for(int i = 0; i <= wysokosc; i++) {
        for(int a = 0; a <= i; a++) {
            cout << wierza;
        }
        cout << endl;
    }

    cout << "Podaj wysokosc trojkata:";
    int space = 0;
    int rows = 0;
    cin >> rows;
    string tak_czy_nie = "";
    cout << "Czy ma to byc trojkat odwrocony czy nie?";
    cin >> tak_czy_nie;


    if (tak_czy_nie == "tak") {
        for (int i = rows; i >= 1; --i) {
            for (int space = 0; space < rows - i; ++space)
                cout << "  ";
            for (int j = i; j <= 2 * i - 1; ++j)
                cout << "* ";
            for (int j = 0; j < i - 1; ++j)
                cout << "* ";
            cout << endl;
        }
    } else if (tak_czy_nie == "nie") {
        for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
            for (space = 1; space <= rows - i; ++space) {
                cout << "  ";
            }

            while (k != 2 * i - 1) {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }
    } else {
        cout << "Podano bledny komunikat." << endl;
    }




    return 0;
}