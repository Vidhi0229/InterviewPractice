# Anagram Checker:
# Write a function that checks if two strings are anagrams of each other (i.e., they have the same characters in a different order).

word1 = input("Enter 1st word: ")
word2 = input("Enter 2nd word: ")
count = 0
for i in word1:
    if (word2.find(i) == -1):
        count += 1
        break

if(count > 0):
    print("Words are not anagrams\n")
else:
    print("Words are anagrams\n")