#include<bits/stdc++.h>
using namespace std;
string Reverse(string String);
void palindrome(string String);
void Vowels_and_Consonants(string String);
void anagrams(string word1, string word2);

int main(){
    string String1, String2;
    cout << "Enter String1: ";
    cin >> String1;
    cout << "Enter String2: ";
    cin >> String2;
    anagrams(String1, String2);
}

//Reverse a String: Write a function to reverse a given string.
string Reverse(string String){
    reverse(String.begin(), String.end());
    return String;
}

//Palindrome Check: Create a function to check if a given string is a palindrome (reads the same forwards and backwards).
void palindrome(string String){
    string Word = String;
    Word = Reverse(Word);
    cout << Word<< ":" << String<<"\n";
    if(Word == String){
        cout << "Yes, it is palindrome\n";
    }
    else{
        cout << "No, it is palindrome\n"; 
    }
}

//Count Vowels and Conso(nants: Write a program to count the number of vowels and consonants in a given string.
void Vowels_and_Consonants(string String){
    transform(String.begin(), String.end(), String.begin(), ::tolower);
    string vowel = {'a', 'e', 'i', 'o', 'u'};
    int c_vowel = 0, c_consonant = 0;

    for(int i = 0; i < String.length(); i++){ 
        if((vowel.find(String[i]) <= String.length())){
            c_vowel++;
        }
        else if(String[i] > 97 && String[i] <= 122){
            c_consonant++;
        }
    }

    cout << "Vowels: "<< c_vowel<<"\n"<< "Consonants: "<<c_consonant<<"\n";

}

//Anagram Detection: Write a function that checks if two strings are anagrams of each other (contain the same characters with the same frequency).
void anagrams(string word1, string word2){
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if(word1 == word2){
        cout << "Yes, these string are anagram\n";
    }
    else{
        cout << "No, these string are not anagram\n";
    }
}