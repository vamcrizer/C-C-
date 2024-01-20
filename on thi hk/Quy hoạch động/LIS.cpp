#include <bits/stdc++.h>
using namespace std;

multiset<int> se;
int a, n;
int main(){
    int n;
    cin >> n;
    for (int i = 0;i < n; i++){
        int x;
        cin >> x;
        se.insert(x);
        auto m = se.lower_bound(x);
        m++;
        if (m != se.end()){
            se.erase(m);
        }
    }
    cout << se.size();
}