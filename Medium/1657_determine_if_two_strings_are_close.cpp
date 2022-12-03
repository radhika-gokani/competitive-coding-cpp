#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  bool closeStrings(string word1, string word2)
  {
    if (word1.length() != word2.length())
    {
      return false;
    }

    vector<char> alpha1;
    vector<int> count1;

    vector<char> alpha2;
    vector<int> count2;

    map<char, int> map1;
    for (int i = 0; i < word1.length(); i++)
    {
      map1[word1[i]] += 1;
    }

    map<char, int> map2;
    for (int i = 0; i < word2.length(); i++)
    {
      map2[word2[i]] += 1;
    }

    for (auto it = map1.begin(); it != map1.end(); it++)
    {
      alpha1.push_back(it->first);
      count1.push_back(it->second);
    }

    for (auto it = map2.begin(); it != map2.end(); it++)
    {
      alpha2.push_back(it->first);
      count2.push_back(it->second);
    }

    sort(count1.begin(), count1.end());
    sort(count2.begin(), count2.end());

    // for (auto i : alpha1)
    // {
    //   cout << i << " ";
    // }
    // cout << " " << endl;

    // for (auto i : alpha2)
    // {
    //   cout << i << " ";
    // }
    // cout << " " << endl;

    // for (auto i : count1)
    // {
    //   cout << i << " ";
    // }
    // cout << " " << endl;

    // for (auto i : count2)
    // {
    //   cout << i << " ";
    // }
    // cout << " " << endl;

    return alpha1 == alpha2 && count1 == count2;
  }
};

int main()
{
  Solution obj;
  cout << obj.closeStrings("aaabbbbccddeeeeefffff", "aaaaabbcccdddeeeeffff") << endl;
  return 0;
}