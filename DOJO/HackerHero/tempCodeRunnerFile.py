# print("Hellow World")\

# this is a prerequisite for village88 and I chose to answer all of them in python as a practice and force myself to learn the language since I started this whole shit with Javascript and C++

# def q2():
#     for i in range(1,21):
#         print(i)

# def q3():
#     for i in range(3, 21):
#         if i % 2 != 0:
#             print(i)

# def q4():
#     for i in range(4,23):
#         if i % 2 == 0:
#             print(i)

# def q5():
#     for i in range (7, 63):
#         if i % 7 == 0:
#             print(i)

# def q6():
#     for i in range(50,0,-5):
#         print(i)

# def q7(arr):
#     final = arr[0] + len(arr)
#     print(final)

# def q8():
#     sum = 0
#     for i in range(4,23):
#         if i % 2 == 0:
#             print(i)
#             sum += i  
#     return sum

# def q9():
#     sum = 0
#     for i in range(-25000, 30001):
#         if i % 2 != 0:
#             sum += i
#     return sum

# def q10(arr):
#     for i in arr:
#         print (i)
    
# def q11(arr):
#     for index, value in enumerate(arr):
#         if value > 0:
#             print(index)

# def q12(arr):
#     counter = 0;
#     for index, value in enumerate(arr):
#         if value > 0:
#             print(index)

# def q13(arr):
#     for i , val in enumerate(arr):
#         arr[i] = abs(val)
#     return arr

# def q14(arr):
#     for i , val in enumerate(arr):
#         arr[i] = val*val
#     return arr

# def q15(arr):
#     for i, val in enumerate(arr):
#         if val < 0:
#             arr[i] = 0
#     return arr

# def q16(arr):
#     sum = 0
#     for i in arr:
#         sum += i
#     return sum

# def q17(arr):
#     max = arr[0]
#     for i in arr:
#         if i > max:
#             max = i
#     return max

# def q18(arr):
#    return min(arr)

#Given an array with multiple values, write a function that returns a new array with two elements. The first value in the new array should be the minimum value in the original array. The second value in the new array should be the maximum value in the original array.

# For example, findMinMax([1,3,5]) should return [1, 5]. Similarly, findMinMax([-1,-3,10]) should return [-3, 10].

def q19(arr):
    return [min(arr), max(arr)]

def q20(arr):
    count=0;
    for i in arr:
        if i > 0:
            count+=1
    arr[-1] = count
    return arr
def q21(arr):
    sum = 0
    for i in arr:
        if arr[1] < i:
            print(i)
            sum +=i
    return sum

def q22(num1, num2):
    arr = []
    arr = [num2 for i in range(num1)]
    return arr

def q23(arr):
    arr.pop(0)

    for i, in arr:
        arr[i] += 7

    return arr

def q24(arr):
    if len(arr) < 2:
        return False
    arr2 = []
    for i in arr:
        if arr[1] < i:
            arr2.append(i)
    return arr2

def q25(arr):
    first  = arr.pop(0)
    last  = arr.pop(-1)

    arr.insert(0, last)
    arr.append(first)

    return arr

# Basic algo Hacker Hero

def q1(num1, num2):
    return num1 + num2

def q2():
    for i in range(2019, 0 , -8):
        print(i)

def q3(cDegrees):
    f = (9/5)*cDegrees+32
    return f

def q4(arr):
    for i in range(len(arr)):
        if arr[i] > 0:
            arr[i] = 'big'
    return arr
 
def q5(arr):
    for i in range(len(arr)):
        arr[i]  *= 2
    return arr

def q5():
    counter = 0
    for i in range(len(arr)):
        if arr[i] > y:
            counter+=1
    return counter

def q6(num):
    sum = 0 
    for i in range(1, num+1):
        sum+=i
    return sum   

def q7(num):
    sum = 1 
    for i in range(1, num+1):
        sum=i*sum
    return sum   

def q8():
    return 0 
def q9(arr):
    arrNew = [len(arr)]
    count = 0
    for i in range(len(arr)-1, -1, -1):
        arrNew[count] = arr[i]
        count+=1
    print(arr)
    return arrNew
def q10():
     return 0 
def q11():
    return 0 
def q12():
     return 0 
def q13():
     return 0 
def q14():
     return 0 
def q15():
    return 0 
def q16():
     return 0 
def q17():
    return 0 
def q18():
     return 0 
def q19():
     return 0 
def q20():
     return 0 
def q21():
     return 0 
def q22():
     return 0 
def q23():
     return 0 
def q24():
     return 0 
def q25():
     return 0 
def q26():
     return 0 
def q27():
     return 0 
def q28():
     return 0 
def q29():
     return 0 



print(q9([1,2,3,4,5]))








    







       
       









