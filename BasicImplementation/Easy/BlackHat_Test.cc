#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main(int argc, char const *argv[]) {

  int T = 0;
  char array[1000]; //Length of the string equal to 1000
  char cipher_array[1000];
  map<char, int> count_value;
  int length=0, i =0; //Length of the array.
   //Insert to the map
  for(i = 0; i < 26 ; i++)
  {
    count_value['a'+i] = 0;
  }
  cin >> T; //No. Of. Test case

  while(T--){
    cin >> array;
    length = strlen(array);
    for(i = 0; i < length; i++)
    {
      if(count_value[array[i]] == 0){
          cipher_array[i] = (((array[i] - 'a') + (13 + count_value[array[i]])) % 26) + 'a';
          count_value[array[i]] = 1;
      }
      else{
        cipher_array[i] = (((array[i] - 'a') + (13 + count_value[array[i]])) % 26) + 'a';
        count_value[array[i]] = count_value[array[i]] + 1;
      }
    }
    cipher_array[i] = '\0';
    cout << cipher_array << endl;
    for(i = 0; i < 26 ; i++)
    {
      count_value['a'+i] = 0;
    }
  }
  return 0;
}
