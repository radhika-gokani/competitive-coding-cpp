#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    int len = s.length();
    int l = 0;
    int lastChar = s[0];
    for (int i = 0; i < len; i++)
    {
      if (s[i] != ' ')
      {
        if (lastChar != ' ')
        {
          l++;
        }
        else
        {
          l = 1;
        }
      }

      lastChar = s[i];
    }
    return l;
  }
};

int main()
{
  Solution obj;
  cout << obj.lengthOfLastWord("luffy is still joyboy") << endl;
  return 0;
}