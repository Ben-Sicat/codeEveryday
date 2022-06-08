# print("Hellow World")\

# this is a prerequisite for village88 and I chose to answer all of them in python as a practice and force myself to learn the language since I started this whole shit with Javascript and C++

def q2():
    for i in range(1,21):
        print(i)

def q3():
    for i in range(3, 21):
        if i % 2 != 0:
            print(i)

def q4():
    for i in range(4,23):
        if i % 2 == 0:
            print(i)

def q5():
    for i in range (7, 63):
        if i % 7 == 0:
            print(i)

def q6():
    for i in range(50,0,-5):
        print(i)

def q7(arr):
    final = arr[0] + len(arr)
    print(final)

def q8():
    sum = 0
    for i in range(4,23):
        if i % 2 == 0:
            print(i)
            sum += i  
    return sum

def q9():
    sum = 0
    for i in range(-25000, 30001):
        if i % 2 != 0:
            sum += i
    return sum

def q10(arr):
    for i in arr:
        print (i)
    
def q11(arr):
    for index, value in enumerate(arr):
        if value > 0:
            print(index)

def q12(arr):
    counter = 0;
    for index, value in enumerate(arr):
        if value > 0:
            print(index)

def q13(arr):
    for i , val in enumerate(arr):
        arr[i] = abs(val)
    return arr

def q14(arr):
    for i , val in enumerate(arr):
        arr[i] = val*val
    return arr


       
       









