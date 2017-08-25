#include<stdio.h>
#include<string.h>
int main(){
	char a[1002];long long b;int arr[10][4];arr[2][0]=6;arr[2][1]=2;arr[2][2]=4;arr[2][3]=8;arr[3][0]=1;arr[3][1]=3;arr[3][2]=9;arr[3][3]=7;arr[8][0]=6;arr[8][1]=8;arr[8][2]=4;arr[8][3]=2;arr[7][0]=1;arr[7][1]=7;arr[7][2]=9;arr[7][3]=3;
	int i,bl,al,t,c;
	scanf("%d",&t);
	while(t--){
		i=0;
		scanf("%s %lld",a,&b);
		while(a[i++]!='\0');
		al=a[i-2]-48;
		bl=b%10;
		if(b==0) c=1;
		else if(al==2 || al==3||al==8) c=arr[al][(b%100)%4];
		else if(al==5 || al==6 || al==0 || al==1 || al==7 ) c=al;
		else if(bl==0 || bl==2 || bl==4 || bl==6 ||bl==8)
			if(al==4) c=6;
			else c=1;
		else if(al==4) c=4;
		else c=9;
		printf("%d\n",c);
	}
	return (0);
}
	
	
