#Palindrome Checker:
#Write a function to check if a given string is a palindrome
#(a word, phrase, number, or other sequences of characters that reads the same forward and backward).

def palindrome():
    s = input("Enter a word or phrase or number or other sequences of characters: ")
    n = s[::-1] 
    if(n == s):
        print("Yes, it is a palindrome")
    else:
        print("Not a palindrome")



palindrome()
