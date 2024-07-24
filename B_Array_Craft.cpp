#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y; cin>>n>>x>>y;
    vector<int> arr(n + 1, 0);
    bool one = false;
    for(int i = y; i <= x; i++) arr[i] = 1;
    for(int i = y - 1; i > 0; i--) {arr[i] = (one)?1:-1; one = !one;}
    one = false;
    for(int i = x + 1; i <= n; i++) {arr[i] = (one)?1:-1; one = !one;}
    for(int it = 1; it <= n; it++) cout<<arr[it] <<" ";
    cout<<'\n';
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}