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
    printf("1���� 10������ ���� �߿� 4�� ����� ������? ");
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
    printf("�ҹ��� 10���� �Է��Ͻÿ�.");
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
    printf(" 10���� ���ڸ� �Է��Ͻÿ�.");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    while(1)
        {printf("ã�� ���� �Է��Ͻÿ�.");
        scanf("%d",&number);

        for(i=0;i<10;i++)
            if(a[i]==number)
                {printf("%d�� ����� %d��° �Է��� �� �Դϴ�\n.",number,i+1);
                j=1;
                }

        if(j!=1)
            printf("%d�� ����� �Է��� ���� �����ϴ�.\n",number);

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
    printf("10���� �л� Ű�� �Է��Ͻÿ�.");
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
    printf("���� ū Ű�� %d�̴�.",max);
    printf("���� ���� Ű�� %d�̴�.",min);
    printf("�� ���� ��� Ű�� %.1f�̴�.",avg);
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






