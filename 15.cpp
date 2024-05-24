#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int start=0;
        int end=k-1;
        int bl=0;
        int wh=0;
        for(int i=0;i<k;i++){
            if(s[i]=='B') bl++;
            if(s[i]=='W') wh++;
        }
        int res=wh;
        for(int i=0;i<n-k;i++){
            if(s[i]=='B'){
                bl--;
            }
            else{
                wh--;
            }
            if(s[i+k]=='B') bl++;
            else wh++;
            res=min(res,wh);

        }
        cout<<res<<endl;
    }
    return 0;
}