#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xo=0;
        if((a-1)%4==0){
            xo=a-1;
        }
        else if((a-1)%4==1) xo=1;
        else if((a-1)%4==2){
            xo=a;
        }
        else if((a-1)%4==3) xo=0;

        int k=b^xo;
        
        if(k==0){
            cout<<a<<endl;
        }
        else if(k==a){
            cout<<a+2<<endl;
        }
        else cout<<a+1<<endl;

    }
    return 0;
}