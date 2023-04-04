#include<stdio.h>
int main()
{
    int x,y,k=0,num1,num2,number;
    int a[100][100];
    scanf("%d %d",&num1 ,&num2);

    for(k=0;k<15;k++){
        for(y=0;y<num1;y++){
            for(x=0;x<num2;x++){
                if(x+y==k)
                    a[x][y]=number++;
            }
        }
    }

    for(y=0;y<num1;y++){
        for(x=0;x<num2;x++){
            printf("%d\t",a[y][x]);
        }printf("\n");
    }return 0;

    }
