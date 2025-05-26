/*Taking an array of 10 elements with values [2, 5, 8, 12, 16, 23, 38, 56, 72, 91] perform Binary search and print the index value of the element. The default index is 0*/
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Element not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = 10;
    int target;
    
    // Input the element to search
    cin >> target;
    
    // Perform binary search
    int result = binarySearch(arr, size, target);
    
    // Output the result
    if (result != -1) {
        cout << result << endl;
    } else {
        cout  << target  << endl;
    }
    
    return 0;
}