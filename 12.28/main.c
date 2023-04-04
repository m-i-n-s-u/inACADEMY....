//7번(앞에거 모르고 삭제함 ㅜㅜ)
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,number;
    scanf("%d",&number);
    for(i=0;i<number;i++){
        for(j=0;j<=i;j++)
            printf("*");
            printf("\n");
    }
    for(i=0;i<number;i++){
        for(j=number-1;j>i;j--)
            printf("*");
            printf("\n");
    }

    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i,j,number;
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        for(j=0;j<i;j++){
                if(i%2!=0)
                    printf("*");

        }
        if(i%2!=0)
            printf("\n");
    }

    return 0;
    }*/

//10
/*
#include<stdio.h>
int main()
{
    int i,j,number;
    scanf("%d",&number);
    for(i=0;i<number;i++){
        for(j=0;j<i;j++)
            printf(" ");
            printf("**\n");
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i,j,jump,number;
    scanf("%d",&number);
    for(i=0;i<number;i++)
        printf("*");
    printf("\n");

    //윗대가리
    for(i=0;i<(number)/2;i++){
        printf("*");

        for(j=0;j<i;j++)
            printf(" ");
            printf("*");

        if(i<(number)/2-1){         //띄어쓰기
            for(jump=0;jump<(number-5)/2-i;jump++)
                printf(" ");
                printf(" ");
            for(jump=0;jump<(number-5)/2-i;jump++)
                printf(" ");

                printf("*");

        }
            for(j=0;j<i;j++)
            printf(" ");
            printf("*");

            printf("\n");

    }


    //아랫대가리
    for(i=0;i<number/2-1;i++){
        printf("*");

        for(j=0;;j++)
            printf(" ");
            printf("*");

        for(jump=0;jump<i;jump++) //띄어쓰기
            printf(" ");
            printf(" ");
        for(jump=0;jump<i;jump++)
            printf(" ");

        printf("*");

        for(j=0;;j++)
            printf(" ");
            printf("*");



        printf("\n");
    }
    for(i=0;i<number;i++)
        printf("*");




    return 0;
}*/

#include<stdio.h>
#include<string.h>
int main()
{
    int number,card[number-1],result[number-1],i,j;

    scanf("%d",&number);

    for(i=0;i<number-1;i++)
        scanf("%d",card[i]);


    for(i=0;i<number-1;i++){
        for(j=1;j<=number;j++){
            if(j==card[i])
                result[i+1]=1;
        }
    }
    for(j=1;j<=number;j++){
        if(result[j]==1)
            printf("%d",j);
    }
    return 0;
}

