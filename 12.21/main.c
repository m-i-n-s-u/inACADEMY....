/*#include <stdio.h>
#include <conio.h>

int main()
{
    int m,n,c,max=1;
    scanf("%d %d",&n,&m);
    c=n%m;
    while(c!=0)
    {
        n=m;
        m=c;
        c=n%m;

    }
    max=m;
    printf("%d",max);


 return 0;
}*/


//5
/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n>=1)
        {
            printf("%d\n",n);
            n--;
        }


    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    float a[5],sum,avg;
    int i;
    sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("%f %f",sum,avg);
    return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[10],max;
    scanf("%d",&a[0]);
    max=a[0];
    for(i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=max)
            max=a[i];
    }
    printf("%d",max);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],sum,i;
    printf("1부터 10까지의 정수 중에 4의 배수의 총합은? ");
    sum=0;

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%4==0)
            sum=sum+a[i];

    }
    printf("%d",sum);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char a[10];
    printf("소문자 10개를 입력하시오.");
    for(i=0;i<10;i++)
        {
            scanf("%c",&a[i]);
        }
    for(i=9;i>=0;i--)
        printf("%c",a[i]);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{

    int a[10],number,i,j;
    printf(" 10개의 숫자를 입력하시오.");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    while(1)
        {printf("찾을 수를 입력하시오.");
        scanf("%d",&number);

        for(i=0;i<10;i++)
            if(a[i]==number)
                {printf("%d는 당신이 %d번째 입력한 수 입니다\n.",number,i+1);
                j=1;
                }

        if(j!=1)
            printf("%d는 당신이 입력한 수에 없습니다.\n",number);

        }
        return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int N,d,m,a[10]={0},i,j;
    printf("N? ");
    scanf("%d",&N);
    d=N%2;
    m=N/2;
    i=0;
    while(m>=2)
    {
        a[i]=d;
        i++;

        N=m;
        m=N/2;
        d=N%2;

    }
    a[i]=d;
    a[i+1]=m;
    printf("%d\n",i);
    for(j=i+1;j>=0;j--)
        printf("%d",a[j]);

    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],max,min,i,sum;
    float avg;
    max=100;
    min=200;
    sum=0;
    printf("10명의 학생 키를 입력하시오.");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
        if(max<a[i])
            max=a[i];

        if(min>=a[i])
            min=a[i];
        sum=sum+a[i];
    }
    avg=(float)sum/10;
    printf("가장 큰 키는 %d이다.",max);
    printf("가장 작은 키는 %d이다.",min);
    printf("이 반의 평균 키는 %.1f이다.",avg);
    return 0;


}*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char a[8]={'A','B','C','D','E','F','G','H'};
    int i,j;






    return 0;
}






