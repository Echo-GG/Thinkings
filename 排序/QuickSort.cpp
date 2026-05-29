#include "QuickSort.h"
using namespace std;

void QuickSort(vector<int>& Array,int l,int r){
    int size = Array.size();
    
    if(l+1>=r){
        return ;
    }

    int first = l, last = r-1, key = Array[first];

    while(first < last && Array[first] <= key){
        ++first;
    }

    Array[last] = Array[first];

    QuickSort(Array,l,first);
    QuickSort(Array,first + 1 ,r);

}
