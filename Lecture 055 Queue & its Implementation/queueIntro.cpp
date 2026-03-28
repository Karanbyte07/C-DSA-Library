#include <iostream>
#include <queue>
using namespace std;

int main()
 {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size of queue: " << q.size() << endl;
    q.pop(); //remove one element from the front of the queue
    cout << "Size of queue after pop: " << q.size() << endl;

    cout << "Front element: " << q.front() << endl; //access the front element
    cout << "Back element: " << q.back() << endl; //access the back

    
 }