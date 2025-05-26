/* Write a program to find the maximum element in an array of 10 elements, taking array values from the user.*/

#include <iostream>
using namespace std;


int main() {
    const int SIZE = 10;
    double numbers[SIZE];
    
    // Input array elements
        for(int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    
    // Find maximum element
    double max = numbers[0];
    for(int i = 1; i < SIZE; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    // Output the result
    cout<< max<<endl;
    
    return 0;
}