#include<stdio.h>  
#define MAX 160
void factorialof(int);  
void multiply(int);  
int length = 0;  
int fact[MAX];
void initialize();
int main(){  
	int num,t;  
	int i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&num);
		initialize();
		fact[0]=1;  

		factorialof(num);  
		for(i=length;i>=0;i--)  
		{  
			printf("%d",fact[i]);  
		} 
	printf("\n");  
	}
	return 0;  
}  
void initialize(){
	int i;
	for(i=0;i<MAX;i++){
		fact[i]=0;
	}
	length=0;
}
void factorialof(int num)  
{  
	int i;  
	for(i=2;i<=num;i++)  
	{  
		multiply(i);  
	}  
}  
void multiply(int num)  
{  
	long i,r=0;  
	int arr[MAX];  
	for(i=0;i<=length;i++)  
	{  
		arr[i]=fact[i];  
	}  

	for(i=0;i<=length;i++){  
		fact[i] = (arr[i]*num + r)%10;  
		r = (arr[i]*num + r)/10;  
		//printf("%d ",r);  
	}  
	if(r!=0){  
		while(r!=0){  
			fact[i]=r%10;  
			r= r/10;  
			i++;  
		}  
	}  
	length = i-1;     
}
