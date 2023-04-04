/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,c,d;
    scanf("%d %d",&n,&m);
    c=m%n;
    d=n%c;
    if(c==0)
        printf("%d %d",n,m);

    else
    {
        while(d!=0)
            d=n%c;
        printf("%d %d",c,n*m/c);
    }
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("sizeof(int) =%d\n",sizeof(int));
    printf("sizeof(char) =%d\n",sizeof(char));
    printf("sizeof(float) =%d\n",sizeof(float));
    printf("sizeof(double) =%d\n",sizeof(double));
    printf("sizeof(long) =%d\n",sizeof(long));

    b=sizeof(a);
    printf("sizeof(a) =%d\n",b);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a[1000];
    a[0]=1;
    printf("%d",a[0]);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5];
    a[1] = 1;
    a[3] = 3;
    printf(" a[2]= ? ");
    scanf("%d",&a[2]);
    printf("a[1]-%d a[2]-%d a[3]-%d\n",a[1],a[2],a[3]);
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int n;
    long I[10];

    I[1]=1;
    I[2]=3;
    I[3]=5;
    I[4]=7;
    I[5]=9;

    printf("number(1~5)?");
    scanf("%d",&n);

    printf("I[%d]=%d",n,I[n]);
    return 0;
}
*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b[2],c;
    a=0;
    c=1;
    b[-1]=9;
    b[0]=10;
    b[1]=11;
    b[2]=12;
    printf("%d %d %d %d",a,b[0],b[1],b[2],c);

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    float a[5]={1.1, 1.2, 1.3, 1.4, 1.5};
    int i;
    for(i=0;i<5;i++)
        printf("%g\n",a[i]);

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    float a[5];
    int i;
    a[0]=1.1;
    a[1]=1.2;
    a[2]=1.3;
    a[3]=1.4;
    a[4]=1.5;
    for(i=0;i<5;i++)
        printf("%f\n",a[i]);
    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    float a[5]={1.1, 1.2, 1.3};
    int i;
    for(i=0;i<5;i++)
        printf("%g",a[i]);
}*/

/*#include<stdio.h>
int main()
{
    float a[5]={1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7};
}*/

/*#include<stdio.h>
int main()
{
    char c[]={'h', 'e', 'l', '.', '0'};
    int i;
    for(i=0;i<5;i++)
        printf("%c",c[i]);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char c[]={'h','e','l','l','o'};
    int allsize, onesize, count, i;
    allsize=sizeof(c);
    onesize=sizeof(c[0]);
    count=allsize/onesize;
    printf("%d %d %d\n",allsize,onesize,count);

    for(i=0;i<count;i++)
        printf("%c",c[i]);

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int a[5];
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        printf("%d", a[i]);

    return 0;}

*/

/*#include<stdio.h>
int main()
{
    int i;
    int a[5]={1,4,5,3,2};
    int min=999;
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("min=%d\n", min);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
     int a[5],i,j,imsi;
     printf("5개의 정수를 입력하시오?");
     for(i=0;i<5;i++)
        scanf("%d",&a[i]);
     for(i=0;i<5;i++)
        printf("%3d",a[i]);
     for(i=0;i<4;i++)
     {
         for(j=i+1;j<5;j++){

            if (a[i]>a[j])
            {
                imsi=a[i];
                a[i]=a[j];
                a[j]=imsi;
            }
        }}
     for(i=0;i<5;i++)
        printf("%3d",a[i]);
     return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a[5],i,j,imsi;
    printf("5개의 정수를 입력하시오?");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        printf("%3d",a[i]);
    for(i=4;i>0;i--)
    {
        for(j=0; j<i; j++){
            if(a[j]>a[j+1]){
                imsi=a[j];
                a[j]=a[j+1];
                a[j+1]=imsi;
            }
        }
    }
    for(i=0;i<5;i++)
        printf("%3d", a[i]);
    return 0;
}*/

/*#include<stdio.h>
#define M 9999
int main()
{
    int a[5]={1,2,4,8,M};
    int b[5]={1,2,3,6,M};
    int p[120];
    int i,j,k,s;
    i=j=s=0;
    while(a[i]!=M || b[i]!=M)
    {
        if(a[i]<=b[j])
            p[s++]=a[i++];
        else
            p[s++]=b[j++];

    }
    for(k=0;k<i+j;k++)
    {
        if(p[k]==p[k+1])
            continue;
        printf("%d\n",p[k]);
    }
    return 0;
}*/

/*#include<stdio.h>
#define N 10
void main()
{
    int a[]={2,3,4,9,14,19,28,55,72,99};
    int x,high,mid,low,y=0;
    printf("탐색할 data?");
    scanf("%d",&x);
    low=0, high=N-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
            printf("%d는 %d번째에 있습니다.\n",a[mid],mid);
            y=1;
            break;
        }
    if(a[mid]>x)
        high=mid-1;
    else
        low=mid+1;
    }
    if(y!=1)
        printf("찾을 수 없습니다.\n");
    return 0;

}*/

/*
#include<stdio.h>
int main()
{
    int a,b,c;
    float d[100];
    a=sizeof(d);
    b=sizeof(d[23]);
    c=sizeof(d)/sizeof(d[11]);

    printf("%d %d %d",a,b,c);
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char c[10];
    int j,count=0;
    for(j=0;j<10;j++){
        c[j]=getche();
    }
    for(j=0;j<10;j++){
        if(c[j]>'A' && c[j]<='Z')
            count++;
    }
    printf("%d",count);
    return 0;

}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int input[10];
    int result[5]={0,0,0,0,0};
    int j;
    for(j=0;j<10;j++){
        scanf("%d", &input[j]);
    }
    for(j=0;j<10;j++){
        switch(input[j]/10){
            case 1:result[0]++;break;
            case 2:result[1]++;break;
            case 3:result[2]++;break;
            case 4:result[3]++;break;
            case 5:result[4]++;break;
            }
    }

    for(j=0;j<5;j++){
        printf("%d대 : %d\n",110+(j+1),result[j]);
}return 0;
}*/
