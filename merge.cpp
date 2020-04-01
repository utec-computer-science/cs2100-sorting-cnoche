#include <iostream>
#include <vector> 
using namespace std;

void merge_sort(vector<int> &data, vector<int> &left, vector<int> &right)
{
    int nL = left.size();
    int nR = right.size();
    int i = 0, j = 0, k = 0;

    while (j < nL && k < nR) 
    {
        if (left[j] < right[k]) {
            data[i] = left[j];
            j++;
        }
        else {
            data[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < nL) {
        data[i] = left[j];
        j++; i++;
    }
    while (k < nR) {
        data[i] = right[k];
        k++; i++;
    }
}

void merge(vector<int> &data)
{
    if (data.size() <= 1)
    {
        return;
    }
    int mid = data.size() /2;

    vector<int> left;
    vector<int> right;

    for (auto j = 0; j < mid; ++j)
    {
        left.push_back(data[j]);
    }
    for (auto j = 0; j < (data.size()) - mid; ++j)
    {
        right.push_back(data[mid + j]);
    }

    merge(left);
    merge(right);
    merge_sort(data, left, right);
}
