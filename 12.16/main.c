/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<3;i++)
        printf("%d: hello\n",i);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0;
    for(i=0;i<5;i++)
        sum+=i;

    printf("sum is %d \n", sum);
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{

    int i;
    for(i=0;i<5;i++)
        printf("%d :hello\n",i);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>

int main()
{
    int j,k;
    for(j=0,k=0;j<3;j++, k+=2)
        printf("j=%d, k=%d\n",j,k);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int j,k;
    for(j=0; ;j++)
        printf("j=%d\n",j);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char c;

    do
    {
        c=getche();
        if(c==' ')
            break;

    }while(1);
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char c;

    for(;;)
    {
        c=getche();
        if(c==' ')
            break;
    }
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int j, sum;
    for(j=1,sum=0;j<=10;j++)
    {if(j%2==0)
            continue;
    sum+=j;}
    printf("%d",sum);
    return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    for(y=1;y<=3;y++)
    {
        for(x=1;x<=y;x++)
            printf("*");
            printf("\n");
    }return 0;
}*/

/*#include<conio.h>
#include<stdio.h>
int main()
{
    int i,sum;
    for(i=1,sum=0;i<=100;i++)
        sum=sum+i;
        printf("%d",sum);

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum;
    for(i=1,sum=0;i<=100;i++)
    {
        if(!(i%5==0))
            continue;
        sum+=i;

    }printf("%d",sum);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,k;
    for(i=1,k=0;i<=100;i++)
    {
        if(i%5==0)
            k++;

    }printf("%d",k);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    scanf("%c",&c);
    for( ;c<=90;c++)
        printf("%c ",c);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a,c;
    scanf("%c %c",&a,&c);
    for( ;a<=c;a++)
        printf("%c ",a);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a,c;
    scanf("%c %c", &a, &c);
    if((a>=65 && a<=90) && (c>=65 && c<90))
        {
            for( ;a<=c;a++)
                printf("%c ", a+32);

        }

    if((a>=97 && a<=122) && (c>=97 && c<122))
        {
            for( ;a<=c;a++)
                printf("%c ", a-32);

        }
        return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c;
    printf("하나의 정수를 입력하라? ");
    scanf("%d",&a);
    for(c=1;c<=9;c++)
        printf("%d*%d=%d\n",a,c,a*c);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c,d;
    printf("두 개의 정수를 입력하라");
    scanf("%d %d",&a,&c);
    printf("\n");

    if(a<c)
    {
        for( ;a<=c;a++)
        {
            for(d=1;d<=9;d++)
                printf("%d*%d=%d\n\n",a,d,a*d);
        }
    }


    else if(c<=a)
    {
        for( ;c<=a;c++)
        {
            for(d=1;d<=9;d++)
                printf("%d*%d=%d\n\n",c,d,c*d);
        }

    }
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,sum;
    for(a=1,sum=0;a<=100;a++)
    {
        if(a%2==0)
            {a=a*-1;
            sum+=a;
            a=a*-1;
            }
        else
            sum+=a;

    }printf("%d",sum);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,n;
    for(a=1;a<=10;a++)
    {
        for(n=1;n<=a;n++)
        {
            printf("%d ",n);
        }
    printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,t,gop;
    printf("x? ");
    scanf("%d",&x);
    printf("y? ");
    scanf("%d",&y);
    printf("x의 y제곱= ");

    for(gop=1,t=1;t<=y;t++)
    {
        gop=gop*x;
    }

    printf("%d",gop);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,hap;
    printf("N? ");
    scanf("%d",&N);
    for(hap=0, i=1;i<=N;i++)
        hap=hap+i;

    printf("%d",hap);
    return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum;
    for(sum=0,i=1;i<=100;i++)
    {
        if(i%2==0 || i%5==0)
        {
            sum=sum+i;
        }

    }printf("%d",sum);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,j;
    printf("N? ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");

        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,j,k;
    char c;
    do
    {
        printf("N? ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)

    {
        for(k=N;k>=i;k--)
                printf(" ");

        for(j=1;j<=i;j++)
                printf("*");

        printf("\n");
    }
    printf("다시 실행하겠습니까? (y/n)");
    c=getche();
    printf("\n");
    }while(c=='y' || c=='Y');
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,j,k;
    char c;
    do
    {
        printf("N= ");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
            {
                for(j=0;j<=i-1;j++)
                    printf(" ");

                for(k=N;k>=i;k--)
                    printf("*");

                printf("\n");
            }
    printf("다시 실행하겠습니까?(y/n)");
    c=getche();
    printf("\n");
    }while(c=='y' || c=='Y');
    return 0;
}*/



/*#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,j,k;
    char c;
    do
    {
        printf("N? ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)

    {
        for(k=N;k>=i;k--)
                printf(" ");

        for(j=1;j<=i;j++)
                printf("* ");

        printf("\n");
    }
    printf("다시 실행하겠습니까? (y/n)");
    c=getche();
    printf("\n");
    }while(c=='y' || c=='Y');
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,j,k;
    char c;
    do
    {
        printf("N? ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)

        {
        if(!(i%2==0))

            {
                for(k=N;k>=i;k--)
                printf(" ");

                for(j=1;j<=i;j++)
                printf("*");

            printf("\n");

            }
        }
        printf("다시 실행하겠습니까? (y/n)");
        c=getche();
        printf("\n");
        }while(c=='y' || c=='Y');

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,j,k;
    char c;
    do
    {
        printf("N? ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)

        {
        if(!(i%2==0))

            {
                for(k=0;k<i-1;k++)
                printf(" ");

                for(j=N;j>=i;j--)
                printf("*");

            printf("\n");

            }
        }
        printf("다시 실행하겠습니까? (y/n)");
        c=getche();
        printf("\n");
        }while(c=='y' || c=='Y');

    return 0;
}*/

