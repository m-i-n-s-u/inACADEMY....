/*#include<stdio.h>
#include<string.h>
void MyToUpper(char *x);

int main()
{
    char x[50];
    printf("문자열을 입력하시오:");
    gets(x);
    MyToUpper(x);
    return 0;
}

void MyToUpper(char *x)
{
    int i,len;
    len=strlen(x);
    for(i=0;i<=len;i++)
    {
        if(x[i]>97 && x[i]<122)
            printf("%c", x[i]-32);

        else
            printf("%c", x[i]);
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
    printf("정수 2개를 입력하시오: ");
    scanf("%d%d",&a,&b);

    printf("%d와 %d의 합=%d\n",a,b,plus(a,b));
    printf("%d와 %d의 곱=%d\n",a,b,mult(a,b));
    return 0;
}*/

/*
#include<stdio.h>
int f(int n);

int main(void){

    int n=5;
    int i;
    for(i=0;i<n;i++){
        printf("%d",f(i));
    }
    return 0;
    }

int f(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else return f(n-1)+f(n-2);
}*/

/*
#include<stdio.h>
int max(int arr[])
{
    int m=0,i;
    for(i=0;i<10;i++)
    {
        if(arr[i]>=m)
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
int j(int n)
{
    return n-10;
}

int k(int n)
{
    return j(n)+5; //7
}

int f(int n)
{
    return k(n)+2;
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
    printf("%d\n",a+n); //3
    a+=f2(f1());//13
    printf("%d",a);
    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
void f(char arr1[],char arr2[])
{
    int i;
    strrev(arr1);
    printf("%s\n",arr1);

    strupr(arr2);
    printf("%s",arr2);

}

int main()
{
    char ar1[5]="U4MI", ar2[10]="function";
    f(ar1,ar2);
    return 0;
}*/

/*
#include<stdio.h>
char arr[]="ABCDEFGHIJKLMN";

int squirrel(int n)
{
    if(n<=0) return 0;

    printf("%c",arr[n]);
    return squirrel(n-2);
}

int main()
{
    squirrel(13);
    return 0;
}*/

/*

#include<stdio.h>
int arr[10];
void f(int a)
{
    if(a==0) return;
    int i;
    for(i=0;i<a;i++)
        printf("*");
        printf("\n");
    f(--a);

    return;
}

int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        arr[i]=i*2+1;

    }
    int n=5;
    f(5);
}*/

/*
#include<stdio.h>
int main()
{
    int n,number[100],q,question[100],i,j,result[100]={0};

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }

    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&question[i]);
    }

    for(i=0;i<q;i++){
        for(j=0;j<n;j++){
            if(question[i]==number[j]){
                result[i]=1;
                break;
        }
    }
    }
    for(i=0;i<q;i++)
        printf("%d ",result[i]);
    return 0;

}*/

/*
#include<stdio.h>
int main()
{
    int a[100],i,j,imsi,k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k-1;i++){
        for(j=i+1;j<k;j++){
            if(a[i]>a[j]){
                imsi=a[i];
                a[i]=a[j];
                a[j]=imsi;
            }
        }
    }
    for(i=0;i<k;i++)
        printf("%3d\n",a[i]);
    return 0;
}*/

/*
#include<stdio.h>
int a[10001];
int n, i, j, temp, key;

int main() {
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &a[i]);

    for(i=1;i<n;i++){
        key=a[i];
        for(j=i-1;j>=0 && a[j]>key;j--){

            a[j+1]=a[j];
        }
        a[j+1]=key;
    }

    for (i=0; i<n; i++)
        printf("%d\n", a[i]);
    return 0;
    }*/

#include<stdio.h>
int main()
{
    int num1,num2;
    int a[100],b[100],i,j,imsi,k;
    scanf("%d %d",&num1,&num2);
    for(i=0;i<num1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<num2;i++)
        scanf("%d",&b[i]);
    for(i=0;i<num2;i++)
        a[num1+i]=b[i];

    for(j=0;j<num1+i;j++)
    {
        for(k=j+1;k<=num1+i;k++){
            if(a[j]>a[k]){
                imsi=a[j];
                a[j]=a[k];
                a[k]=imsi;
            }
        }
    }
    for(j=0;j<num1+i;j++)
        printf("%d ",a[j]);


}
