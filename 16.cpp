#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int k=r/(b+1);
        int l=r%(b+1);
        string res="";
        int g=l;
        for(int i=0;i<b+1;i++){
            int a=k;
            
            while(a--){
                res+='R';
            }
            if(l>0){
                res+='R';
            }
            if(i<b)res+='B';
            l--;
        }
        cout<<res<<endl;
    }
    return 0;
}