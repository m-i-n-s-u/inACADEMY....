/*#include <stdio.h>
#define M 9999

int main()
{
    int a[1000],b[1000],p[10000];
    int i,j,k,s,number1,number2;
    i=j=s=0;

    scanf("%d %d",&number1,&number2);

    for(k=0;k<number1;k++)
        scanf("%d",&a[k]);

    for(k=0;k<number2;k++)
        scanf("%d",&b[k]);

    a[number1]=M;
    b[number2]=M;

    while(a[i]!=M || b[j]!=M){
        if(a[i]<=b[j])
            p[s++]=a[i++];
        else
            p[s++]=b[j++];
    }
    for(k=0;k<i+j;k++)
        printf("%d ",p[k]);
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i,j,nums,a[100]={0},plus[100]={0};
    scanf("%d",&nums); // 숫자개수

    for(i=0;i<nums;i++)
        scanf("%d",&a[i]); //숫자입력

    for(i=0;i<nums;i++){
        for(j=0;j<=i;j++){
            plus[i]+=a[j];
        }
    }
    for(i=0;i<nums;i++)
        printf("%d ",plus[i]);

    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int nums,a[100]={0},max[100],maxer=a[0],i,n,j,k=0,t=1;
    scanf("%d %d",&nums,&n); //몇개를 몇번

    for(i=0;i<nums;i++)
        scanf("%d",&a[i]);

    for(i=0;i<nums-n;i+=n){
        for(j=i;j<t*n;j++){
            if(a[j]>=maxer)
                maxer=a[j];
        }
        max[k++]=maxer;
        maxer=0;
        t++;
    }
    for(i=0;i<=k;i++)
        printf("%d ",max[i]);

    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int nums,n,a[100],b[100],max[100],i,biggest=0,start=0,end=1,k=0;
    float cnt;

    scanf("%d %d",&nums,&n); // nums몇개를 n몇개로

    for(i=0;i<nums;i++)
        scanf("%d",&a[i]);

       while(1)
       {
        for(i=start*n;i<end*n;i++)
            b[k++]=a[i];
        k=0;

        for(i=start*n;i<end*n;i++)
        {   if(b[i]>=biggest)
                biggest=b[i];

        }
        printf("%d",biggest);
        cnt++;
        start++;end++;

        if(cnt)
       }

    return 0;
}*/
