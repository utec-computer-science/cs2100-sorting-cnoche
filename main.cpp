#include <iostream>
#include "heap.h"

using namespace std;

int main() 
{ 
    vector<int> vec = { 7, 11, 4, 5, 9, 12 }; 
    cout << "The original vector is: \n"; 
    for (int i = 0; i < vec.size(); i++){
      cout << vec[i] << " ";
    }
    float n = vec.size();
    heapSort(vec, n);

    cout << "\n The sorted vector is: \n"; 
    for (int i = 0; i < vec.size(); i++){
      cout << vec[i] << " ";
    }
    cout << endl;
} 