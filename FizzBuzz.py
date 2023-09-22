#Write a program that prints the numbers from 1 to n. 
#But for multiples of 3, print "Fizz" instead of the number, and for the multiples of 5, print "Buzz". 
#For numbers that are multiples of both 3 and 5, print "FizzBuzz".

n = int(input("Enter range: "))

for i in range(1, n+1):
    if(i % 3 == 0 and i % 5 == 0):
        print("FizzBuzz\n")
    elif(i % 3 == 0):
        print("Fizz\n")
    elif(i % 5 == 0):
        print("Buzz\n")
    else:
        print(i, "\n")