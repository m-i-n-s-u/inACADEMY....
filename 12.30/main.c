/*include <stdio.h>
#include <stdlib.h>

int main()
{
    int question[100]={0},q,answer[100]={0}a,i,j;
    scanf("%d",&q);
    for(i=0;i<q;i++)
        scanf("%d",question[i]); //������ ���ϴ� ����
    scanf("%d",&a);
    for(j=0;j<a;j++){
        scanf("%d",answer[j],j++);

    }

    return 0;
}*/





/*
#include<stdio.h>

int sum(int x,int y)
{
    int result;
    result=x+y;
    return result;
}

int main()
{
    int a;
    a=sum(10,20);
    printf("%d",a);
    return 0;
}*/

/*
#include<stdio.h>
int input()
{
    int num;
    scanf("%d",&num);
    return num;
}

int main()
{
    int a;
    a=input();
    printf("%d",a);
}*/

/*
#include<stdio.h>

int print(int x)
{
    int a=x;
    printf("%d",a);
}

int main()
{
    int x=100;
    print(x);
}*/

/*
#include<stdio.h>
int output()
{
    printf("hello");
}

int main()
{
    output();
}*/

/*
#include<stdio.h>
int Add(int i,int j)
{
    int result=i+j;
    return result;
}
int main()
{
    int d;
    d=Add(3,4);
    printf("%d",d);
    return 0;
}*/

/*
#include<stdio.h>
int Add(int a,int b);
int input();
int result_print(int val);
int intro();

int main()
{
    int a,b;
    int output;
    intro();
    a=input();
    b=input();
    output=Add(a,b);
    result_print(output);
    return 0;
}
int Add(int i,int j)
{
    int result=i+j;
    return result;
}

int input()
{
    int input;
    scanf("%d",&input);
    return input;
}

int result_print(int val)
{
    printf("������ ���� ���: %d\n",val);
    printf("****** END ******\n");
}

int intro()
{
    printf("****** START ******\n");
    printf("�� ���� ���� �Է�:");
}*/

/*
#include<stdio.h>
int val;
int add(int num);
int main()
{
    printf("val:%d\n",val);
    add(3);
    printf("val:%d\n",val);
    val++;
    printf("val:%d\n",val);
    return 0;
}

int add(int n)
{
    val+=n;
}*/

/*
#include<stdio.h>
int main()
{
    int val=0;

    if(1)
    {
        int val=0;
        val+=10;
        printf("if�� �������� val:%d\n",val);
    }
    printf("main�� �������� val:%d\n",val);

    return 0;
}*/

/*
#include<stdio.h>
int sum(int i);
int main()
{
    int n,result=0;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d",&n);
    result=sum(n);
    printf("1���� %d������ ���� %d�Դϴ�.",n,result);
    return 0;

}

int sum(int i)
{
    int j,add=0;
    for(j=1;j<=i;j++)
        add+=j;
    return add;

}*/

/*
#include<stdio.h>
int get_divisor(int number);
int main()
{
    int number;
    printf("������ �Է��Ͻÿ�:");
    scanf("%d",&number);
    get_divisor(number);
}

int get_divisor(int number)
{
    int i;
    printf("�־��� ������ �����");
    for(i=1;i<=number;i++){
        if(number%i==0)

            printf("%d ",i);
    }
    printf("�Դϴ�.");

}*/

/*
#include<stdio.h>
int prime(int i);

int main()
{
    int i;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d",&i);
    prime(i);

}

int prime(int i)
{
    int j,result=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0){
            result=0;
            break;
        }

        else
            result=1;
    }
    if(result==0)
        printf("%d�� �Ҽ��� �ƴմϴ�.",i);
    else if(result=1)
        printf("%d�� �Ҽ��Դϴ�.",i);
}*/

/*
#include<stdio.h>
int dist_2d(int x1,int x2,int y1,int y2);
int main()
{
    int x1,x2,y1,y2;
    printf("������ ��ġ�� �Է��϶�:");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    printf("�� ���� ������ �Ÿ���");
    dist_2d(x1,x2,y1,y2);
}
dist_2d(int x1,int x2,int y1,int y2)
{
    int distx, disty, distance;
    distx=pow(x1-x2,2);
    disty=pow(y1-y2,2);
    distance=sqrt(distx+disty);
    printf(" %d �̴�.",distance);


}*/

/*
#include<stdio.h>
#include<math.h>
plus(int i,int j);
minus(int i,int j);
multipy(int i,int j);
divide(int i,int j);

int main()
{
    int i,j;
    char sym;
    do
    {
        printf("������ �Է��Ͻÿ�:");
        scanf("%d%c%d",&i,&sym,&j);

        if(sym=='+')
            plus(i,j);

        else if(sym=='-')
            minus(i,j);

        else if(sym=='*')
            multiply(i,j);

        else if(sym=='/')
            divide(i,j);

    }while(sym!='!');
    printf("���α׷��� �����մϴ�.");

}

plus(int i,int j)
{
    int result=i+j,plus=0;
    printf("���� ���: %d\n",result);
    plus++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n",plus);

}

minus(int i,int j)
{
    int result=i-j,minus=0;
    printf("���� ���: %d\n",result);
    minus++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n",minus);

}

multiply(int i,int j)
{
    int result=i*j,multiply=0;
    printf("���� ���: %d\n",result);
    multiply++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n",multiply);

}

divide(int i,int j)
{
    int result=i/j,divide=0;
    printf("���� ���: %d\n",result);
    divide++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n",divide);

}*/

/*
#include<stdio.h>
#include<string.h>
int MyToUpper();

int main()
{
    printf("���ڿ��� �Է��Ͻÿ�:");
    MyToUpper();
}

int MyToUpper()
{
    int i,length;
    char a[50];
    gets(a);
    length=strlen(a);
    for(i=0;i<=length;i++){
        if(a[i]>=97 && a[i]<=122)
            printf("%c",a[i]-32);

        else
            printf("%c",a[i]);
    }

}*/

/*
#include<stdio.h>
int plus(int n,int m)
{
    int plus;
    plus=n+m;
    return plus;
}

int mult(int n,int m)
{
    int mult;
    mult=n*m;
    return mult;
}

int main()
{
    int a,b;
    printf("���� 2���� �Է��Ͻÿ� :");
    scanf("%d %d",&a,&b);

    printf("%d�� %d�� ��=%d\n",a,b,plus(a,b));
    printf("%d�� %d�� ��=%d",a,b,mult(a,b));
    return 0;
}*/

/*
#include<stdio.h>
int f(int n);
int main()
{
    int n=5;
    int i;
    for(i=0;i<n;i++){
        printf("%d",f(i));
    }
    return 0;
}

int f(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return f(n-1)+f(n-2);
}*/

/*
#include<stdio.h>
int max(int arr[])
{
    int m=0,i;
    for(i=0;i<10;i++)
    {
        if(m<=arr[i])
            m=arr[i];
    }

    return m;
}

int main()
{
    int st[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&st[i]);
    }
    printf("%d",max(st));
}*/

/*
#include<stdio.h>
#include<math.h>
int j(int n)
{
    return n-10;
}

int k(int n)
{
    return j(n)+5;
}

int f(int n)
{
    return k(n)*2;
}

int main()
{
    printf("%d",k(12));
    return 0;
}*/

/*
#include<stdio.h>
int f1()
{
    int n=3;
    return n;
}
int f2(int n)
{
    int k=10;
    return n+k-2;
}
int main()
{
    int a=5;
    int n=1;
    a-=f1(); //a=2
    printf("%d\n",a+n);//a+1=3
    a+=f2(f1());//13
    printf("%d",a);
    return 0;
}*/
