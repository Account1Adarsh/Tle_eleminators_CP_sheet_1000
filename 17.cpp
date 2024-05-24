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
        int k=log2(n-1);
        k=pow(2,k);
        int p=n-1;
        while(true){
            if(p==k){
                cout<<p<<" "<<0<<" ";
                p--;
                break;
            }
            cout<<p<<" ";
            p--;
        }
        while(p>0){
            if(p>1) cout<<p<<" ";
            else{
                cout<<p;
            }
            p--;
        }
        cout<<endl;
    }
    return 0;
}