#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {

    for (int i = 0; i < nums.size(); i++)
    {

      if (nums[i] >= target)
      {
        return i;
      }
    }
    return nums.size();
  }

public:
  int binarySearch(vector<int> &nums, int target)
  {

    int l = nums.size();

    if (target < nums[0])
      return 0;
    if (target > nums[l - 1])
      return l;

    int start = 0;
    int end = l;

    while (start < end)
    {
      int mid = (start + end) / 2;

      if (target == nums[mid])
      {
        return mid;
      }
      else if (target > nums[mid])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    };

    if (nums[start] < target)
    {
      return start + 1;
    }

    return start;
  }
};

int main()
{
  Solution obj;
  vector<int> vect = {
      1,
      3,
  };
  cout << obj.binarySearch(vect, 2) << endl;
  return 0;
}