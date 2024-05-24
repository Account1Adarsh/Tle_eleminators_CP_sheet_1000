#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int count=0;
        int sum=0;
        int racism=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]<0){
                    count++;
                }
                sum+=abs(arr[i][j]);
                racism=min(racism,abs(arr[i][j]));
            }
        }
        if(count%2==1){
            sum-=2*racism;
        }
        cout<<sum<<endl;
    }
    return 0;
}