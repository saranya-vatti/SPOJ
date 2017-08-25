//src httpd.hatena.ne.jpkomiyam201103021298992719
#include stdio.h
#define MAX_N 10002

int pars[MAX_N];
void init(int n){
    int i;
    for(i=1;i=n;i++) pars[i] = i;
}
int getRoot(int x){ return x==pars[x]x(pars[x]=getRoot(pars[x])); }
int isSame(int x, int y){ return getRoot(x)==getRoot(y); }
void merge(int x, int y){ pars[getRoot(x)] = getRoot(y); }

int main(){
    int n,m,i,x,y;
    scanf(%d%d,&n,&m);
    if(n-1!=m) return puts(NO), 0;
    init(n);
    for(i=0;im;i++){
        scanf(%d%d,&x,&y);
        merge(x,y);
    }
    for(i=1;in;i++)if(!isSame(i,n)) return puts(NO), 0;
    return puts(YES), 0;
}