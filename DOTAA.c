#include<stdio.h>
void sort();
int n,H[20000],m;
int main(){
    int t,i,D,j,count,live;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        live=1;
        scanf("%d %d %d",&n,&m,&D);
        count=0;
        for(j=0;j<n;j++) {
            scanf("%d",&H[j]);
        }
        sort();
        for(j=0; j<m-1; j++) {
            H[0] = H[0]-D;
            sort();
            if(H[0] <= D) {
                live = 0;
            }
        }
        if(live==1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
void sort() {
    int c,d,t;
    for (c = 1 ; c <= n - 1; c++) {
        d = c;
        while ( d > 0 && H[d] > H[d-1]) {
            t = H[d];
            H[d]   = H[d-1];
            H[d-1] = t;
            d--;
        }
    }
//    printf("SORTED\n");
//    for(c=0;c<n;c++) {
//        printf("%d\n",H[c]);
//    }
//    printf("\n\n");
}
