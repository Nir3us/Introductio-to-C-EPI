#include <iostream>
using namespace std;
int main() {
    int liczba = 0;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    if(liczba > 0){
        cout << "liczba jest dodatnia" << endl;
    }else if(liczba < 0){
        cout << "liczba jest ujemna" << endl;
    }else if(liczba == 0){
        cout << "liczba jest rowna zero" << endl;
    }
    return 0;
}
