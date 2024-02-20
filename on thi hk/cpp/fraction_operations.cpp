#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int T;

int lcm(int a, int b){
    return a / __gcd(a, b) * b;
}

struct Fraction{
    int tu;
    int mau;
};
typedef struct Fraction Fraction;
void read_input(Fraction &a){
    cin >> a.tu >> a.mau;
}
void process (Fraction a, Fraction b){
    int mcnn = lcm(a.mau, b.mau);
    a.tu = a.tu * mcnn / a.mau;
    b.tu = b.tu * mcnn / b.mau;
    a.mau = mcnn;
    b.mau = mcnn;
    int tuso, mauso;
    tuso = (a.tu + b.tu)*(a.tu + b.tu);
    mauso = mcnn*mcnn;
    int gcd = __gcd(tuso, mauso);
    cout << tuso / gcd << "/" << mauso / gcd << " ";
    gcd = __gcd(tuso * a.tu * b.tu, a.mau * b.mau * mauso);
    cout << tuso * a.tu * b.tu / gcd << "/" << a.mau * b.mau * mauso / gcd;
    cout << endl;
}


int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}