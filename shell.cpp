#include <iostream>
#include <vector> 
using namespace std;

void shell(vector<int> &data)
{
    int gap = data.size() /2;
    while(gap > 0)
    {
        for (int i = gap; i < data.size();++i)
        {
            for (int j = i;j > gap; j-= gap)
            {
                if (data[j]<data[j-gap])
                    swap(data[j], data[j-gap]);
                else
                    break;
                
                }
            }
        gap = gap/2;
    } 
} 