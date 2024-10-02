#include <iostream>
using namespace std;
int lucas(int a){
    if(a==0){
        return 2;
    }else if(a==1){
        return 1;
    }else{
        return lucas(a-2) + lucas(a-1);
    }
}
int main() {
    cout << "Podaj wartosc:";
    int wartosc = 0;
    cin >> wartosc;
    cout << "wartosc w ciagu lucasa o numerze ktory wpisales wynosi: " << lucas(wartosc);
    return 0;
}
