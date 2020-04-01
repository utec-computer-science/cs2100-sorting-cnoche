#include <iostream>
#include <vector> 
using namespace std; 
  

void heapify(vector<int>& data, int n, int i) 
{ 
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2; // left and right values
  
    // left bigger than largest 
    if (l < n && data[l] > data[largest]) 
        largest = l; 
  
    // right bigger than largest
    if (r < n && data[r] > data[largest]) 
        largest = r; 

    if (largest != i) { 
        swap(data[i], data[largest]); 

        heapify(data, n, largest); 
    } 
} 
  
// main heap sort
void heapSort(vector<int>& data, int n) 
{ 

    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(data, n, i); 
  
    for (int i = n - 1; i >= 0; i--) { 
        swap(data[0], data[i]); 
  
        heapify(data, i, 0); 
    } 
}