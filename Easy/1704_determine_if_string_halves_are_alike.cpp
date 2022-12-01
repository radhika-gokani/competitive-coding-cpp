#include <iostream>
using namespace std;

class Solution
{
public:
  bool halvesAreAlike(string s)
  {
    int l = s.length();

    int leftVowels = 0;
    int rightVowels = 0;

    for (int i = 0; i < l / 2; i++)
    {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
      {
        leftVowels++;
      }
      if (s[i + (l / 2)] == 'a' || s[i + (l / 2)] == 'e' || s[i + (l / 2)] == 'i' || s[i + (l / 2)] == 'o' || s[i + (l / 2)] == 'u' || s[i + (l / 2)] == 'A' || s[i + (l / 2)] == 'E' || s[i + (l / 2)] == 'I' || s[i + (l / 2)] == 'O' || s[i + (l / 2)] == 'U')
      {
        rightVowels++;
      }
    };
    cout << "leftVowels" << leftVowels << endl;
    cout << "rightVowels" << rightVowels << endl;

    return leftVowels == rightVowels;
  };
};

int main()
{
  Solution obj;
  cout << obj.halvesAreAlike("textbook") << endl;
  return 0;
}