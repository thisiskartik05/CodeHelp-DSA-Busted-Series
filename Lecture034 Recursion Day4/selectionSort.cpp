#include <iostream>
#include <vector>
#include <utility> 
using namespace std;

void selectionSort(vector<int> &arr, int i) {
    int n = arr.size();
    if (i >= n - 1) {
        return;
    }    
    int mini = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[mini]) {
            mini = j;
        }
    }
    swap(arr[i], arr[mini]);
    
    selectionSort(arr, i + 1);
}

void printArray(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};    
    cout << "Original Array:  ";
    printArray(arr);    
    selectionSort(arr, 0);    
    cout << "Sorted Array:    ";
    printArray(arr);
    return 0;
}
