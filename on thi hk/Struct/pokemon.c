#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

struct pokemon{
    char name[50];
    int have;
    int need;
    int num;
};
typedef struct pokemon ds;
int max = 0;
int cnt = 0;
void nhap(ds *a){
    getchar();
    gets(a->name);
    scanf("%d%d", &a->need, &a->have);
    a->num = 0;
    int tmp = a->have;
    while(tmp > 0){
        if (tmp >= a->need){
            a->num++;
            tmp += 2;
        }
        tmp -= a->need;
    }
    if (a->num > max){
        max = a->num;
    }
    cnt += a->num;
}

void in (ds a){
    printf("%d\n%s\n", cnt, a.name);
}

int main(){
    int n;
    scanf("%d", &n);
    ds a[n];
    for (int i = 0; i < n; i++){
        nhap(&a[i]);
    }
    for (int i = 0; i < n; i++){
        if (max == a[i].num){
            in(a[i]);
        }
    }
}
