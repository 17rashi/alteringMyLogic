//https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr , int m)
{
      int low=m+1;
      int high=arr.size()-1;
      for(int i=low;low<=high;i++){
               // cout<<arr[low]<<" "<<arr[high]<<endl;
            swap(arr[low],arr[high]);
            low++;
            high--;
      }
}

int main()
{
    int size,a;
    cin>>size;
    vector<int> arr;
    for(int i=0;i<size;i++){
        cin>>a;
        arr.push_back(a);
    }
    int m;
    cin>>m;
    reverseArray(arr,m);
    for(int i=0;i<arr.size();i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}
