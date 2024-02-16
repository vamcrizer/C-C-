#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k;  cin >> n >> k;
        int a[n]; for (auto &x : a) cin >> x;
        for (int i = 0; i <= n - k; i++){
            cout << *max_element(a +i, a+ i + k) << " ";
        }
        cout << endl;
    }
}