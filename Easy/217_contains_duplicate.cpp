#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    unordered_map<int, int> m;

    for (int i : nums)
    {
      if (m[i])
      {
        return true;
      }
      else
      {
        m[i]++;
      }
    }

    return false;
  }
};

int main()
{
  Solution obj;
  vector<int> vect = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  cout << obj.containsDuplicate(vect) << endl;
  return 0;
}