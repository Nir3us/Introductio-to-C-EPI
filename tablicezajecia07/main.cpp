#include <iostream>

using namespace std;

int main() {
    char slowo_baza[50];
    cout << "Podaj slowa ktore chcesz zamienic na male litery: ";
    cin >> slowo_baza;
    for(int i = 0; i < 50; i++){
        slowo_baza[i] = ::tolower(slowo_baza[i]);
    }
    cout << "slowo po zmanie " << slowo_baza << endl;



    int sprawdzam = 0;
    char word[6] = {'R', 'a', 'D', 'A', 'r', 0};
    for(int i = 0, j = 4; i < 3; i++, j--){
        word[i] = ::tolower(word[i]);
        word[j] = ::tolower(word[j]);
        if(word[i] != word[j]){
            sprawdzam++;
            cout << word[i] << endl;
            cout << word[j] << endl;
        }
    }
    if(sprawdzam == 0){
        cout << word << " jest palindromem" << endl;
    }else if(sprawdzam != 0){
        cout << word << " nie jest palindromem" << endl;
    }



    return 0;
}
