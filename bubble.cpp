#include <iostream>
#include <vector> 
using namespace std;

void bubble(vector<int> &data)  
{  
    auto n = data.size();
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    for (j = 0; j < n-i-1; j++)  
        if (data[j] > data[j+1])  
            swap(data[j], data[j+1]);  
}  
  