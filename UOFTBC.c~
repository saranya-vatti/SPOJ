#include<stdio.h>
#include<math.h>
#include <stdlib.h>
//2 algos - sum of areas of an interior point in triangle
//point should be on same side of every edge as the centroid
void aster(long long int n,long long int f);
long long int onsameside(double ax,double ay,long long int bx,long long int by,long long int x1,long long int y1,long long int x2,long long int y2);
int isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y);
float area(int x1, int y1, int x2, int y2, int x3, int y3);
int main(){
	long long int t,n,f,x[2][2],y[2][2],i,j;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld",&n,&f);
		aster(n,f);
		
	}
	/*for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter x[%d][%d] and y[%d][%d]\n",i,j,i,j);
			scanf("%d %d",&x[i][j],&y[i][j]);
		}
	}*/
	return (0);
}
void aster(long long int n,long long int f){
	long long int xs,ys,xd,yd,i,x[n][3],y[n][3],j,count=0,xshot,yshot;
	int mark[n];
	double centroidx,centroidy;
	scanf("%lld %lld %lld %lld",&xs,&ys,&xd,&yd);
	for(j=0;j<n;j++){
		for(i=0;i<3;i++)
			scanf("%lld %lld",&x[j][i],&y[j][i]);
		mark[j]=0;
	}
	for(i=0;i<f;i++){
		xshot=xs+(xd*(i+1));
		yshot=ys+(yd*(i+1));
		//printf("xshot=%d and yshot=%d\n",xshot,yshot);
		for(j=0;j<n;j++){
			//centroidx=(x[j][0]+x[j][1]+x[j][2])/3;
			//centroidy=(y[j][0]+y[j][1]+y[j][2])/3;
			//if(onsameside(centroidx,centroidy,xshot,yshot,x[j][0],y[j][0],x[j][1],y[j][1])==1 && onsameside(centroidx,centroidy,xshot,yshot,x[j][1],y[j][1],x[j][2],y[j][2])==1 && onsameside(centroidx,centroidy,xshot,yshot,x[j][2],y[j][2],x[j][0],y[j][0])==1) mark[j]=1;
			if(isInside(x[j][0],y[j][0],x[j][1],y[j][1],x[j][2],y[j][2],xshot,yshot)==1) mark[j]=1;
		}
		//for(j=0;j<n;j++) printf("%d\t",mark[j]);
		//printf("\n");
	}
	for(i=0;i<n;i++) if(mark[i]==1) count++;
	printf("%lld\n",count);
		
}
//func to check if two points A and B lie on same side of line from x1,y1 to x2,y2
long long int onsameside(double ax,double ay,long long int bx,long long int by,long long int x1,long long int y1,long long int x2,long long int y2){
	long long int temp1=(y1-y2)*(ax-x1);
	long long int temp2=(x2-x1)*(ay-y1);
	long long int temp3=(y1-y2)*(bx-x1);
	long long int temp4=(x2-x1)*(by-y1);
	if ((temp1+temp2)*(temp3+temp4)>=0) return 1;
	return 0;
}
/* A utility function to calculate area of triangle formed by (x1, y1), 
   (x2, y2) and (x3, y3) */
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
 
/* A function to check whether point P(x, y) lies inside the triangle formed 
   by A(x1, y1), B(x2, y2) and C(x3, y3) */
int isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{   
   /* Calculate area of triangle ABC */
   float A = area (x1, y1, x2, y2, x3, y3);
 
   /* Calculate area of triangle PBC */  
   float A1 = area (x, y, x2, y2, x3, y3);
 
   /* Calculate area of triangle PAC */  
   float A2 = area (x1, y1, x, y, x3, y3);
 
   /* Calculate area of triangle PAB */   
   float A3 = area (x1, y1, x2, y2, x, y);
   
   /* Check if sum of A1, A2 and A3 is same as A */
   if (A == A1 + A2 + A3) return 1;
    return 0;
}
