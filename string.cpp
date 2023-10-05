#include<bits/stdc++.h>
using namespace std;
string Reverse(string String);
void palindrome(string String);

int main(){
    string String;
    cout << "Enter String: ";
    cin >> String;
    palindrome(String);
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