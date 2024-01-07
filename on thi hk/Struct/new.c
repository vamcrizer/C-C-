#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

struct SV {
    char ma[20];
    char name[20];
    double gpa;
};

typedef struct SV sv;

void nhap(sv *a){
    scanf("%s", a->ma);
    getchar();
    gets(a->name);
    scanf("%lf", &a->gpa);
}

void in(sv a){
    printf("%s ", a.ma);
    printf("%s ", a.name);
    printf("%.2lf\n", a.gpa);
}

void timkiem1(sv a[], int n, char id[]){
    for (int i = 0; i < n; i++){
        if (strcmp(id, a[i].ma) == 0){
            printf("Da tim thay: %s", a[i].ma);
            return;
        }
    }
}

int cmp(const void *a, const void *b){
    sv *x = (sv*)a;
    sv *y = (sv*)b;
    if (x->gpa > y-> gpa){
        return 1;
    } else {
        return -1;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    scanf("%d", &n);
    sv a[n];
    for (int i = 0; i < n; i++){
        nhap(&a[i]);
    }
    for (int i = 0; i < n; i++){
        in(a[i]);
    }
    printf("\n");
    qsort(a, n, sizeof(sv), cmp);
    for (int i = 0; i < n; i++){
        in(a[i]);
    }
}