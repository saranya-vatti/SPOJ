#include<stdio.h>
int max(int a,int b,int c);
int cr[100],pr[100];
int main(){
	int t,h,w,i,j,r;
	scanf("%d",&t);
	while(t--){
		r=0;
		scanf("%d %d",&h,&w);
		for(i=0;i<=w+1;i++){
			cr[i]=0;
			pr[i]=0;
		}
		for(i=1;i<=h;i++){
			for(j=1;j<=w;j++){
				pr[j]=cr[j];
			}
			for(j=1;j<=w;j++){
				scanf("%d",&cr[j]);
				cr[j]+=max(pr[j-1],pr[j],pr[j+1]);
				if(i==h && r<cr[j]) r=cr[j];
			}
		}
		printf("%d\n",r);
	}
	return (0);
}
int max(int a,int b,int c){
	if(a>=b && b>=c) return a;
	else if(b>=a && b>=c) return b;
	return c;
}

