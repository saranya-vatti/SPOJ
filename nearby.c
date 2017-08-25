#include<stdio.h>
#include<math.h>
#define MAX_T 10000
#define MAX_Q 1000
double dist(double x1, double x2, double y1, double y2);
void inputTid(int index,int qn);
int qtArr[MAX_Q][MAX_T];
int qid[MAX_Q];
double distArr[MAX_T];
int indArr[MAX_T];
int NUM_T,NUM_Q;
int main() {
    int n,i,j,k,l,m,p,temp2;
    scanf("%d %d %d",&NUM_T,&NUM_Q,&n);
    int tid[NUM_T];
    double tx[NUM_T],ty[NUM_T],temp1;
    for(i=0;i<NUM_T;i++) {
        scanf("%d %lf %lf",&tid[i],&tx[i],&ty[i]);
    }
    int qn[NUM_Q],tempNumTopics;
    for(i=0;i<NUM_Q;i++) {
        scanf("%d %d",&qid[i],&tempNumTopics);
        inputTid(qid[i],tempNumTopics);
    }
    char type,buffchar;
    int MAX_NUM_ANS;
    double qx,qy;
    double distArr[NUM_T];
    int ansArr[NUM_Q],NUM_ANS;
    for(i=0;i<n;i++) {
        scanf("%c %d %lf %lf",&type,&MAX_NUM_ANS,&qx,&qy);
        for(j=0;j<NUM_T;j++) {
            distArr[j]=dist(tx[j],qx,ty[j],qy);
            indArr[j]=j;
        }
        for(j=1;j<=NUM_T-1;j++) {
            k=j;
            while(k>0 && (distArr[k]-distArr[k-1]<0.001)) {
                if(distArr[k]-distArr[k-1]<0 || (distArr[k]-distArr[k-1]<0.001 && indArr[k-1]>indArr[k])) {
                    temp1=distArr[k]; temp2=indArr[k];
                    distArr[k]=distArr[k-1]; indArr[k]=indArr[k-1];
                    distArr[k-1]=temp1; indArr[k-1]=temp2;
                }
                k--;
            }
        }
        if(type=='t') {
            for(j=0;j<MAX_NUM_ANS;j++) {
                printf("%d ",indArr[j]);
            }
        } else {
            p=0;
            NUM_ANS=0;
            for(k=0;k<NUM_T;k++) {
                for(l=NUM_Q-1;l>=0;l--) {
                    if(qtArr[qid[l]][indArr[k]]==1 && NUM_ANS<MAX_NUM_ANS) {
                        NUM_ANS++;
                        for(m=0;m<NUM_T;m++) {
                            qtArr[qid[l]][m]=0;
                        }
                        printf("%d ",qid[l]);
                    }
                }
            }
        }
        printf("\n");
        scanf("%c",&buffchar);
    }
    return 0;
}
void inputTid(int qIndex,int qn) {
    int i,j,tIndex;
    for(i=0;i<MAX_T;i++) {
        qtArr[qIndex][i]=0;
    }
    for(i=0;i<qn;i++) {
        scanf("%d ",&tIndex);
        qtArr[qIndex][tIndex]=1;
    }
}
double dist(double x1, double x2, double y1, double y2) {
    return sqrt(((x1-x2) * (x1-x2)) + ((y1-y2) * (y1-y2)));
}
