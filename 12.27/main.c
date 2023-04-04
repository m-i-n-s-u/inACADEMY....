/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5][5]={0};
    int i,j,n;
    n=1; // 찍히는 숫자
    i=0; j=0; // 위치

    do{
        while(j<5 && A[i][j]==0){
            A[i][j++]=n++;
        }
        j--;i++;

        while(i<5 && A[i][j]==0){
            A[i++][j]=n++;
        }
        i--;j--;

        while(i>=0 && A[i][j]==0){
            A[i][j--]=n++;
        }
        j++;i--;

        while(j>=0 && A[i][j]==0){
            A[i--][j]=n++;
        }
        i++; j++;
    }while(n<=25);


    for(i=0;i<5;i++){
        for(j=0;j<5;j++){

            if(A[i][j]==0)
                printf("   ");
            else
                printf("%3d",A[i][j]);

        }printf("\n");
    }

    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    i=1;
    while(i<=9){
        printf("%d*%d =%d\n",n,i,n*i);
        i++;
    }
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,d,count;
    scanf("%d",&n); // 입력할 숫자 개수
    i=1;
    count=0; //홀수개수
    while(i<=n){
        scanf("%d",&d);
              if(d%2!=0)
                    count++;
        i++;
    }
    printf("%d",count);
}*/

/*
#include<stdio.h>
int main()
{
    int i,j,max=1;
    int c;
    scanf("%d %d",&i,&j);

    c=i%j; // c=나머지

    while(c!=0){
        i=j;
        j=c;
        c=i%j;
    }
    max=j;
    printf("%d",max);

    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    float money,day,percent,output,result;
    int i=1;
    scanf("%f",&money);
    scanf("%f",&day);
    output=money;
    while(i<=day){
        scanf("%f",&percent);
        output=output+output*percent*1/100;
        i++;
    }

    result=output-money;
    printf("%.f\n",result);
    if(result<0)
        printf("bad");
    if(result==0)
        printf("same");
    if(result>0)
        printf("good");
    return 0;

}*/

/*
#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    while(number>0){
        printf("%d\n",number);
        number--;
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    char aph,i;
    scanf("%c",&aph);
    i='a';
    while(i<=aph){
        printf("%c ",i);
        i++;
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int number,sum,i;
    i=1;
    sum=0;
    scanf("%d",&number);
    while(i<=number){
        if(i%2==0)
            sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;

}*/

/*
#include<stdio.h>
int main()
{
    int number,i,sum;
    i=1;
    sum=0;
    scanf("%d",&number);
    while(1){
        sum=sum+i;
        if(sum>=number)
            break;
        i++;
    }

    printf("%d",i);
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int number,i;
    scanf("%X",&number);
    i=1;
    while(i<=15){
        printf("%X*%X=%X\n",number,i,number*i);
        i++;
    }return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i,number;
    scanf("%d",&number);
    i=1;
    while(i<=number){
        if(i%3==0 || i%6==0 || i%9==0)
            printf("X ");
        else
            printf("%d ",i);
        i++;
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
   int numr,numg,numb,amount=0,r=0,g=0,b=0;
   scanf("%d",&numr);
   scanf("%d",&numg);
   scanf("%d",&numb);

   while(r<numr){
    while(g<numg){
        while(b<numb){
            printf("%d %d %d\n",r,g,b);
            b++;
            amount++;
        }
        b=0; g++;
    }
    r++; g=0; b=0;
   }printf("%d",amount);
   return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int number,i,sum;
    i=1;
    sum=0;
    scanf("%d",&number);
    while(1){
        sum=sum+i;
        if(sum>=number)
            break;
        i++;
    }

    printf("%d",sum);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int a,r,n,i=1,number=1;
    scanf("%d %d %d",&a,&r,&n);
    number=a;
    while(i<n){
        number=number*r;
        i++;
    }
    printf("%d",number);
    return 0;

}
