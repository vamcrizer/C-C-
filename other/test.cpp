#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1000000007;

const int maxn = 10000;
bool a[maxn + 1];
void sang(){
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= sqrt(maxn); i++){
        for (int j = i * i; j <= maxn; j += i){
            a[j] = 1;
        }
    }
}

void sang2(int l, int r){
    bool nt[r - l + 1];
    for (int i = 0; i <= r - l; i++){
        nt[i] = true;
    }
    for (int i = 2; i <= sqrt(r); i++){
        for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i){
            nt[j - l] = false;
        }
    }
    for (int i = max(2, l); i <= r; i++){
        if (nt[i - l]){
            cout << i << " ";
        }
    }
}
ll powmod(ll a, ll b, ll c){
    ll res = 1;
    for (int i = 1; i <= b; i++){
        res *= a;
        res %= c;
    }
    return res % c;
}

ll fibo(int n){
    ll f[n + 1];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
        f[i] %= MOD;
    } 
    return f[n] % MOD;
}

ll binpow(ll a, ll b){
    if (b == 0){
        return 1;
    }
    ll x = binpow(a, b / 2);
    if (b % 2 == 1){
        return x * x * a;
    } else {
        return x * x;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int m, n;
    cin >> m >> n;
    sang2(m, n);
    return 0;
}
