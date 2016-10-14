/*
You have been given a String S.
You need to find and print whether this string is a palindrome or not.
If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S.
The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints:
1≤|S|≤100

Note
String S consists of lowercase English Alphabets only.
*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  char * s;
  int flag=0;
  cin >> s;
  int str_len = strlen(s);
  for(int i=0;i<str_len;i++){
    if(s[i] != s[str_len-i-1]){
      flag = 1;
    }
  }
  if(flag==0)
    cout << "YES\n";
  else
    cout << "NO\n";

    return 0;
}
