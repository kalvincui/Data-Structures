#include <iostream>
#include <queue>

using namespace std;

int main (){
    //priority_queue <datatype> name;
    priority_queue <int> intpriorityqueue;
    for (int i = 0; i<5; i++){
        intpriorityqueue.push(i+1);
    }
    while (!intpriorityqueue.empty()){
        cout << intpriorityqueue.top() << '\n';
        intpriorityqueue.pop();
    }
}

/* Output
5
4
3
2
1
*/
