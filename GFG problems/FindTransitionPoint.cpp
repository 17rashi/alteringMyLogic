//https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?page=1&category[]=Arrays&category[]=sliding-window&sortBy=submissions

int transitionPoint(int arr[], int n) {
    // code here
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            ans=i;
            break;
        }
    }
    return ans;
}