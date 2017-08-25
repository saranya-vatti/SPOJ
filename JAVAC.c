#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i,j=0,flaguc,flagu,index,k,flagprev=0,flagdoubleu;
	char str[100],str2[200];
	while(scanf("%s",str)==1){
		j=flaguc=flagu=flagdoubleu=0;
		while(str[j]!='\0'){
			if(str[j]=='_') flagu=1;
			if(str[j]=='_' && str[j+1]=='_') flagdoubleu=1;
			if (str[j]>='A' && str[j]<='Z') flaguc=1;
			j++;
		}
	
		if((flagu==1 && flaguc==1) || flagdoubleu==1 || str[0]=='_' || (str[0]>='A' && str[0]<='Z') || str[j-1]=='_') printf("Error!\n");
		else if(flagu==1){
			j=0;k=0;
			while(str[j]!='\0'){
				if(str[j]!='_' && flagprev==0) str2[k++]=str[j];
				else if(str[j]!='_' && flagprev==1){
					str2[k++]=str[j]-32;
					flagprev=0;
				}
				else if(str[j]=='_') flagprev=1;
				j++;
			}
			str2[k]='\0';
			printf("%s\n",str2);
		}
		else{
			j=0;index=-1,k=0;
			while(str[j]!='\0'){
				if(str[j]>='A' && str[j]<='Z'){
					str2[k++]='_';
					str2[k++]=str[j]+32;
				}
				else str2[k++]=str[j];
				j++;
			}
			str2[k]='\0';
			printf("%s\n",str2);
		}
	}
	return (0);
}
