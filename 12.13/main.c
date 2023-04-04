/*#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("화씨온도? ");
    scanf("%d",&a);
    b=(float)5/9*(a-35);
    printf("섭씨온도=%.1f",b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a, b, c;
    printf("태어난 년도? ");
    scanf("%d", &a);
    printf("현재년도? ");
    scanf("%d", &b);
    c=b-a+1;
    printf("현재나이=%d",c);
    return 0;


}*/

/*#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("몸무게(kg)? ");
    scanf("%d", &a);
    b=a*2.204623;
    printf("몸무게=%.2f", b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a, b, c;
    printf("쌀 몇 알? ");
    scanf("%d", &a);
    b=10*a;
    c=a/10;
    printf("쌀 %d되\n쌀 %d석\n ", b,c);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("키? ");
    scanf("%d", &a);
    b=(float)(a-100)*0.9;
    printf("%.1fkg",b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("%d+%d=%d\n", a,b,c);
    printf("%d-%d=%d\n", a,b,d);
    printf("%d*%d=%d\n", a,b,e);
    printf("%d/%d=%d\n", a,b,f);
    printf("%d\%%%d=%d\n", a,b,g);
    return 0;

}*/

/*#include<stdio.h>
int main()
{
    char a;
    int b;
    printf("input a letter? ");
    scanf("%c", &a);
    b=a-64;
    printf("%d",b);
    return 0;

}*/


/*#include<stdio.h>
int main()
{
    char a, b;
    int c;
    printf("두 문자를 입력하라? ");
    scanf("%c %c", &a,&b);
    c=a-b;
    printf("두 문자의 아스키코드 값의 차는 %d이다.",c);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a;
    printf("input a number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("짝수\n");
    else
        printf("홀수\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    if(0.001)
        printf("true\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=0;
    if(a)
        printf("true\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=1,b=2,c;
    c=a<b;
    printf("%d %d\n",c, a==b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char b=97;
    if(b=='A')
        printf("true\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b=0;
    printf("점수를 입력하시오: ");
    scanf("%d", &a);
    if(a>70)
        b=1;
    if(b==1)
        printf("합격\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
        printf("a is a bigger than zero\n");
    return 0;

}*/

/*#include<stdio.h>
int main()
{
    int a,b;
    printf("input integer :");
    scanf("%d",&a);
    printf("input another integer :");
    scanf("%d",&b);
    if(a!=b)
        printf("it's wrong input. try again\n");
    return 0;

}*/

/*#include<stdio.h>
int main()
{
    int a=0;
    if(a==0)
        printf("a is zero\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=0;
    if(a==0)
        printf("a is a zero");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("a is ");
    if(a>0)
    {
        if(a<100)
            printf("less than 100 and ");
    }
    printf("bigger than 0\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=0;
    if(a==0)
    {
        printf("a is ")
        printf("zero\n");
    }
return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a>0)
        printf("%d is bbiger than 0\n", a);
    else
    {
        printf("%d is 0",a);
        printf("or smaller than 0\n");

    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    printf("점수를 입력하시오:");
    scanf("%d",&a);
    if(a>=70)
        printf("합격\n");
    else
        printf("불합격\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    printf("과목점수를 입력하시오:");
    scanf("%d",&a);
    if(a>=90)
        printf("A\n");
    else if(a>=80)
        printf("B\n");
    else if(a>=70)
        printf("C\n");
    else if(a>=60)
        printf("D\n");
    else
        printf("E\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=1, b=2, c=3, d,e,f;
    d=1 && 0;
    e=a>0 && b>0;
    f=((a>b) && (c>b));
    printf("d=%d, e=%d, f=%d\n",d,e,f);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b;
    printf("Do you believe in UFO? (y/n)");
    a=getche();
    printf("Do you believe in 'Conspiracy theory?(y/n)");
    b=getche();
    if(a=='y' && b=='y')
        printf(" I think you've seen 'X-FILE' so much...");
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("input a capital letter :");
    a=getche();
    if(a>='A' && a<='Z')
        printf("\n OK \n");
    else
        printf("\n oops \n");

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=1, b=2, c=3, d,e,f;
    d=1 || 0;
    e=a<0 || b<0;
    f=((a<b)|| (b<c));
    printf("d=%d, e=%d, f=%d\n",d,e,f);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b;
    printf("Do you feel sleepy in the morning (y/n)?");
    a=getche();
    printf("\n Do you feel tired frequently (y/n)");
    b=getche();
    if(a=='y' || b=='y')
        printf("Be careful for you weakness...");
    else
        printf("How I envy you!");
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b;
    printf("input two integer :");
    scanf("%d %d",&a, &b);
    if((a>0 && b>0) || (a<0 && b<0))
        printf("OK, it's correct");
    else
        printf("wrong input");

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1, b=2, c,d,e;
    c=!3;
    d=!(a<b);
    e=!(a>0 || b>0);
    printf("c=%d, d=%d, e=%d\n", c,d,e);
    return 0;
}*/








/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("문자를 입력하세요? ");
    a=getche();
    if (a=='n')
        printf("\nhello!");
    if (a=='o')
        printf("\nhi!");

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("숫자를 입력하세요? ");
    scanf("%d",&a);
    if(a%3==0)
        printf("ok");

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("숫자를 입력하세요? ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
        printf("%d", a);
    if(b>a && b>c)
        printf("%d", b);
    if(c>a && c>b)
        printf("%d", c);
    return 0;


}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("회원카드 있나요? ");
    a=getche();
    if (a=='y')
        printf("\n16000원");
    if (a=='n')
        printf("\n20000원");

    return 0;
}*/




/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("시간을 입력하세요? ");
    scanf("%d",&a);
    b=a-12;
    if(a<=12)
        printf("오전 %d시",a);
    if(a>=12)
        printf("오후 %d시",b);
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("정수를 입력하세요? ");
    scanf("%d", &a);
    b=-1*a;
    if(a>=0)
        printf("%d",a);
    else
        printf("%d",b);
    return 0;
}
*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("시험점수를 입력하세요? ");
    scanf("%d",&a);
    if(a>=60)
        printf("합격");
    else
        printf("불합격");
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("정수를 입력하세요?");
    scanf("%d",&a);
    if(a%2==0 && a%5==0)
        printf("2와 5의 배수이다.");

    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("정수를 입력하세요? ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=60 && b>=60 && c>=60)
        printf("합격");
    else
        printf("불합격");
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("몇 년생 입니까? ");
    scanf("%d",&a);
    b=2022-a+1;
    c=a+19;
    printf("현재 나이는 %d\n",b);
    printf("고3이 되는 해는 %d",c);
    return 0;

}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("몇 년생 입니까?");
    scanf("%d",&a);
    b=2022-
    printf("현재 나이는 %d",b);
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d;
    printf("평수를 입력하시오 :");
    scanf("%f",&a);
    d=3.3*a;
    printf("당신이 가지고 있는 제곱미터:%f\n",d);
    b=(float)d/3300;
    c=(float)300000*b;
    printf("당신이 내야할 금액 : %f",c);
    return 0;

}*/
