#include <iostream>
using namespace std;

int main () {
    //DataType ArrayName [Size][Size]...  typically 2D or 3D, the greater the dimensions the harder it is to code and manage
    int integerarray [10][10];
    //Example: Create a grid that stores various integer values
    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            integerarray[i][j] = i-j;
            cout << "At coordinate " << i << "," << j << ": " << integerarray[i][j] << '\n';
        }
    }
    //Typically when thinking about a grid, use a 2D array

    //Use a 3D array to represent 3D space, etc.
}
