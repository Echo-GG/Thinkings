#include <iostream>
#include <vector>
#include "QuickSort.h"
#include "Display.h"
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int n;
    cout<<"请输入待排序数组的大小:"<<endl;
    cin>>n;
    vector<int>nums(n);
    cout<<"请输入待排序数组中的各个元素，元素之间使用空格隔开"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"排序前: "<<endl;
    Display(nums);
    
    cout<<"QuickSort: "<<endl;
    QuickSort(nums,0,n);
    cout<<"Sorted Array:"<<endl;
    Display(nums);
    
    return 0;
}