#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.first!=b.first) return a.first>b.first;
    else {
        return a.second<b.second;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        pair<int,int> arr[n];

        for(int i=0;i<n;i++){
            arr[i].second=i+1;
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%k!=0) x%=k;
            else x=k;
            arr[i].first=x;
        }
        sort(arr,arr+n,compare);
        for(int i=0;i<n;i++) cout<<arr[i].second<<" ";
        cout<<endl;
    }
    return 0;
}