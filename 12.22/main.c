/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[100]="hello";
    gets(a);
    printf("%s", a);

    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[]="how long is it";
    char str2[100];
    int a,b;
    scanf("%s",str2);
    a=strlen(str1);
    b=strlen(str2);
    printf("%d %d",a,b);
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[16]="after copying", dest[16];

    strcpy(dest,"before copy");
    strcpy(dest,str);

    printf("%s",dest);
    return 0;
}
*/
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[225];
    strncpy(str,"hello",4);
    str[4]='\0';
    printf("%s,str");
    return 0;

}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[32]="first", b[]="third";
    strcat(a,"second");
    strcat(a,b);
    printf("%s",a);
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char a[]="computer", b[]="computergame";
    if(strncmp(a,b,7)==0)
        printf("same\n");
    else
        printf("not same\n");
    return 0;

}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    printf("������ ���ڿ�: %s",str);
    strrev(str);
    printf("������ ���ڿ�: %s",str);
    return 0;

}*/

/*#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    char a[27];
    printf("���ڸ� �Է��ϼ��� :");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        strncpy(a,"abcdefghijklmnopqrstuvwxyz",i);
        printf("%s\n",a);
    }return 0;

}*/

/*
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i,j;
    char a[1000],b;
    do
    {
       printf("���ڿ��� �Է��ϼ��� :");
        gets(a);
        printf("���ڸ� �Է��ϼ��� :");
        scanf("%d",&i);
        for(j=1;j<=i;j++)
            printf("%s\n",a);
        printf("\n�ٽ� ���� �Ͻðڽ��ϱ�?(y/n)");
        b=getche();
        fflush(stdin);
        printf("\n");
    }while(b=='y'||b=='Y');

    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    printf("���ڿ� �� ���� �Է��ϼ��� :");
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s",a);
    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],c;
    int n,i,count;
    printf("���ڿ� �� ���� �Է��ϼ��� : ");
    scanf("%s %s",a,b);
    strcat(a,b);
    n=strlen(a);
    printf("�� ���ڿ��� ���̴� %d�̴�.\n",n);
    printf("ã���� �ϴ� ���ڴ�?");
    fflush(stdin);
    scanf("%c",&c);
    for(i=0,count=0;a[i]!=c;i++)
    {
        count++;
    }

    count++;
    printf("���ڿ� �߿��� %d��° ��ġ���� ó������ '%c'���ڰ� �߰ߵǾ���.",count,c);
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[1000],c;
    int i,n,count=0;
    printf("���ڿ��� �Է��ϼ��� :");
    gets(a);
    n=strlen(a);
    printf("ã���� �ϴ� ���ڴ�?");
    scanf("%c",&c);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==c)
            count++;

    }
    printf("'%c'�� ������ %d�� �Դϴ�.",c,count);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int apb=0,num=0,sym=0,i,n;
    printf("���ڿ��� �Է��ϼ��� :");
    gets(a);
    n=strlen(a);
    for(i=0;i<=n-1;i++)
    {
        if(48<=a[i] && a[i]<=57)
            apb++;

        else if(97<=a[i] && a[i]<=122)
            num++;

        else
            sym++;
    }
    printf("���ڴ� %d��, ���ĺ��� %d��, ��ȣ�� %d���Դϴ�.",num,apb,sym);
    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],j;
    int i,n,count[26]={0},t;
    printf("���ڿ��� �Է��ϼ��� :");
    gets(a);
    n=strlen(a);
    printf("���ĺ��� ������ ������ �����ϴ�.\n");
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<26;j++)
        {
            if(a[i]==j+'a')
            {
                count[j]++;

            }
        }
    }

        for(i=0;i<26;i++)
            printf("%c = %d\n",i+'a',count[i]);


    return 0;
    }*/


