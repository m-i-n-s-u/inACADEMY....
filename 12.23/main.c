/*
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[100],aph;
    int i,n,count[100]={0},j,max=0;
    printf("문자열을 입력하세요 :");
    gets(a);
    n=strlen(a);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=25;j++)
        {
            if(a[i]==j+'a')
                count[j]++;
        }
    }

    for(i=0;i<=25;i++)
        printf("%c=%d\n",i+'a',count[i]);

    for(i=0;i<=25;i++)
    {
        if(count[i]>=max)
            {
                max=count[i];
                aph='a'+i;
            }
    }
        printf("가장 많이 사용된 알파벳은 '%c'이며, '%d'개 입니다.",aph,max);

    return;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[100],c[100];
    int n,i;
    printf("문자열을 입력하세요.:");
    gets(a);
    n=strlen(a);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>=65 && a[i]<=90)
            c[i]=a[i]+32;

        else if(a[i]>=97 && a[i]<=122)
            c[i]=a[i]-32;

    }
    printf("바뀐 문자열은 \"%s\"입니다.",c);
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    double array[2][4];
    array[1][0]=3.5;
    scanf("%lf",&array[0][0]);
    printf("%lf %lf",array[1][0],array[0][0]);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    double array[2][4] ={1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8};

    printf("%lf",array[0][1]);
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int numbers[2][3],x,y;
    for(y=0;y<2;y++)
    {
        for(x=0;x<3;x++)
            scanf("%d",&numbers[y][x]);
    }

    for(y=0;y<2;y++)
    {
        for(x=0;x<3;x++)
            printf("%d",numbers[y][x]);

    }
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int numbers[2][3]={1,2,3,4,5,6},x,y;

    for(x=0;x<3;x++)
    {
        for(y=0;y<2;y++)
            printf("%d",numbers[y][x]);
    }
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char words[3][10]={"hello"};
    int j;

    scanf("%s",words[1]);
    strcpy(words[2],"language");

    for(j=0;j<=3;j++)
        printf("%s\n",words[j]);
    return 0;
}
*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    static char *day[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int a;
    for(a=0;a<7;a++)
        printf("%s\n",day[a]);
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a[3][3],b[9]={0,1,2,3,4,5,6,7,8};
    int i,j,k=0;
    for(i=0;i<3;i++){
        for(j=2;j>=0;j--)
            a[i][j]=b[k++];
    }
    printf("%d %d",a[0][0],a[1][1]);
    return 0;
*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int arr[5][5]={0};
    int i,j,n=1;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            arr[i][j]=n++;
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==0)
                printf(" ");
            else
                printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int arr[5][5]={0},i,j,k=1;
    for(i=0;i<=4;i++){
        for(j=4;j>=4-i;j--){
            arr[i][j]=k++;
        }
    }
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(arr[i][j]==0)
                printf("\t");
            else
                printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a[5][5]={0},x,y,k=1;
    for(y=0;y<=4;y++){
            for(x=4;x>=y;x--){
                a[y][x]=k++;
            }
    }
    for(y=0;y<=4;y++){
        for(x=0;x<=4;x++){
            if(a[y][x]==0)
                printf("\t");
            else
                printf("%d\t",a[y][x]);

        }printf("\n");
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a[5][5]={0},x,y,k=1;

    for(x=0;x<=4;x++){
        for(y=0;y<=x;y++)
            a[x][y]=k++;
        }

    for(x=0;x<=4;x++){
        for(y=0;y<=4;y++){
            if(a[y][x]==0)
                printf("\t");
            else
                printf("\t%d",a[y][x]);

        }printf("\n");

}return 0;
}*/


