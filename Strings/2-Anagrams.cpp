#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Anagrams are words or phrases that can be formed by rearranging the letters of another word or phrase. In other words, 
    //if two words or phrases have the same characters, but in a different order, they are considered anagrams of each other.

    // ex: vanshkumar   kumarvansh  (anagrams or not)
    // how to check / easy just sort them and check if same or not , coz after sorting it will give same string
    string str1 = "vanshkumar";
    string str2 = "kumarvansh";
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2) {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}