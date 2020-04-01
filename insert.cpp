#include <iostream>
#include <vector> 
using namespace std;

//implementing insertion Sort with vectors
void insert_sort(vector<int> &data, int n)  
{  
    int i, pos, j;  
    for (i = 1; i < n; i++) 
    {  
        pos = data[i];  
        j = i - 1;  

        //move the values to where they correspond
        while (j >= 0 && data[j] > pos) 
        {  
            data[j + 1] = data[j];  
            j = j - 1;  
        }  
        data[j + 1] = pos;  
    }  
}
