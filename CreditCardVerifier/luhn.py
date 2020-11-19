import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

def check_number(card):
    card=card.replace(' ','')
    sum1=0
    sum2=0
    for i in range(16):
        if i%2==0:
            num1=int(card[i])*2
            if num1>=10:
                sum1+=num1-9
            else:
                sum1+=num1
        else:
            sum2+=int(card[i])
            

    if ((sum1+sum2)%10==0):
        return True
    else:
        return False    

n = int(input())
for i in range(n):
    card = input()
    if check_number(card):
        print("YES")
    else:
        print("NO")

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr)

# print("YES or NO")