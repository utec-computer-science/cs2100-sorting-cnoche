#include <iostream>
#include "selection.h"

using namespace std;

int main() 
{ 
    vector<int> vec = { 7, 11, 4, 5, 9, 12 }; 
    cout << "The original vector is: \n"; 
    for (int i = 0; i < vec.size(); i++){
      cout << vec[i] << " ";
    }
    selectionSort(vec);

    cout << "\n The sorted vector is: \n"; 
    for (int i = 0; i < vec.size(); i++){
      cout << vec[i] << " ";
    }
    cout << endl;
} 