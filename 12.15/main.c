/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("n?");
    int a,n;
    scanf("%d",&n);
    a=1;
    while(a<=n)
    {
        printf("%d ",a);
        a++;
    }
    return 0;
}*/

/*include<stdio.h>

int main()
{
    int a,sum,d;
    a=1;
    sum=0;
    d=0;
    while(a<=5)
    {
        sum+=a;
        d+=sum;
        a++;


    }printf("%d",d/*);
    return 0;

*/

/*#include<stdio.h>
int main()
{
    int a,n;
    printf("How many?");
    scanf("%d",&a);
    n=1;
    while(n<=a)
    {
        printf("@@:");
        n++;

    }return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,n,d;
    printf("How many?");
    scanf("%d",&n);
    a=1;
    d=0;
    while(a<=n)
    {
        if(d%7==0)
            printf("\n@@;");
        else
            printf("@@;");

        a++;
        d++;

    }return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;

    do
    {
        printf("input :");
        scanf("%d",&a);

    }while(!((a<=10)&&(a>=0)));
    return 0;
}*/

/*#include<stdio.h>
int  main()
{
    int a,n;
    printf("�Է��� n��?");
    scanf("%d",&n);
    a=1;
    while(a<=9)
    {
        printf("%d*%d=%d\n",n,a,a*n);
        a++;
    }return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{

    int age;
    float ki;
    char irum[20], ch;
    printf("**** ģ���� ���� ****\n");
    do
    {
        printf("�̸� :");scanf("%s", &irum);
        printf("���� :");scanf("%d", &age);
        printf("Ű :");scanf("%f", &ki);
        printf("�̸� : %s ����: %d Ű : %.1f�Դϴ�.\n",irum,age,ki);

        printf("��� �ұ��(y/n)?");
        ch=getche();
        printf("\n");

    }while(ch=='y' || ch=='Y');
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>

int main()
{

    int a;
    printf("1.�Ͽ���\n2.������\n3.ȭ����\n4.������\n5.�����\n6.�ݿ���\n7.�����\n");

    printf("���� �Է��ϼ���? ");
    scanf("%d", &a);
    switch(a)
    {
        case 2:
        case 4:
        case 6:printf("�п� ���� �� "); break;
        default:printf("�п� �� ���� ��"); break;


    }return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char c;
    printf("ù ��° ����? ");
    scanf("%d", &a);
    printf("�� ��° ����? ");
    scanf("%d", &b);
    printf("���ϴ� ������? ");
    fflush(stdin);
    scanf("%c", &c);
    if(c=='+')
        printf("%d",a+b);
    else if(c=='-')
        printf("%d",a-b);
    else if(c=='*')
        printf("%d",a*b);
    else if(c=='/')
        printf("%d",a/b);

     return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char c,d;
    do
    {
        printf("ù ��° ����? ");
        scanf("%d",&a);
        printf("�� ��° ����? ");
        scanf("%d", &b);

        do
        {

            printf("���ϴ� ������? ");
            fflush(stdin);
            scanf("%c", &c);

        }while(!(c=='+' || c=='-' || c=='*' || c=='/'));

        switch(c)
        {
            case'+':printf("\n%d",a+b); break;
            case'-':printf("\n%d",a-b); break;
            case'*':printf("\n%d", a*b); break;
            case'/':printf("\n%d",a/b); break;

        }
        printf("��� �ұ��(y/n)?");
        scanf("%c",&d);
        d=getche();
    }while(d=='y' || d=='Y');
    return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char c,d;
    do
    {
        printf("ù ��° ����? ");
        scanf("%d",&a);
        printf("�� ��° ����? ");
        scanf("%d", &b);
        do
        {
            printf("���ϴ� ������? ");
            fflush(stdin);
            scanf("%c",&c);

        }while(!(c=='+' || c=='-' || c=='*' || c=='/'));


        switch(c)
        {
            case'+':printf("\n���� %d �Դϴ�.",a+b); break;
            case'-':printf("\n���� %d �Դϴ�." ,a-b); break;
            case'*':printf("\n���� %d �Դϴ�.", a*b);break;
            case'/':printf("\n���� %d �Դϴ�.",a/b); break;
        }
        printf("\n����ұ��?(y/n):");
        fflush(stdin);
        scanf("%c",&d);

    }while(d=='y' || d=='Y');

    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,sum;
    printf("��(n)�� ��?");
    scanf("%d",&n);
    a=1;
    sum=0;
    while(a<=n)
    {
        sum=sum+a*1000;
        a++;
    }
    printf("%d",sum);
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,y,sum;
    printf(" ��(n)�� °");
    scanf("%d",&n);
    a=1;
    y=50;
    sum=0;
    while(a<=n)
    {

        sum=sum+y;
        y=(1.08)*y;
        a++;

    }printf("%d",sum);
    return 0;
}*/
