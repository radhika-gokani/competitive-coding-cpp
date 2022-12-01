#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    cout << "twosum called" << endl;
    unordered_map<int, int> m;
    vector<int> result;

    int count = 0;

    for (int i : nums)
    {

      if (m.find(target - i) != m.end())
      {
        result = {m[target - i], count};
        break;
      }

      m[i] = count;
      count++;
    }
    return result;
  }
};

int main()
{

  vector<int> vect = {3, 3};

  Solution obj;

  vector<int> result = obj.twoSum(vect, 6);

  for (int i : result)
  {
    cout << i << " ";
  }

  return 0;
}