import math
import dis

def hello():
    print("Hellfdo")


# add attribute in object function 
hello.name = "jp"

# add method in object function
hello.me = lambda : print("JPJP...")

# check attribute of object 
print(hello.name)

# run method of object
hello.me()


class MyC:
    pass


print(type(MyC))


def fibonachi():
    a, b = 0, 1

    while True:
        yield a
        a, b = b, a + b



def FindStairs(question):
    
    tempQuestion = question

    initialRow = 1

    TotalNumberofRows = 0





    while tempQuestion >= 0:

        if (tempQuestion - initialRow) >= 0:
            tempQuestion -= initialRow
            initialRow += 1
            TotalNumberofRows += 1
        else:
            break

    return TotalNumberofRows


def FindSum(s, e):

    n = e - s + 1

    return (n/2) * (2*s + (n -1) * 1)
 
    # return (e**2 - s**2 + e + s)/2


def doPattern(ll):

    llLen = math.ceil(len(ll)/2)

    print(llLen)
    ll.sort()



    ans = []
    
    part1 = ll[:llLen]
    part2 = ll[llLen:]



    for i in range(len(ll)):

        if i % 2 == 0:
            ans.append(part1.pop())
            
        else:
            ans.append(part2.pop())


    print(ans)    

def Mystrey(l):

    if l == []:
        return l
    else:
        return (l[1:]+l[:1])




def fun():
    print("Hello World")



def missingPositiveInt(ll):

    value = 1

    while (value in ll):
        value += 1

    return value


ll = list(map(int, input().split(" ")))

print(f"answer is: {missingPositiveInt(ll=ll)}" )