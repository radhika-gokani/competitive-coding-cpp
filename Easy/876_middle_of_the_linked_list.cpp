#include <iostream>
#include <vector>
using namespace std;

// cout << "" <<  << endl;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    ListNode *f_ptr = head;
    ListNode *s_ptr = head;

    while (f_ptr->next != nullptr)
    {
      f_ptr = f_ptr->next->next;
      s_ptr = s_ptr->next;

      if (f_ptr == nullptr)
      {
        break;
      }
    }

    return s_ptr;
  }
};

int main()
{
  Solution obj;

  ListNode n = ListNode(1);
  n.next = new ListNode(2);
  // n.next->next = new ListNode(3);
  //  n.next->next->next = new ListNode(4);
  //  n.next->next->next->next = new ListNode(5);
  //  n.next->next->next->next->next = new ListNode(6);

  cout << obj.middleNode(&n)->val << endl;

  return 0;
}