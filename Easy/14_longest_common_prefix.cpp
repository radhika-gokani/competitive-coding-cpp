#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    int l = strs.size();

    if (l == 0)
    {
      return "";
    }

    if (strs[0].length() == 0)
    {
      return "";
    }

    string prefix = "";

    bool prefixFound = false;

    char curChar = strs[0][0];
    int curIndex = 0;

    while (!prefixFound)
    {
      for (int i = 0; i < l; i++)
      {
        if (strs[i].length() == curIndex)
        {
          prefixFound = true;
          // cout << "prefixFound1" << endl;
          break;
        }
        else
        {
          if (strs[i][curIndex] != curChar)
          {
            prefixFound = true;
            // cout << "prefixFound2" << endl;
            break;
          }
        }
      }

      if (!prefixFound)
      {
        prefix += curChar;
        if (strs[0].length() == curIndex + 1)
        {
          prefixFound = true;
          // cout << "prefixFound3" << endl;
          break;
        }
        else
        {
          curIndex += 1;
          curChar = strs[0][curIndex];
        }
      }
    }

    return prefix;
  }
};

int main()
{
  vector<string> vect = {"dog", "racecar", "car"};
  Solution obj;

  cout << obj.longestCommonPrefix(vect) << endl;
  return 0;
}