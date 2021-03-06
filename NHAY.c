//Knuth-Morris-Pratt algo.
#include<stdio.h>
#include<stdlib.h>
int matches[1000000],next[1000];
void KMP(int len);
void preComputeData(char *needle,int len);
void sort(int len);
int main(){
	int len;
	while(1){
		scanf("%d",&len);
		KMP(len);
	}
	return (0);
}
void KMP(int len){
	char *haystack;
	char needle[len];
	int i,j,index=0;
	scanf("%s",needle);
	preComputeData(needle,len);
	i=j=0;
	while(1){
	//scanf("%s",haystack);
	//while(haystack[j]!=EOF){
		scanf("%c",&haystack[j]);
		if (haystack[j]=='\n') {printf("breaking\n");break;}
		while(i>-1 && needle[i] != haystack[j])
			i=next[i];
		i++;j++;
		if(i>=len){
			matches[index++]=j-i;
			i=next[i];
		}
	}
	sort(index);
	for(i=0;i<index;i++) printf("%d\n",matches[i]);
	printf("\n");
}
void preComputeData(char *needle,int len){
	int i=0,j;j=next[0]=-1;
	while(i<len){
		while(j>-1 && needle[i]!=needle[j])
			j=next[j];
		next[++i]=++j;
	}
}
void sort(int len){
	int i,j,temp;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(matches[i]>matches[j]){
				temp=matches[i];
				matches[i]=matches[j];
				matches[j]=temp;
			}
		}
	}
}
