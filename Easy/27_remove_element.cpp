#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int curIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != val)
      {
        nums[curIndex] = nums[i];
        curIndex++;
      }
    }

    return curIndex;
  }
};

int main()
{
  Solution obj;
  vector<int> vect = {0, 1, 2, 2, 3, 0, 4, 2};
  cout << obj.removeElement(vect, 2) << endl;
  for (int i : vect)
  {
    cout << i << " ";
  }
  return 0;
}