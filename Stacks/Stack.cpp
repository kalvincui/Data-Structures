#include <iostream>
#include <stack>

using namespace std;

int main (){
    // stack <datatype> name;
    stack <int> intstack;
    intstack.push(1);
    intstack.push(2);
    intstack.push(3);

    while (!intstack.empty()){
        cout << intstack.top() << '\n';
        intstack.pop();
    }
}
