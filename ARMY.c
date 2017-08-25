#include <stdio.h>
#include<stdlib.h>
void guess(int ng,int nm);
int main(){
	int t,ng,nm;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&ng,&nm);
		guess(ng,nm);
	}
	return (0);
}
void guess(int ng,int nm){
	int god[ng],mec[nm],i,tempmaxg,tempmaxm,maxg=0,maxm=0;
	for(i=0;i<ng;i++){
		scanf("%d",&tempmaxg);
		if(maxg<tempmaxg) maxg=tempmaxg;
	}
	for(i=0;i<nm;i++){
		scanf("%d",&tempmaxm);
		if(maxm<tempmaxm) maxm=tempmaxm;
	}
	if(maxg>=maxm) printf("Godzilla\n");
	else if(maxg<maxm) printf("MechaGodzilla\n");
	else printf("uncertain\n");
	return;
}
