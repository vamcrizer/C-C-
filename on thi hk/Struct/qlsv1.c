#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int stt_global = 0;
struct sinhvien {
    int stt;
    char name[50];
    double m1,m2,m3;
    double sum;
};
typedef struct sinhvien ds;
void nhap(ds *a){
    a->stt = ++stt_global;
    getchar();
    gets(a->name);
    scanf("%lf%lf%lf", &a->m1, &a->m2, &a->m3);
    a->sum = a->m1 + a->m2 + a->m3;
}
void edit(ds *a){
    getchar();
    gets(a->name);
    scanf("%lf%lf%lf", &a->m1, &a->m2, &a->m3);
    a->sum = a->m1 + a->m2 + a->m3;
}
int cmp(const void *a, const void *b){
    ds *x = (ds*)a;
    ds *y = (ds*)b;
    return x->sum > y->sum;
}
void in(ds a){
    printf("%d %s %.1lf %.1lf %.1lf\n", a.stt, a.name, a.m1, a.m2, a.m3);
}
  ds a[100000];
int main(){
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    ///freopen("output.txt", "r", stdout);
    //#endif
 
    while(1){
        int n;
        int x;
        scanf("%d", &x);
        if (x == 2){
            int stt;
            scanf("%d", &stt);
            for (int i = 0; i < n; i++){
                if (a[i].stt == stt){
                    edit(&a[i]);
                    
                }
            }
            printf("%d\n", stt);
        } else if (x == 1){
            scanf("%d", &n);
             
            for (int i = 0; i < n; i++){
                nhap(&a[i]);
            }
            printf("%d\n", n);
        } else if (x == 3){
            qsort(a, n, sizeof(ds), cmp);
            for (int i = 0; i < n; i++){
                in(a[i]);
            }
            return 0;
        }
    }
}