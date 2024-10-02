#include <iostream>
#include <string>

using namespace std;
int cos = 5;
int counter = 0;
int TotalSum = 0;
int result = 0;
int sumResult = 0;

int values[5] = {1, 2, 3, 4, 5};

int points[5];
string names[5];
int positions[5];

void AssignPoints(int tab[]){

    for(int i = 0; i < 5; i++){
        if(tab[i] == 1){
            points[i] = 25;
        }else if(tab[i] == 2){
            points[i] = 18;
        }else if(tab[i] == 3){
            points[i] = 15;
        }else if(tab[i] == 4){
            points[i] = 12;
        }else if(tab[i] == 5){
            points[i] = 10;
        }
    }
}

void PrintResults(){
    for(int i = 0; i < 5; i++){
        cout << "Driver: " << names[i] << ", Points: " << points[i] << endl;
    }
}

void Scale(int a){
    int licznik =0;
    while(licznik < 5){
        values[licznik] = values[licznik] * a;
        licznik++;
    }
}

void Sum(){
    int licznik = 0;
    while(licznik < 5){
        sumResult += values[licznik];
        licznik++;
    }
}

void Add(int a){
    result = result + a;
}

void Multiply(int a){
    result = result * a;
}

void AddToToal(int a[], int b){
    int licznik = 0;
    while(licznik < b){

        TotalSum = TotalSum + a[licznik];

        licznik++;
    }
}

void incrementCounter(){
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
}
int main() {
    int cos_innego = 10;
    std::cout << cos << std::endl;
    cout << cos_innego << endl;

    for(int i = 0; i < 3; i++){
        incrementCounter();
    }

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};
    AddToToal(arr1, 5);
    cout << "Total sum after adding arr1: " << TotalSum << endl;
    AddToToal(arr2, 5);
    cout << "Total sum after adding arr2: " << TotalSum << endl;

    result = 1;
    Add(5);
    cout << "After adding 5: " << result << endl;
    Multiply(3);
    cout << "After multiplying by 3: " << result << endl;
    Add(2);
    cout << "After adding 2: " << result << endl;

    Sum();
    cout << "Sum of values: " << sumResult << endl;
    sumResult = 0;
    Scale(2);
    cout << "Values after scaling: ";
    for(int i = 0; i < 5; i++){
        cout << values[i] << " ";
    }
    cout << endl;
    Sum();
    cout << "Sum of values after scaling: " << sumResult << endl;

    names[0] = {"Lewis Hamilton"};
    names[1] = {"Max Verstappen"};
    names[2] = {"Charles Leclerc",};
    names[3] = {"Fernando Alonso"};
    names[4] = {"Lando Norris"};
    positions[0] = {1};
    positions[1] = {2};
    positions[2] = {3};
    positions[3] = {4};
    positions[4] = {5};

    AssignPoints(positions);
    PrintResults();

    return 0;
}
