#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int start = 1;

struct ds{
    string ma_sv;
    string name;
    string lop;
    double x, y, z;
};
typedef struct ds ds;
bool cmp(ds a, ds b){
    return a.name < b.name;
}
void input(ds &a){
    cin >> a.ma_sv;
    cin.ignore();
    getline(cin, a.name);
    cin >> a.lop;
    cin >> a.x;
    cin >> a.y;
    cin >> a.z;
}
int main(){
    int n; cin >> n; ds a[n];
    for (int i = 0 ; i < n ; i++){
        input(a[i]);
    }
    sort(a, a + n, cmp);
    for (int i = 0 ; i < n ; i++){
        cout << start++ << " " << a[i].ma_sv << " " << a[i].name << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].x << " " << fixed << setprecision(1) << a[i].y << fixed << setprecision(1) << " " << a[i].z << endl;
    }
}
