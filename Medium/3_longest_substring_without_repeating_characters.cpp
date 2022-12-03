#include <iostream>
#include <vector>
#include <map>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    int max = 0;

    map<char, int> m;

    int startIndex = 0;
    for (int i = 0; i < s.length(); i++)
    {
      char curChar = s[i];

      // cout << "curChar " << curChar << endl;
      // cout << "m[curChar] " << m[curChar] << endl;

      if (m[curChar])
      {
        if (m[curChar] > startIndex)
        {
          startIndex = m[curChar];
        }

        m[curChar] = i + 1;
      }
      else
      {
        m[curChar] = i + 1;
      }

      if (i - startIndex > max)
      {
        max = i - startIndex;
      }
      // cout << "startIndex " << startIndex << endl;
      // cout << "max " << max << endl;
    }

    return max + 1;
  }
};

int main()
{
  Solution obj;
  cout << obj.lengthOfLongestSubstring("advd") << endl;
  return 0;
}