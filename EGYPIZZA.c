#include<stdio.h>
int main(){
	int n,q=0,h=0,thq=0,ans=1,i,temp1,temp2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d/%d",&temp1,&temp2);
		if(temp1==3) thq++;
		else if(temp2==2) h++;
		else q++;
	}
	//printf("thq=%d and h=%d and q=%d and ans=%d\n",thq,h,q,ans);
	if(thq==q){
		ans+=thq;
		thq=0;
		q=0;
	}
	else if(thq>q){
		ans+=q;
		thq-=q;
		ans+=thq;
		thq=0;
		q=0;
	}
	else {
		ans+=thq;
		q=q-thq;
		thq=0;
	}
	if(h>0){
		ans=ans+(h/2);
		h=h%2;
	}
	if(h==1 && q>0){
		ans++;
		h--;
		q=q-2;
	}
	else if(h==1 && q==0){
		ans++;
		h=0;
	}
	if(q>0){
		if (q%4==0) ans=ans+(q/4);
		else ans=ans+(q/4)+1;
		q=0;
	}
	printf("%d\n",ans);
	return (0);
}
		
