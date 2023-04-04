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
    printf("입력할 n단?");
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
    printf("**** 친구들 정보 ****\n");
    do
    {
        printf("이름 :");scanf("%s", &irum);
        printf("나이 :");scanf("%d", &age);
        printf("키 :");scanf("%f", &ki);
        printf("이름 : %s 나이: %d 키 : %.1f입니다.\n",irum,age,ki);

        printf("계속 할까요(y/n)?");
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
    printf("1.일요일\n2.월요일\n3.화요일\n4.수요일\n5.목요일\n6.금요일\n7.토요일\n");

    printf("수를 입력하세요? ");
    scanf("%d", &a);
    switch(a)
    {
        case 2:
        case 4:
        case 6:printf("학원 가는 날 "); break;
        default:printf("학원 안 가는 날"); break;


    }return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char c;
    printf("첫 번째 수는? ");
    scanf("%d", &a);
    printf("두 번째 수는? ");
    scanf("%d", &b);
    printf("원하는 연산은? ");
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
        printf("첫 번째 수는? ");
        scanf("%d",&a);
        printf("두 번째 수는? ");
        scanf("%d", &b);

        do
        {

            printf("원하는 연산은? ");
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
        printf("계속 할까요(y/n)?");
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
        printf("첫 번째 수는? ");
        scanf("%d",&a);
        printf("두 번째 수는? ");
        scanf("%d", &b);
        do
        {
            printf("원하는 연산은? ");
            fflush(stdin);
            scanf("%c",&c);

        }while(!(c=='+' || c=='-' || c=='*' || c=='/'));


        switch(c)
        {
            case'+':printf("\n답은 %d 입니다.",a+b); break;
            case'-':printf("\n답은 %d 입니다." ,a-b); break;
            case'*':printf("\n답은 %d 입니다.", a*b);break;
            case'/':printf("\n답은 %d 입니다.",a/b); break;
        }
        printf("\n계속할까요?(y/n):");
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
    printf("몇(n)달 후?");
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
    printf(" 몇(n)달 째");
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
