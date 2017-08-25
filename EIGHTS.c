#include<stdio.h>
//http://spojsolutionsimple.blogspot.in/2012/07/triple-fat-ladiesspoj-spoj-problem-set.html
int main()
{
        int t;
        unsigned long long int k;
        scanf("%d",&t);
        while(t--)
        {
        scanf("%llu",&k);
        unsigned long long int temp;
        temp=(k-1)*250+192;
        printf("%llu\n",temp);
        }
        return 0;
}
