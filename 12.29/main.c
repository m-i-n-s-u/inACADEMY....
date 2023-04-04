/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int card[50]={0},i,j,num,d;

    for(i=0,j=1;i<50;i++){
        card[i]=j;
        j++;
        }

    scanf("%d",&num);

    for(i=0;i<num-1;i++){
        scanf("%d",&d);
        card[d-1]=0;
        }

    for(i=0;i<num;i++){
        if(card[i]!=0)
            printf("%d",i+1);
    }

    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i,num[10]={0},jmax=0,hmax=0;
    for(i=0;i<10;i++)
        scanf("%d",&num[i]);

    for(i=0;i<10;i++){
        if(num[i]%2==0){
            if(jmax<num[i])
                jmax=num[i];
        }
        else
            if(hmax<num[i])
                hmax=num[i];
    }

    if(hmax!=0)
        printf("%d",hmax);

    if(hmax!=0 && jmax!=0)
        printf(" ");

    if(jmax!=0)
        printf("%d",jmax);

    return 0;
}*/

/*
#include<stdio.h>

int main()
{
    int m,a[20]={0},i=0,j;
    scanf("%d",&m);

    for(;;){
        if(m==0)
            break;

        a[i++]=m%8;
        m=m/8;
    }

    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);

    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int number,a[30]={0},i,j,imsi,cnt=0,k;

    scanf("%d",&number);

    for(i=0;i<number;i++)
        scanf("%d",&a[i]);

    for(i=0;i<number-1;i++){
        for(j=i;j<number-1;j++){
            if(a[j]>a[j+1]){
                imsi=a[j];
                a[j]=a[j+1];
                a[j+1]=imsi;
                cnt++;

            }
        }
    }
    printf("%d",cnt);
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int number,a[30]={0},i,j,imsi,k;

    scanf("%d %d",&number,&k);

    for(i=0;i<number;i++)
        scanf("%d",&a[i]);

    for(i=0;i<number-1;i++){
        for(j=i+1;j<number;j++){
            if(a[i]>a[j]){

                imsi=a[i];
                a[i]=a[j];
                a[j]=imsi;


            }
        }
    }
    for(i=0;i<number;i++){

        if((i+1)%k==0)
            printf("%d \n",a[i]);
        else
            printf("%d ",a[i]);
    }

    return 0;
}
