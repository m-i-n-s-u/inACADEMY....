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
    printf("원래의 문자열: %s",str);
    strrev(str);
    printf("뒤집은 문자열: %s",str);
    return 0;

}*/

/*#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    char a[27];
    printf("숫자를 입력하세요 :");
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
       printf("문자열을 입력하세요 :");
        gets(a);
        printf("숫자를 입력하세요 :");
        scanf("%d",&i);
        for(j=1;j<=i;j++)
            printf("%s\n",a);
        printf("\n다시 실행 하시겠습니까?(y/n)");
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
    printf("문자열 두 개를 입력하세요 :");
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
    printf("문자열 두 개를 입력하세요 : ");
    scanf("%s %s",a,b);
    strcat(a,b);
    n=strlen(a);
    printf("총 문자열의 길이는 %d이다.\n",n);
    printf("찾고자 하는 문자는?");
    fflush(stdin);
    scanf("%c",&c);
    for(i=0,count=0;a[i]!=c;i++)
    {
        count++;
    }

    count++;
    printf("문자열 중에서 %d번째 위치에서 처음으로 '%c'문자가 발견되었다.",count,c);
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
    printf("문자열을 입력하세요 :");
    gets(a);
    n=strlen(a);
    printf("찾고자 하는 문자는?");
    scanf("%c",&c);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==c)
            count++;

    }
    printf("'%c'의 개수는 %d개 입니다.",c,count);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int apb=0,num=0,sym=0,i,n;
    printf("문자열을 입력하세요 :");
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
    printf("숫자는 %d개, 알파벳은 %d개, 기호는 %d개입니다.",num,apb,sym);
    return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],j;
    int i,n,count[26]={0},t;
    printf("문자열을 입력하세요 :");
    gets(a);
    n=strlen(a);
    printf("알파벳의 개수는 다음과 같습니다.\n");
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


