#include <iostream>
#include <vector> 
using namespace std;

#ifndef SORTS_QUICK_H
#define SORTS_QUICK_H

int partition (vector<int> &data, int low, int high);
void quickSort(vector<int>& data, int low, int high);

#endif