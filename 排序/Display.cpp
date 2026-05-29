#include "Display.h"
using namespace std;
void Display(const vector<int>& Array){
    for(int i=0;i<Array.size();i++){
        if(i!=Array.size()-1){
            cout<<Array[i]<<" ";
        }
        else{
            cout<<Array[i]<<endl;
        }
    }
}