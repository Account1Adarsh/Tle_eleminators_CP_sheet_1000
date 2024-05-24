#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        pair<int,int> arr[n];
        for(int i=0;i<n;i++){
            cin>>x;
            arr[i].first=x;
            arr[i].second=i;
        }
        sort(arr,arr+n);
        ll res[n+1];
        res[0]=0;
        ll p=1;
        ll sum=0;
        for(int i=n-1;i>=0;i--){
            res[arr[i].second+1]=p;
            p*=-1;
            if(p>0) p++;
        }
        for(int i=0;i<n;i++){
            ll j=2*abs(res[arr[i].second+1])*arr[i].first;
            sum+=j;
        }
        cout<<sum<<endl;
        for(int i=0;i<=n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}