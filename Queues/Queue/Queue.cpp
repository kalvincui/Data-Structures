#include <iostream>
#include <queue>

using namespace std;

int main () {
    // queue <datatype> name;
    queue <int> intqueue;
    intqueue.push(1);
    intqueue.push(3);
    intqueue.push(2);
    while (!intqueue.empty()){
        cout << intqueue.back() << '\n';
        intqueue.pop();
    }
    intqueue.push(1);
    intqueue.push(3);
    intqueue.push(2);
    while (!intqueue.empty()){
        cout << intqueue.front() << '\n';
        intqueue.pop();
    }
}

/* Output
2
2
2
1
3
2
*/
