#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll res=1;
        ll coal =y*k;
        ll j=k;
        ll p=x;
        k+=coal;
        ll count=(k-1)/(p-1);
        if((k-1)%(p-1)!=0) count++;
        
        cout<<count+j<<endl;
        //for k coals we require k*y sticks;
        


    }
    return 0;
}