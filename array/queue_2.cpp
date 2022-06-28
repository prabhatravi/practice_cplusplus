// C++ program to illustrate Queue traversal

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // Creating a Queue using STL
    queue<string> q;
    
    // The push function inserts elements
    // at the rear end of Queue
    q.push("10");
    q.push("20");
    q.push("30");
    
    // After above operations, queue will 
    // look like:
    //     ******    
    //     * 30 *  <- Queue's rear end
    //     * 20 *
    //     * 10 *  <- Queue's front
    //     ******

    // 1040
    string curr = q.front();
    q.push(curr + "40");
    // 1050
    q.push(curr + "50");
    
    // While Queue is not empty
    while(!q.empty())
    {
        // Print front and back elements
        cout<<q.front()<<" "<<q.back()<<endl;
        
        // Pop top element
        q.pop();
    }
    
    return 0;
}