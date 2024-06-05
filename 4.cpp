//copied from jiangly

#include<bits/stdc++.h>
using i64 = long long;

void solve(){
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> v(n);
    int m2=INT_MAX;
    int m1=INT_MAX;
    i64 ans=0;
    for(int i=0;i<n;i++){
        int m;
        std::cin>>m;
        v[i].resize(m);
        
        for(int j=0;j<m;j++){
            std::cin>>v[i][j];
        }
        std::nth_element(v[i].begin(),v[i].begin()+1,v[i].end());
        m1=std::min(m1,v[i][0]);
        m2=std::min(m2,v[i][1]);
        ans+=v[i][1];
    }
    ans-=m2;
    ans+=m1;
    std::cout<<ans<<std::endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
