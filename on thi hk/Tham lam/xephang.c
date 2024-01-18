 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;

struct line{
    int t;
    int d;
};
typedef struct line ds;
int cmp(const void*a, const void*b){
    ds *x = (ds*)a;
    ds *y = (ds*)b;
    return x->t - y->t;
}

void nhap(ds *a){
    scanf("%d %d", &a->t, &a->d);
}

int main(){
    int n;
    scanf("%d", &n);
    ds a[n];
    for (int i = 0; i < n; i++){
        nhap(&a[i]);
    }
    qsort(a, n, sizeof(ds), cmp);
    int time = 0;
    int time_need1 = a[0].t + a[0].d;
    time += time_need1;
    for (int i = 1; i < n; i++){
        int time_need2 = a[i].t;
        if (time_need2 > time){
            time = a[i].t + a[i].d;
        } else {
            time += a[i].d;
        }
        
    }
    printf("%d", time);
}