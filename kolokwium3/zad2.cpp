#include <iostream>
using namespace std;
int main() {
    int rok = 0;
    cout << "Podaj rok: ";
    cin >> rok;

    if(rok % 4 == 0 && rok != 0){
        if(rok % 100 != 0 || rok % 400 == 0){
            cout << "Rok " << rok << " jest przestepny" << endl;
        }
    }



    return 0;
}
