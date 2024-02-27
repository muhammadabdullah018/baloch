#include <iostream>
using namespace std;

int main(){
    const int n = 10;
    float array[n] = {1.1, 2.2, 1.8, 1.6, 1.5, 7.8, 9.9, 0.5, 13.2, 442.2};

    float sum = 0.0;
    for(int i=0; i<n; i++){
        sum+= array[i];
    }

    cout << "Soo the sum of the array elements is: " << sum << " ";

}