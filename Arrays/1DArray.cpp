#include <iostream>
using namespace std;

int main (){
    //DataType ArrayName [size];

    //Example: Create array that stores values from the number 1 to 10
    int integerarray [10];
    for (int i = 0; i<10; i++){
        integerarray[i] = i+1;
        cout << integerarray[i] << '\n';
    }
}
