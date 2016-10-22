#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int N = 0; //Number of files changed.
  int Q = 0; //Number of Queries
  char filename[50];
  vector<string> vec_filenames;
  map<string,int> query_filenames;
  cin >> N;
  //Input the filename with path.
  while(N--)
  {
    cin >> filename;
    vec_filenames.push_back(filename);
  }
  //Insert the filename which we wanted to query.
  cin >> Q;
  int temp = Q;
  while(temp--)
  {
    cin >> filename;
    query_filenames.insert(pair<string,int>(filename, 0));
  }
  //Comparison
  for(map<string, int>::iterator it = query_filenames.begin();it!= query_filenames.end();it++)
  {
      for(int i=0; i < vec_filenames.size(); i++)
      {
        if(vec_filenames[i].compare(it->first) == 0)
        {
          //Count the number of times modified
          it->second++;
        }
      }
  }
  //Printing
  for(map<string, int>::iterator it = query_filenames.begin();it!= query_filenames.end();it++)
  {
    cout << it->second << endl;
  }

  return 0;
}
