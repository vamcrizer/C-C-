#include<stdio.h>
#include<math.h>
int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
struct ps{
	int tu, mau;
};
typedef struct ps ps;
int main(){
	int t; scanf("%d", &t);
	for(int x=1; x<=t; x++){
		ps p, q;
		scanf("%d%d%d%d", &p.tu, &p.mau, &q.tu, &q.mau);
		int u = gcd(p.tu, p.mau); p.tu/=u; p.mau/=u;
		u = gcd(q.tu, q.mau); q.tu/=u; q.mau/=u;
		u = gcd(p.mau, q.mau);
		int lcm = p.mau*q.mau/u;
		int tp = p.tu*lcm/p.mau, mp=lcm, tq = q.tu*lcm/q.mau, mq=lcm;
		printf("Case #%d:\n", x);
		printf("%d/%d %d/%d\n", tp, mp, tq, mq);
		int tuso = tp + tq, tmp = gcd(tuso, mp);
		printf("%d/%d\n", tuso/tmp, mp/tmp);
		int a = tp*mq, b = mp*tq, c = gcd(a, b);
		printf("%d/%d\n", a/c, b/c);
	}
}