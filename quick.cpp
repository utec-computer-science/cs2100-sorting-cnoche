#include <iostream>
#include <vector> 
using namespace std;

int partition (vector<int> &data, int low, int high)  
{  
    int pivot = data[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // is current element smaller than the pivot  
        if (data[j] < pivot)  
        {  
            i++; // i 
            swap(data[i], data[j]);  
        }  
    }  
    swap(data[i + 1], data[high]);  
    return (i + 1);  
}

void quickSort(vector<int>& data, int low, int high)  
{  
    if (low < high)  
    {  
        //get index
        int index = partition(data, low, high);  
  
        quickSort(data, low, index - 1);  
        quickSort(data, index + 1, high);  
    }  
}  