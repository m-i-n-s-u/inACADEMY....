/*#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("ȭ���µ�? ");
    scanf("%d",&a);
    b=(float)5/9*(a-35);
    printf("�����µ�=%.1f",b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a, b, c;
    printf("�¾ �⵵? ");
    scanf("%d", &a);
    printf("����⵵? ");
    scanf("%d", &b);
    c=b-a+1;
    printf("���糪��=%d",c);
    return 0;


}*/

/*#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("������(kg)? ");
    scanf("%d", &a);
    b=a*2.204623;
    printf("������=%.2f", b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a, b, c;
    printf("�� �� ��? ");
    scanf("%d", &a);
    b=10*a;
    c=a/10;
    printf("�� %d��\n�� %d��\n ", b,c);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Ű? ");
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
    printf("�� ���ڸ� �Է��϶�? ");
    scanf("%c %c", &a,&b);
    c=a-b;
    printf("�� ������ �ƽ�Ű�ڵ� ���� ���� %d�̴�.",c);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int a;
    printf("input a number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("¦��\n");
    else
        printf("Ȧ��\n");
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
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &a);
    if(a>70)
        b=1;
    if(b==1)
        printf("�հ�\n");
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
    printf("������ �Է��Ͻÿ�:");
    scanf("%d",&a);
    if(a>=70)
        printf("�հ�\n");
    else
        printf("���հ�\n");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    printf("���������� �Է��Ͻÿ�:");
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
    printf("���ڸ� �Է��ϼ���? ");
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
    printf("���ڸ� �Է��ϼ���? ");
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
    printf("���ڸ� �Է��ϼ���? ");
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
    printf("ȸ��ī�� �ֳ���? ");
    a=getche();
    if (a=='y')
        printf("\n16000��");
    if (a=='n')
        printf("\n20000��");

    return 0;
}*/




/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("�ð��� �Է��ϼ���? ");
    scanf("%d",&a);
    b=a-12;
    if(a<=12)
        printf("���� %d��",a);
    if(a>=12)
        printf("���� %d��",b);
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("������ �Է��ϼ���? ");
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
    printf("���������� �Է��ϼ���? ");
    scanf("%d",&a);
    if(a>=60)
        printf("�հ�");
    else
        printf("���հ�");
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("������ �Է��ϼ���?");
    scanf("%d",&a);
    if(a%2==0 && a%5==0)
        printf("2�� 5�� ����̴�.");

    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("������ �Է��ϼ���? ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=60 && b>=60 && c>=60)
        printf("�հ�");
    else
        printf("���հ�");
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("�� ��� �Դϱ�? ");
    scanf("%d",&a);
    b=2022-a+1;
    c=a+19;
    printf("���� ���̴� %d\n",b);
    printf("��3�� �Ǵ� �ش� %d",c);
    return 0;

}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("�� ��� �Դϱ�?");
    scanf("%d",&a);
    b=2022-
    printf("���� ���̴� %d",b);
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d;
    printf("����� �Է��Ͻÿ� :");
    scanf("%f",&a);
    d=3.3*a;
    printf("����� ������ �ִ� ��������:%f\n",d);
    b=(float)d/3300;
    c=(float)300000*b;
    printf("����� ������ �ݾ� : %f",c);
    return 0;

}*/
