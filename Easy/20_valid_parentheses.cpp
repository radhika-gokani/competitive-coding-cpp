#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> st;

    bool valid = true;

    for (char c : s)
    {
      switch (c)
      {
      case '{':
        st.push(c);
        break;

      case '(':
        st.push(c);
        break;

      case '[':
        st.push(c);
        break;

      case '}':
        if (st.empty() || st.top() != '{')
        {
          valid = false;
          break;
        }
        else
        {
          st.pop();
        }

        break;

      case ')':
        if (st.empty() || st.top() != '(')
        {
          valid = false;
          break;
        }
        else
        {
          st.pop();
        }
        break;

      case ']':
        if (st.empty() || st.top() != '[')
        {
          valid = false;
          break;
        }
        else
        {
          st.pop();
        }
        break;

      default:
        break;
      }
    }

    if (!st.empty())
    {
      valid = false;
    }

    return valid;
  }
};

int main()
{
  Solution obj;
  cout << obj.isValid("(]") << endl;
  return 0;
}