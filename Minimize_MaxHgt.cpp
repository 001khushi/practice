#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[],int n,int k){
    vector<pair<int,int>> v;
    vector<int> vis(n);
    int ans;
    for(int i=0;i<n;i++){
        if(arr[i]-k>=0){
            v.push_back({arr[i]-k,i});
        }
        sort(v.begin(), v.end());
        int ele=0;
        int left=0;
        int right=0;
        while(ele < n && right < v.size()){
            if(vis[v[right].second]==0){
                ele++;
            }
            vis[v[right].second]++;
            right++;
        }
        ans = v[right-1].first-v[left].first;
        while(right<v.size()){
            if(vis[v[left].second]==1){
                ele--;
            }
            vis[v[left].second]--;
            left++;
             while(ele < n && right < v.size()){
                if(vis[v[right].second]==0){
                    ele++;
                }
                vis[v[right].second]++;
                right++;
             }
        }
        if(ele==n){
            ans=min(ans,v[right-1].first-v[left].first);
        }
        else{
            break;
        }
        
    }
    return ans;
}
int main()
{
    int n=4;
    int k=2;
    int arr[]={1,5,8,10};
    int c=getMinDiff(arr,n,k);
    cout<<c;
    return 0;
}
