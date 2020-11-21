import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

def encode(Mes,count):
    while count<0:
        cursor=0
        span=1
        encoding_message=''
        while ((cursor+span)<len(Mes)):
            buf=Mes[cursor:cursor+span]
            
            if span%2!=0:
                encoding_message=encoding_message+buf
            else:
                encoding_message=buf+encoding_message
                
            cursor=cursor+span
            span+=1
            
        buf=Mes[cursor:]
        if span%2!=0:
            encoding_message=encoding_message+buf
        else:
            encoding_message=buf+encoding_message
        Mes=encoding_message
        count+=1
    
    return encoding_message

def get_order(Mes):
    cursor=0
    span=1
    order=list()
    while ((cursor+span)<len(Mes)):
        order.append(span)
        cursor=cursor+span
        span+=1
    order.append(len(Mes[cursor:]))
    return list(reversed(order))
    
def decode(Mes,count):
    for i in range(count):
        m=Mes
        dm=''
        while len(m)>1:
            order=get_order(m)
            if len(order)%2==0:
                dm=m[:order[0]]+dm
                m=m[order[0]:]
            else:
                dm=m[-order[0]:]+dm
                m=m[:-order[0]]
        Mes=m+dm
    return Mes


n = int(input())
M = input()

if n<0:
    print(encode(M,n))
else:
    print(decode(M,n))
