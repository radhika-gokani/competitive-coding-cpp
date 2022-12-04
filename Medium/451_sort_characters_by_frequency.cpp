#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  string frequencySort(string s)
  {

    map<int, vector<int>> numMap;
    map<char, int> countMap;
    string res = "";

    for (char i : s)
    {
      countMap[i] += 1;
    }

    for (auto it = countMap.begin(); it != countMap.end(); it++)
    {

      numMap[it->second].push_back(it->first);
    }

    for (auto it = numMap.rbegin(); it != numMap.rend(); it++)
    {

      // cout << "it->first " << it->first << endl;

      for (char i : it->second)
      {
        // cout << "i " << i << endl;
        for (int j = 0; j < it->first; j++)
          res += i;
      }
    }

    // cout << "res " << res << endl;

    return res;
  }
};

int main()
{
  Solution obj;
  cout << obj.frequencySort("tree") << endl;
  return 0;
}