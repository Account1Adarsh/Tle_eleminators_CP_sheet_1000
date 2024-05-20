#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,q,k;
        cin>>n>>k>>q;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<ll> v;
        v.push_back(-1);
        for(int i=0;i<n;i++){
            if(arr[i]>q) v.push_back(i);
        }  
        v.push_back(n); 
        ll res=0;
        for(int i=1;i<v.size();i++){
            ll a=v[i]-v[i-1]-1;
            if(a>=k){
                a-=k;
                res+=(a+1)*(a+2)/2;
            } 
        }
        cout<<res<<endl;

    }
    return 0;
}