from collections import  defaultdict
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

from re import L


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

def q5(arr,y):
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

def q8(num):
    sum = 1 
    for i in range(1, num+1):
        sum=i*sum
    return sum   
def q9(arr):
    # arrNew = [len(arr)]
    # count = 0
    # for i in range(len(arr)-1, -1, -1):
    #     arrNew[count] = arr[i]
    #     print(count)
    #     count += 1
    # print(arr)        dunno why this shit ain't working
    # return arrNew
    res = arr[::-1]
    return res
def q10(num):
    sum = 0
    for i in range(1,num):
        if i % 3 !=0 and i % 5 != 0:
            sum += i
    return sum
def q11(index):
    if index ==  0:
        return 0

    elif index == 1 or index == 2:
        return 1
    else:
        return q11(index-1) + q11(index-2)
def q12(num):
    if (num == 0):
        return 0
    if (num % 9 == 0):
        return 9
    else:
        return (num % 9) 
def q13(seconds):
#Given a number of seconds sing 12:00:00, returns angles(in degreees) of the hour, minute, and second hands.
# As review, 260 degrees form a full rotation. Have the degree round up as a whole number (e.g. 38 instead of 37.632)
# for Inpute 3600 secs (1 hour), return [30,0,0]) meaning the hour hand is at 30 degrees, the minute hand is at 0 degrees, and the second hand is at 0 degrees.
# Similarly, clockHandAngles(10800) shoud return [90,0,0] as  10800 seconds is equivalent to 3:00:00.
    # h = (360/12)*q12(seconds/3600)
    # m = (360/60)*q12(seconds/60)
    # s = (360/60)*q12(seconds)
    # arrNew.append(h.__floor__())
    # arrNew.append(m.__floor__())
    # arrNew.append(s.__floor__())
    # for i in range(3):
    #     arr.append(q12(seconds/60*i))
    # for i in range(3):
    #     arrNew.append(seconds/denominations[i]*scaling[i]%360)
        # arrNew[i] = seconds / denominations[i] * scaling[i]%360
    import math
    arrNew = []
    denominations = [3600,60,1]
    scaling = [30,6,6]

    for i in range(3):
        temp = math.ceil(seconds/denominations[i]*scaling[i]%360)
        arrNew.append(temp)

    
    return arrNew
def q14(num):
    flag = True
    if num > 1:
        for i in range(2,num):
            if (num % i) == 0:
                flag = False
                break
            else:
                flag = True
    return flag 
def q15(num, digitNum):
    if digitNum >= 0:
        for i in range(digitNum):
            separator = separator*10
        remainder = num % separator
        num = (num - remainder) /separator
        
        num = num %10
        return int(num) 
    else:
        separator = 1
        for i in range (0, digitNum, -1):
            separator = separator*10
        num = num * separator
        num = num  - num % 1
        num = num %10
    
    return 0
def q16(arr):
    temp =  []
    for i in range( len(arr)-1, -1, -1):
        temp.append(arr[i])
    return temp
def q17(arr):
    temp = []
    for i in arr:
        if i > min and i < max:
            temp.append(i)  
    return temp

def q18(arr1, arr2):
     return arr1+arr2
def q19(arr):
    
    arrN = []
    if arr[0] < arr[1]:
        arrN.append(arr[1])
    for i in range(1,len(arr)):
            if arr[i] > arrN[len(arrN)-1]:
                arrN.append(arr[i])
    return arrN
def q20(arr):
    index = len(arr) - 1

    if index == 0:
        return None

    secondToLast = arr[-2]
    return secondToLast
    
def q21(arr ,n):
    converted = n * -1
    if len(arr) <=2:
        return None
    return arr[converted]
def q22(arr,start, end):
    for i in range(start, end+1):
        arr.pop(start)    
    return arr

def q23(digitArr):
    lElement = digitArr[len(digitArr)-1]
    digitArr.pop(len(digitArr)-1)
    print(lElement)
    print(digitArr)
    sum = 0

    for i in range(len(digitArr)-1, -1,-2):
        digitArr[i]= digitArr[i]*2
        if digitArr[i] > 9:
            digitArr[i] =  digitArr[i] - 9
    for i in range(len(digitArr)):
        sum = sum + digitArr[i]
        print("sum" , sum , "el ", digitArr[i])
    sum +=lElement

    if (sum % 10) == 0:
        return True
    else:
        return False
def q24(arr1, arr2):
    temp = [] 
    if len(arr1) > len(arr2):
        print("arr1 is bigger")
        for i in range(len(arr1)):
            temp.append(arr1[i])
            if i < len(arr2):
                temp.append(arr2[i])
    if len(arr2) > len(arr1):
        print("arr2 is bigger")
        for i in range(len(arr2)):
            if i < len(arr1):
                temp.append(arr1[i])
            temp.append(arr2[i])
    if len(arr1) == len(arr2):
        print("same size")
        for i in range(len(arr1)):
            temp.append(arr1[i])
            temp.append(arr2[i])
    print(temp)
    return temp
def q25(string):
    counter = 0
    correct = False
    for i in string:
        if i == '(':
            counter +=1
            print(counter)
        if i == ')' and counter != 0:
            correct  = True
            counter -=1
            print(")")
            
        elif i == ')' and counter == 0:
            correct =  False
    if counter != 0:
        correct = False
    return correct 
def q26(arr):
    #bubble sort
    arr_length =  len(arr) - 1
    sorted = False
    while not sorted:
        sorted = True
        for i in range (0, arr_length):
                if arr[i] > arr[i+1]:
                    sorted = False
                    arr[i], arr[i+1] =  arr[i+1], arr[i]
    return arr

def q27(x,y):
    count = 0
    multiplier =1
    while count < y:
        for i in range(1, x+1):
            product = i * multiplier
            print(product)
        multiplier+=1
        count+=1

def q28():
     return 0 
def q29(row,column):
    
    temp =  [["0"]*column for i in range(row)]

    for i in range(column):
        temp[0][i] = '1'
        temp[-1][i] = '1'
        if row> 3:
            temp[i][0] = '1'
            temp[i][-1] ='1'
    return temp

    print("fuck me bro i cant see straight")
    

#breathd first search

# 0 for ones 1 of tens 2 for hundreds 3 for thousands and so on.

print(q13(3600))








    







       
       









