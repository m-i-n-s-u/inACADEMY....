# -*- coding: utf-8 -*-
"""02.17

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1lOnKJI3_BITt8RU9MtzS37jtXdZuMcOL
"""

num=int(input())
arr=[[0]*num for i in range(num)]
k=1
arr[num//2][num//2]=k
y=num//2
x=num//2
m=1
k+=1
cnt=1
for i in range(num//2-1,num//2+1):
  for j in range(num//2-1,num//2+1):
    if(arr[i][j]==0):
      arr[i][j]=10**t
      cnt+=1
    if(cnt==num*num):
      break

num=int(input())
arr=[['0']*num for i in range(num)]
print(arr)
x,y=input().split()
y=int(y)
x=int(x)
start=num-1
i=0

for y in range(num//2):
  j=0
  k=start
  for m in range(num//2):
    arr[i][j]=k
    j+=1
    k-=1
  j-=1
  k+=1
  for m in range(num//2+1):
    arr[i][j]=k
    j+=1
    k+=1
  start-=1
  i+=1

start=num//2+1
for y in range(num//2):
  j=0
  k=start
  for m in range(num//2):
    arr[i][j]=k
    j+=1
    k-=1
  j-=1
  k+=1
  for m in range(num//2+1):
    arr[i][j]=k
    j+=1
    k+=1
  start+=1
  i+=1



for i in range(num):
  for j in range(num):
    print(arr[i][j],end="")
  print()

n,m=input().split()
n=int(n)
m=int(m)
cnt=0
for a in range(1,n):
  for b in range(1,n):
    if((0<a and a<b and b<n) and (a**2 + b**2 +m)%(a*b)==0):
      cnt+=1
print(cnt)

num=int(input())
a=[]
b=[]
ascore=0
bscore=0
for i in range(num):
  k=int(input())
  a.append(k)
for j in range(num):
  k=int(input())
  b.append(k)
for i in range(num):
  if(a[i]>b[i]):
    ascore+=a[i]
  elif(a[i]<b[i]):
    bscore+=b[i]
print(ascore,bscore,end="")

num=int(input())
arr=[]
imsiarr=[]
rank=[]
for i in range(num):
  k=int(input())
  arr.append(k)

for i in range(num):
  imsiarr.append(arr[i])
imsiarr.sort()

for i in range(num):
  for j in range(num):
    if(arr[i]==imsiarr[j]):
      k=j+1
      rank.append(k)

print(arr)
print(rank)

num=int(input())
arr=[]
mrs=[]
number=[]
cnt=0
g=1
for i in range(num):
  k=int(input())
  arr.append(k)
students=int(input())
for i in range(students):
  m,n=input().split()
  m=int(m)
  n=int(n)
  mrs.append(m)
  number.append(n)
  cnt+=1
  
for i in range(cnt):
  if(mrs[i]==1):
    for j in range(num):
      if((j+1)%number[i]==0):
        if(arr[j]==0):
          arr[j]=1
        else:
          arr[j]=0

  elif(mrs[i]==2):
    for j in range(num):
      if(arr[number[i]-1]==0):
        arr[number[i]-1]=1
      else:
        arr[number[i]-1]=0


        for r in range(1,num//2):
          while(g==1):
            if(g==0):
              break
            if(arr[number[i]-r]==0 and arr[number[i]+r]==0):
              arr[number[i]-r]=1
              arr[number[i]+r]=1
              g=1
        
            elif(arr[number[i]-r]==1 and arr[number[i]+r]==1):
              arr[number[i]-r]=0
              arr[number[i]+r]=0
              g=1

            else:
              g=0
              break
            

        if(g==0):
          break
  print(arr)

11





