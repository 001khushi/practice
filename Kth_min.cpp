int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> maxh;
        int n=r+1;
        for(int i=0;i<k;i++){
            maxh.push(arr[i]);
        }
        for(int i=k;i<n;i++)
        {
            if(maxh.top()>arr[i]){
            maxh.pop();
            maxh.push(arr[i]);
            }
        }
    return maxh.top();
    }