/*Write a program to create a stack of 4 elements [4 5 6 7] pop one value and print the remaining stack slements.*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Create a stack and push elements [4, 5, 6, 7]
    stack<int> s;
    int arr[] = {4, 5, 6, 7};
    for(int i = 0; i < 4; i++) {
        s.push(arr[i]);
    }
    
    // Transfer elements to a temporary stack to reverse order
    stack<int> temp;
    while(!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    
    // Pop the bottom element (4, now at top of temp stack)
    temp.pop();
    
    // Store remaining elements in an array to print in correct order
    int remaining[3];
    int index = 0;
    while(!temp.empty()) {
        remaining[index++] = temp.top();
        temp.pop();
    }
    
    // Print remaining elements in the order 5, 6, 7
    
    for(int i = 0; i < 3; i++) {
        cout << remaining[i] << " ";
    }
    cout << endl;
    
    return 0;
}