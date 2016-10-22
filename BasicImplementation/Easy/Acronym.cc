#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  int K = 0; //Disliked words
  char str[100];
  vector<string> dislike_vec;
  vector<string> sentence_vec;
  int length_sentence = 0;

  //Input the number of disliked words.
  cin >> K;
  for(int i = 0; i < K ; i++){
    cin >> str;
    dislike_vec.push_back(str);
  }
  //Sentence Input
  cin >> length_sentence;
  for(int i = 0; i < length_sentence; i++)
  {
    cin >> str;
    sentence_vec.push_back(str);
  }
  //Acronym Logic
  for(int i = 0; i < length_sentence; i++)
  {
        for(int j = 0; j != dislike_vec.size();j++){
        if(dislike_vec[j].compare(sentence_vec[i]) == 0)
        {
          sentence_vec.erase(sentence_vec.begin() + i);
        }
      }
  }
  for(int i = 0; i < sentence_vec.size();i++){
  //Acronym
  sentence_vec[i].copy(str,1,0);
  //Extract the first letter and convert to uppercase
  char c = toupper(str[0]);
  cout << c;
  if(i != sentence_vec.size() - 1)
  cout << '.';
  }
  cout << endl;
  return 0;
}
