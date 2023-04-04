/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5]={0};
    int i,j,n=1;
    int start=5/2, end=5/2;

    for(i=0;i<5;i++){
        for(j=start;j<=end;j++){
            arr[i][j]=n++;
        }

            if(i<5/2){
                start--; end++;
            }

            else{
                start++; end--;
            }
        }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==0)
                printf("   ");
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
        int i,j,arr[5][5]={0},n=1;
        int start=5/2,end=5/2;
        for(i=0;i<5;i++){
            for(j=start;j<=end;j++){
                arr[i][j]=n++;
            }
            if(i<5/2){
                start--; end++;}

            else{
                start++; end--;}
            }

        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(arr[i][j]==0)
                    printf("   ");

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
    int i,j,arr[5][5]={0},n=1;
    int start=5/2, end=5/2;
    for(i=0;i<5;i++){
        for(j=start;j<=end;j++){
            arr[j][i]=n++;
        }
        if(i<5/2){
            start--; end++;
        }

        else{
            start++; end--;
        }

    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==0)
                printf("   ");
            else
                printf("%3d",arr[i][j]);
            }
        printf("\n");
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i,j,arr[5][5]={0},n=1;
    int start=5/2, end=5/2;
    for(j=4;j>=0;j--){
        for(i=start;i>=end;i--)
            arr[i][j]=n++;

        if(j>5/2){
            start++; end--;
        }

        else{
            start--; end++;
        }
    }




    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==0)
                printf("   ");
            else
                printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i,j,arr[5][5]={0},n=1;
    int start=5/2, end=5/2;
    for(j=4;j>=0;j--){
        for(i=start;i>=end;i--)
            arr[j][i]=n++;

        if(j>5/2){
            start++; end--;
        }

        else{
            start--; end++;
        }
    }




    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==0)
                printf("   ");
            else
                printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5]={0};
    int i,j,n=1;
    int start=5/2, end=5/2;

    for(i=4;i>=0;i--){
        for(j=start;j>=end;j--)
            arr[i][j]=n++;


            if(i>5/2){
                start++; end--;
            }
            else{
                start--; end++;
            }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==0)
                printf("   ");
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
    int i,j;
    char letter[5][10];
    for(i=0;i<=4;i++)
        scanf("%s",letter[i]);

    for(i=0;i<=4;i++){
        for(j=0;j<10;j++){
            if(letter[i][j]=='a'||letter[i][j]=='e'||letter[i][j]=='i'||letter[i][j]=='o'||letter[i][j]=='u')
                printf("%c",letter[i][j]);
        }
        printf("\n");
    }
    return 0;

}*/

/*
#include<stdio.h>
int main()
{
    int A[6][6]={0};
    int i,j,m,n;
    n=1; // 입력되는 숫자
    m=1; // 입력되는 방향
    i=1; j=1; //처음 시작하는 좌표의 위치
    A[1][6]=1; A[6][5]=1; A[5][0]=1; //테두리

    do{
        A[i][j]==n++;
        switch(m){
        case 1:j++;
                if(A[i][j+1]>0){
                    m=2;
                }
                break;
        case 2:i++;
                if(A[i+1][j]>0){
                    m=3;
                }
                break;
        case 3:j--;
                if(A[i][j-1]>0){
                    m=4;
                }
                break;
        case 4:i--;
                if(A[i-1][j]>0){
                    m=1;
                }
                break;

        }break;
    }while(n<=25);
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("%3d",A[i][j]);
        }printf("\n");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int A[5][5]={0};
    int i,j,k,n;
    n=1; // 입력되는 숫자
    k=0;
    i=0; j=0; //처음 시작하는 좌표의 위치
    A[i][j]=1;


    do{

    while(j<=4-k)
        {j++;
        A[i][j]=++n;}

        j=j-1;

     while(i<=4-k)
        {i++;
        A[i][j]=++n;}

        i=i-1;

     while(j>=0+k)
        {j--;
        A[i][j]=++n;}
        j=j+1;
        k++;

     while(i>=0+k)
        {i--;
        A[i][j]=++n;}
        i=i+1;


    }while(n<=25);
    */

    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            printf("%3d",A[i][j]);
        }printf("\n");
    }
    return 0;
}


