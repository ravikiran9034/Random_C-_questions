/*Write a program in 
C++ which calculates the sum of 5 elements in an array of datatype double with values {1.1, 2.2, 3.3, 4.4, 5.5}.*/

#include <iostream>
using namespace std;


int main() {
    // Initialize array with given values
    double numbers[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double sum = 0.0;
    
    // Calculate sum of array elements
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    
    // Output the result
    cout<< sum<<endl;
    
    return 0;
}
