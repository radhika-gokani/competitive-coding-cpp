#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    vector<int> res = {};

    for (int i : nums1)
    {
      m1[i]++;
    }

    for (int i : nums2)
    {
      if (m1[i])
      {
        m2[i]++;
        m1[i]--;
      }
    }

    for (auto it = m2.begin(); it != m2.end(); it++)
    {

      cout << "it->first" << it->first << endl;
      cout << "it->second" << it->second << endl;

      for (int i = 0; i < it->second; i++)
      {
        res.push_back(it->first);
      }
    }

    return res;
  }
};

int main()
{
  Solution obj;
  vector<int> vect1 = {4, 9, 5};
  vector<int> vect2 = {9, 4, 9, 8, 4};
  vector<int> vect3 = obj.intersect(vect1, vect2);

  for (int i : vect3)
  {
    cout << i << " " << endl;
  }

  return 0;
}