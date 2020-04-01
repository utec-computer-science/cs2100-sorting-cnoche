#include <iostream>
#include <vector> 
using namespace std;

void selectionSort(vector<int>& data)  
{  
    auto n = data.size();
    int index_min;  
    
    for (int i = 0; i < n-1; i++)  
    {  
        // Find the min 
        index_min = i;  
        for (int j = i+1; j < n; j++)  
        if (data[j] < data[index_min])  
            index_min = j;  
  
        // Swap the new min 
        swap(data[index_min], data[i]);  
    }  
}