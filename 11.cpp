#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        ll n,d;
        cin>>n>>d;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        ll k=n;
        ll count=0;
        for(int i=n-1;i>=0 and k>0;i--){
            ll a=d/arr[i];
            if(k>(a+1)){
                count++;
                k-=(a+1);
            }
            else if(k==(a+1)){
                if(arr[i]*(a+1)>d){
                    count++;
                    k-=(a+1);
                }
            }
            else break;
        }
        cout<<count<<endl;
    return 0;
}