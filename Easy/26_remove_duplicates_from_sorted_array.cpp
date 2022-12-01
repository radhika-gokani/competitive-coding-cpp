#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int l = nums.size();

    if (l == 1)
    {
      return 1;
    }

    int ind = 0;

    for (int i = 1; i < l; i++)
    {
      if (nums[i] > nums[ind])
      {
        ind++;
        nums[ind] = nums[i];
      }
    }

    return ind;
  }
};

int main()
{
  Solution obj;
  vector<int> vect = {1, 1, 2};
  cout << obj.removeDuplicates(vect) << endl;

  for (int i : vect)
  {
    cout << i << " ";
  }
  return 0;
}