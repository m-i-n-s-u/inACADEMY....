/*#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("두 수를 입력하세요? ");
    scanf("%d %d", &a, &b);
    c=a+b;
    if(c==10)
        printf("sum is 10");
    else
        printf("sum is not 10");
    return 0;


}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("두 수를 입력하세요?");
    scanf("%d %d", &a,&b);
    if((a==10&&b==5) || (a==5&&b==10))
        printf("ok");
    return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("당신은 사람입니까?(사람 0 외계인 1) ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("당신의 성별은?(남자0, 여자1)");
        scanf("%d",&b);
        if(b==0)
            printf("당신은 남자입니다.");
        else if(b==1)
            printf("당신은 여자입니다.");
    }
    else if(a==1)
        printf("당신은 외계인입니다.");
    return 0;



}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("한 문자를 입력하세요? ");
    scanf("%c",&a);
    if(a>='0' && a<='9')
        printf("number");
    else if(a>='A'&&a<='Z')
        printf("capital letter");
    else if(a>='a'  && a<='z')
        printf("small letter");
    else
        printf("symbol");
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b,c;
    printf("알파벳 한 문자를 입력하세요?");
    scanf("%c",&a);
    b=a-32;
    c=a+32;
    if(a>='a' && a<='z')
        printf("%c",b);
    else if(a>='A' && a<='Z')
        printf("%c",c);
    return 0;
    }*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("년도를 입력하세요?");
    scanf("%d",&a);
    if((a%4==0)&&(a%100==0))
        printf("윤년");
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("두 문자를 입력하시오? ");
    scanf("%d",&a);
    if((a>=10)&&(a<=19))
        printf("나는 10대 입니다.");
    if((a>=20)&&(a<=29))
        printf("나는 20대 입니다.");
    if((a>=30)&&(a<=39))
        printf("나는 30대 입니다.");
    else
        printf("기타");
    return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b;
    printf("두 문자를 입력하시오? ");
    scanf("%c %c",&a, &b);
    if(a==b)
        printf("서로 같다");
    else
        printf("서로 다르다");
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("두 수를 입력하시오?");
    scanf("%d %d", &a, &b);
    if((a+b>=100)&&(a*b>=1000))
        printf("너무 큰 수");
    if((a+b>=100)&&(a*b<=1000))
        printf("중간 크기의 수");
    if((a+b<=100)&&(a*b<=1000))
        printf("작은 수");

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a=1;
    printf("%d\n",a--);
    printf("%d\n",a);
    printf("%d\n",--a);

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int j=0;
    while(j<5)
    {
        printf("%d hello",j);
        j++;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int j=1;
    while(j<=10)
    {
        printf("%d ok\n",j);
        j++;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    while(1)
    {
        printf("im4u");
    }

    return 0;
}
*/



/*#include<stdio.h>
int main()
{
    int j=1, sum=0;
    while(j<=100)
    {
        sum+=j;
        j++;
    }
    printf("%d\n",sum);
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1, b=1, c, j=2, n;
    printf("수열의 수를 몇 개 출력할까요?");
    scanf("%d",&n);
    printf("수열 %d %d ",a ,b);
    while(j<n)
    {
        c=a;
        a=b;
        b+=c;
        printf("%d",b);
        j++;
    }
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    do
    {
        printf("hello\n");
    }while(1);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char a;
    printf("문자를 입력하시오. ");
    do
    {
        scanf("%c",&a);
    }while(a!=' ');
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch(a)
    {
        case 1: printf("a is 1\n"); break;
        case 2: printf("a is 2\n"); break;
        case 3: printf("a is 2\n"); break;
        case 4: printf("a is 2\n"); break;
        default: printf("oops!");

    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    a=0;
    while(a<10)
    {
        a++;
    printf("%d ",a);
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a=0,b=0;
    while(a<=100)
    {
        b+=a;
        a+=1;
    }printf("%d",b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n,a=1,sum=0;
    printf("n?");
    scanf("%d",&n);
    while(a<=n)
    {
        if(a%2==0)
        {
            sum+=a;
        }
        a++;

    }
    printf("%d",sum);
    return 0;
}*/

