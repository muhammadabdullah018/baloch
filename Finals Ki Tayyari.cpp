#include <iostream>
#include <random>
using namespace std;

int main(){
    const int size = 10;
    int myArray[size];

    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<> dis(-10, 24);
    for(int i=0; i<size; ++i){
        myArray[i] = dis(gen);
    }
    cout << "The Initialized Array is: ";
    for(int i=0; i<size; ++i){
        cout << myArray[i] << " ";
    }
    return 0;
}