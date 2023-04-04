/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g,n,i,j,arr[100]={0},max=0,c=0;
    scanf("%d %d",&g,&n);
    for(i=0;i<g;i++)
        scanf("%d",&arr[i]);

    while(c<g){
        for(j=c;j<c+n;j++){
            if(max<arr[j])
                max=arr[j];
        }
        printf("%d ",max);
        max=0;

        c=c+n;
    }
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int i,j,num;
    int count[100]={0};
    scanf("%d",&num); //몇번까지 있는지?
    for(i=1;i<=num;i++){
        scanf("%d",&j);
        count[j]++;
    }
    for(i=1;i<=23;i++)
        printf("%d ",count[i]);
    return 0;
}*/


/*
#include<stdio.h>
int main()
{
    int i,num;
    int a[100]={0};
    scanf("%d",&num); //몇번부를것인지
    for(i=1;i<=num;i++)
        scanf("%d",&a[i]);

    for(i=num;i>=1;i--)
        printf("%d ",a[i]);

    return 0;

}*/
/*
#include<stdio.h>
int main()
{
    int i,num,minernumber=100;
    int a[100];
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=num;i++){
        if(a[i]<minernumber)
            minernumber=a[i];
    }
    printf("%d",minernumber);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int num,i,j,k=1;
    int a[10][10]={0};
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            printf("%d ",k++);
        }printf("\n");

    }return 0;

}*/

/*
#include<stdio.h>
int main()
{
    int x,y,a[10][10]={0};
    int num,k=1;
    scanf("%d",&num);

    for(y=0;y<num;y++)
            {
            if(y==0 || y%2==0){
                for(x=num-1;x>=0;x--)
                    a[x][y]=k++;
            }
            else{
                for(x=0;x<num;x++)
                    a[x][y]=k++;
            }
            }


    for(y=0;y<num;y++){
        for(x=0;x<num;x++){
            printf("%d",a[y][x]);
        }printf("\n");
    }

    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int x,y,a[100][100]={0};
    int num,k=1;
    scanf("%d",&num);

    for(y=0;y<num;y++)
            {
            if(y==0 || y%2==0){
                for(x=0;x<num;x++)
                    a[x][y]=k++;
            }
            else{
                for(x=num-1;x>0;x--)
                    a[x][y]=k++;
            }
            }


    for(y=0;y<num;y++){
        for(x=0;x<num;x++){
            printf("%d ",a[y][x]);
        }printf("\n");
    }

    return 0;
}*/


#include<stdio.h>
int main()
{
    int x,y,i=0,j=0,num1,num2,k=1;
    int a[100][100]={0};
    scanf("%d %d",&num1 ,&num2);

    while(i<num1 && j<num2){
        for(y=i,x=0;y>=0 && x<=j;y--,x++)
            a[y][x]=k++;
            i++;j++;
         }
    i=0;j=1;

    while(i<num1 && j<num2){
    for(y=num1-1,x=j;y>=i || x<num2;y--,x++){
        a[y][x]=k++;
    }i++; j++;
    }

    for(y=0;y<num1;y++){
        for(x=0;x<num2;x++){
            printf("%d ",a[y][x]);
        }printf("\n");
    }return 0;

    }






