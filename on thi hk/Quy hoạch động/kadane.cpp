#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    ll a[n];
    ll sum1 = 0, sum2 = (int)-1e18;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        sum1 += a[i];
        sum2 = max(sum2, sum1);
        if (sum1 < 0){
            sum1 = 0;
        }
    }
    cout << sum2;
}