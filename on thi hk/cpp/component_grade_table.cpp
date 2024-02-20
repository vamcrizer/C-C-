#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int start = 1;

struct ds{
    string ma_sv;
    string name;
    string ho, dem, ten;
    string lop;
    double x, y, z;
};
typedef struct ds ds;
bool cmp(ds a, ds b){
    if (a.ten != b.ten){
        return a.ten < b.ten;
    }
    if (a.dem != b.dem){
        return a.dem < b.dem;
    }
    return a.ho < b.ho;
}
void input(ds &a){
    vector<string> ve;
    cin >> a.ma_sv;
    cin.ignore();
    getline(cin, a.name);
    stringstream ss(a.name);
    string word;
    while(ss >> word){
        ve.push_back(word);
    }
    int n = ve.size();
    a.ho = ve[0];
    a.ten = ve[n - 1];
    a.dem = "";
    if (n > 2){
    for (int i = 1; i < n - 1; i++){
        a.dem += ve[i] + " ";
    }
    (a.dem).pop_back();
    }
    a.name = "";
    for (auto x : ve){
        a.name += x;
    }
    cin >> a.lop;
    cin >> a.x;
    cin >> a.y;
    cin >> a.z;
}
int main(){
    int n; cin >> n; 
    vector<ds> a(n);
    for (int i = 0 ; i < n ; i++){
        input(a[i]);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0 ; i < n ; i++){
        cout << start++ << " " << a[i].ma_sv << " " << a[i].name << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].x << " " << fixed << setprecision(1) << a[i].y << " " << fixed << setprecision(1)  << a[i].z << endl;
    }
}