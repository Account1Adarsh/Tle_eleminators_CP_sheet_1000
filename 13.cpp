#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll count =0;
        ll v=arr[0];
        int mini=arr[0];
        int maxi=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]==v) continue;
            else if(arr[i]>v){
                ll d=(arr[i]-(v+x));
                if(d<=0){
                    maxi=max(maxi,arr[i]);
                    continue;
                }
                else{
                    ll space=(mini-(v-x));
                    if(space>=d){
                        v+=d;
                        maxi=max(maxi,arr[i]);
                    }
                    else{
                        count++;
                        v=arr[i];
                        maxi=arr[i];
                        mini=arr[i];
                    }

                }
            }
            else if(arr[i]<v){
                ll d=(v-x)-arr[i];
                if(d<=0){ 
                    mini=min(mini,arr[i]);
                    continue;
                }
                else{
                    ll space=v+x-maxi;
                    if(space>=d){
                        v-=d;
                        mini=min(mini,arr[i]);
                    }
                    else{
                        count++;
                        v=arr[i];
                        mini=arr[i];
                        maxi=arr[i];
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}