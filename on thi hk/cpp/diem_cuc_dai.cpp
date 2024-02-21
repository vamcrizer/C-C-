#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[105][105];


int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n,m; cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            bool check = true;
            for (int k = 0; k < 8; k++){
                int i1 = i + dx[k], j1 = j + dy[k];
                if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m){
                    if (a[i1][j1] >= a[i][j]){
                        check = false;
                        break;
                    }
                }
            }
            if (check){
                cnt++;
            }
        }
    }
    cout << cnt;
}