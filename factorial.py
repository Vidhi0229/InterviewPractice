# Factorial Calculation:
# Write a function to calculate the factorial of a given non-negative integer.

n = int(input("Enter number: "))
i = 1
k = 1
while(i != n+1):
    k *= i
    i += 1

print(k)