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

/* Output
At coordinate 0,0: 0
At coordinate 0,1: -1
At coordinate 0,2: -2
At coordinate 0,3: -3
At coordinate 0,4: -4
At coordinate 0,5: -5
At coordinate 0,6: -6
At coordinate 0,7: -7
At coordinate 0,8: -8
At coordinate 0,9: -9
At coordinate 1,0: 1
At coordinate 1,1: 0
At coordinate 1,2: -1
At coordinate 1,3: -2
At coordinate 1,4: -3
At coordinate 1,5: -4
At coordinate 1,6: -5
At coordinate 1,7: -6
At coordinate 1,8: -7
At coordinate 1,9: -8
At coordinate 2,0: 2
At coordinate 2,1: 1
At coordinate 2,2: 0
At coordinate 2,3: -1
At coordinate 2,4: -2
At coordinate 2,5: -3
At coordinate 2,6: -4
At coordinate 2,7: -5
At coordinate 2,8: -6
At coordinate 2,9: -7
At coordinate 3,0: 3
At coordinate 3,1: 2
At coordinate 3,2: 1
At coordinate 3,3: 0
At coordinate 3,4: -1
At coordinate 3,5: -2
At coordinate 3,6: -3
At coordinate 3,7: -4
At coordinate 3,8: -5
At coordinate 3,9: -6
At coordinate 4,0: 4
At coordinate 4,1: 3
At coordinate 4,2: 2
At coordinate 4,3: 1
At coordinate 4,4: 0
At coordinate 4,5: -1
At coordinate 4,6: -2
At coordinate 4,7: -3
At coordinate 4,8: -4
At coordinate 4,9: -5
At coordinate 5,0: 5
At coordinate 5,1: 4
At coordinate 5,2: 3
At coordinate 5,3: 2
At coordinate 5,4: 1
At coordinate 5,5: 0
At coordinate 5,6: -1
At coordinate 5,7: -2
At coordinate 5,8: -3
At coordinate 5,9: -4
At coordinate 6,0: 6
At coordinate 6,1: 5
At coordinate 6,2: 4
At coordinate 6,3: 3
At coordinate 6,4: 2
At coordinate 6,5: 1
At coordinate 6,6: 0
At coordinate 6,7: -1
At coordinate 6,8: -2
At coordinate 6,9: -3
At coordinate 7,0: 7
At coordinate 7,1: 6
At coordinate 7,2: 5
At coordinate 7,3: 4
At coordinate 7,4: 3
At coordinate 7,5: 2
At coordinate 7,6: 1
At coordinate 7,7: 0
At coordinate 7,8: -1
At coordinate 7,9: -2
At coordinate 8,0: 8
At coordinate 8,1: 7
At coordinate 8,2: 6
At coordinate 8,3: 5
At coordinate 8,4: 4
At coordinate 8,5: 3
At coordinate 8,6: 2
At coordinate 8,7: 1
At coordinate 8,8: 0
At coordinate 8,9: -1
At coordinate 9,0: 9
At coordinate 9,1: 8
At coordinate 9,2: 7
At coordinate 9,3: 6
At coordinate 9,4: 5
At coordinate 9,5: 4
At coordinate 9,6: 3
At coordinate 9,7: 2
At coordinate 9,8: 1
At coordinate 9,9: 0
*/
