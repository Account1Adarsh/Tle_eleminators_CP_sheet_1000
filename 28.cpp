#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]==')') sum--;
            else sum++;
            if(sum<0){
                sum=0;
                c++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}