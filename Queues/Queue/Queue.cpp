#include <iostream>
#include <queue>

using namespace std;

int main () {
    // queue <datatype> name;
    queue <int> intqueue;
    intqueue.push(1);
    intqueue.push(2);
    intqueue.push(3);
    while (!intqueue.empty()){
        cout << intqueue.back() << '\n';
        intqueue.pop();
    }
    intqueue.push(1);
    intqueue.push(2);
    intqueue.push(3);
    while (!intqueue.empty()){
        cout << intqueue.front() << '\n';
        intqueue.pop();
    }
}
