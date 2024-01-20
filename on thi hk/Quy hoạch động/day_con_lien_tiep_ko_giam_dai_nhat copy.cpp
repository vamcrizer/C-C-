#include <iostream>
using namespace std;

int main(){
    int n, cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int step = 1, res = 0;
    for (int i = 1; i < n; i++){
        if (a[i] >= a[i - 1]){
            step++;
        } else if (step > res){
            b[0] = i - res + 1;
            cnt = 1;
        }
        if (step > res){
            res = step;
        }
    }
    cout << res;
}