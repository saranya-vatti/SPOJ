#include<stdio.h>
// refer http://www.algorithmist.com/index.php/SPOJ_LASTDIG
//and http://spojsolutionsimple.blogspot.in/2012/07/last-digit-spoj-problem-codelastdig.html
int main()
{
    int t,a,b,m=10,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        int result=1;
        while(b>0)
        {
            if(b%2==1){
                result=(result*a)%m;
            }
            b=b>>1;
            a=(a*a)%m;
        }
        printf("%d\n",result);
    }
    return 0;
}
