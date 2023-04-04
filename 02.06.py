"""
n=input("문자를 입력하세요?")
if n=='n':
    print("Hello!")
"""
"""
n=int(input("숫자를 입력하세요"))

if(n%3==0):
    print("okay")
"""
"""
a,b,c=input("숫자를 입력하세요").split()

a=int(a)
b=int(b)
c=int(c)

if(a>b and a>c):
    print(a)
elif(b>a and b>c):
    print(b)
else:
    print(c)
"""
"""
a=input("회원카드 있나요?")
if(a=='y'):
    print("16000원")
else:
    print("20000원")
"""
"""
n=int(input("시간을 입력하세요"))
if(n>12):
    print("오후", n-12,"시")
else:
    print("오전",n,"시")
"""
"""
n=int(input("정수를 입력하세요"))
if(n<0):
    print(n*-1)
else:
    print(n)
"""
"""
n=int(input("시험점수를 입력하세요"))
if(n>=60):
    print("합격")
else:
    print("불합격")
"""
"""
n=int(input("정수를 입력하세요"))
if(n%10==0):
    print("2와5의 배수이다.")
elif(n%2==0 and n%2!=5):
    print("2의 배수이다.")
elif(n%5==0 and n%2!=0):
    print("5의 배수이다.")
"""
"""
a,b,c=input("정수를 입력하세요").split()
a=int(a)
b=int(b)
c=int(c)

if(a>=60 and b>60 and c>=60):
    print("합격")
else:
    print("불합격")
"""
"""
a,b=input("두 수를 입력하세요").split()
a=int(a)
b=int(b)

sum=a+b
if(sum==10):
    print("sum is 10")
else:
    print("sum is not 10")
"""
"""
a,b=input("두 수를 입력하세요").split()
a=int(a)
b=int(b)
if(a==10 and b==5) or (a==5 and b==10):
    print("ok")
"""
"""
q1=int(input("당신은 사람 입니까?(사람 0,외계인 1)"))

if(q1==0):
    q2=int(input("당신의 성별은?(남자0,여자1)"))
    if(q2==0):
            print("당신은 남자 입니다.")
    else:
            print("당신은 여자 입니다.")
else:
    print("당신은 외계인 입니다.")
"""

"""
n=input("문자를 입력하세요")

if(n>='A' and n<='Z'):
    print("capital letter")
    
elif(n>='a' and n<='z'):
    print("small letter")
    
elif(n>='!' and n<='+'):
    print("symbol")
"""
"""
n=int(input("년도를 입력하세요"))
if(n%4==0 and n%100==0):
    print("윤년")
"""
"""
n=int(input("나이를 입력하시오"))
if(n>=10 and n<20):
    print("나는 10대 입니다")
elif(n>=20 and n<30):
    print("나는 20대 입니다")
else:
    print("나는 30대 입니다")
"""
"""
a,b=input().split()
if(a==b):
    print("서로 같다")
else:
    print("서로 다르다")
"""
"""
a,b=input("두 수를 입력하시오").split()
a=int(a)
b=int(b)
if(a+b>=10 and a*b>=1000):
    print("너무 큰 수")
elif(a+b>=100 and a*b<1000):
    print("중간 크기의 수")
else:
    print("작은 수")
"""
"""
a="life is too short, you need python"
print(a[0])
print(a[-1])

print(a[0:4])
print(a[:17])
"""
"""
print("i eat %d apples." %3)

a=[1,2,3,4,5]
b=a[:2]
c=a[2:]
print(a,b,c)
"""
"""
a=[1,2,3]
b=[4,5,6]
print(a+b)
"""
"""
a=[1,2,3]
print(a*3)
"""
"""
t1=()
t2=(1.)
t3=(1,2,3)
t4=1,2,3
t5=('a','b',('ab','cd'))
print(len(t3))
"""
"""
dic={'name':"pey","phone":"0119993323","birth":"1118"}
del dic['name']
print(dic)
"""
"""
s1=set([1,2,3,4,5,6])
s2=set([4,5,6,7,8,9])
print(s1&s2)
print(s1|s2)
print(s1-s2)
"""
"""
s1=set([1,2,3])
s1.add(4)
print(s1)

s1.update([4,5,6])
print(s1)

s1.remove(2)
print(s1)
"""
"""
a=0
while a<10:
    a=a+1
    if a%2==0:
        continue
    print(a)
"""
"""
coffee=10
while True:
    money=int(input("돈을 넣어 주세요:"))
    if money==300:
        print("커피를 줍니다")
        coffee=coffee-1
    elif money>300:
        print("거스름돈 %d를 주고 커피를 줍니다." %(money-300))
    else:
        print("돈을 다시 돌려주고 커피를 주지 않습니다")
        print("남은 커피의 양은 %d입니다."%coffee)

    if not coffee:
        print("커피가 다 떨어졌습니다. 판매를 중지합니다")
        break
"""
"""
sum=0
for k in range(1,101):
    sum+=k
print(sum)
"""

"""
for j in range(2,10):
    for i in range(1,10):
        print(j,"x",i,"=",j*i," ",sep="",end="")
    print(' ')
"""
"""
def sum(a,b):
    return a+b

a=int(input())
b=int(input())
c=sum(a,b)
print(c)
"""
"""
def sum_mul(choice,*args):
    if choice=="sum":
        result=0
        for j in args:
            result+=j
            
    elif choice=="mul":
        result=1
        for j in args:
            result*=j

    return result

a=sum_mul('mul',1,2,3,4,5)
print(a)
"""
"""
a=[ [0]*4 for i in range(5)]
n=1
for p in range(5):
    for q in range(4):
        a[p][q]=n
        n+=1
        print("%3d" %a[p][q],end="")
    print()
"""
"""
a=[[0]*2 for i in range(3)]

for p in range(3):
    for q in range(2):
        b=int(input())
        a[p][q]=b
        
for p in range(3):
    for q in range(2):
        print("%3d" %a[p][q],end="")
    print()
"""
"""
a=[]
n=1
for p in range(5):
    a.append(n)
    n+=1
    print("%3d" %a[p],end="")
"""

"""
a=[]
for j in range(5):
    n=int(input())
    a.append(n)
a.sort()
for j in range(5):
    print("%3d" %a[j],end="")
"""
    








