//https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int low=m+1;
    int high=arr.size()-1;
    for(int i=low;low<=high;i++){
            //cout<<arr[low]<<" "<<arr[high]<<endl;
			swap(arr[low],arr[high]);
            low++;
            high--;
     }
}
