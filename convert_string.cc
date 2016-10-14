#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  char str[100];
  int i = 0;
  cin >> str;
  while(str[i])
  {
    if(islower(str[i]))
      str[i] = toupper(str[i]);
    else if(isupper(str[i]))
      str[i] = tolower(str[i]);
    i++;
  }
  cout << str;
  return 0;
}
