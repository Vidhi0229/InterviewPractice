# Reverse a String:
# Write a function to reverse a string without using built-in reverse functions.

s = list(input("Enter string: "))

n = len(s)-1
i = 0

while(i < n):
    s[i], s[n] = s[n], s[i]
    i += 1
    n -= 1

s = ''.join(s)
print(s)