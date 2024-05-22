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
        string s;
        cin>>s;
        int ref[26];
        for(int i=0;i<26;i++){
            ref[i]=0;
        }
        for(int i=0;i<n;i++){
            ref[s[i]-'a']++;
        }
        int right=0;
        for(int i=0;i<26;i++) if(ref[i]!=0) right++;

        set<char> left;
        int res=right;
        for(int i=0;i<n;i++){
            int k=s[i]-'a';
            if(ref[k]>=1){
                if(ref[k]==1) right--;
                left.insert(s[i]);
                ref[k]--;
            }
            int p=left.size();
            res=max(res,p+right);
        } 
        cout<<res<<endl;

    }
    return 0;
}