#include <iostream>
using namespace std;

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
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {

    if (list1 == nullptr)
      return list2;
    if (list2 == nullptr)
      return list1;

    ListNode list3;

    ListNode *tempPointer1 = list1;
    ListNode *tempPointer2 = list2;
    ListNode *tempPointer3 = &list3;

    while (tempPointer1 != nullptr && tempPointer2 != nullptr)
    {
      if (tempPointer1->val < tempPointer2->val)
      {

        tempPointer3->next = new ListNode(tempPointer1->val);
        tempPointer1 = tempPointer1->next;
      }
      else
      {

        tempPointer3->next = new ListNode(tempPointer2->val);
        tempPointer2 = tempPointer2->next;
      }

      tempPointer3 = tempPointer3->next;
    }

    if (tempPointer1 != nullptr)
    {
      while (tempPointer1 != nullptr)
      {

        tempPointer3->next = new ListNode(tempPointer1->val);
        tempPointer1 = tempPointer1->next;
        tempPointer3 = tempPointer3->next;
      }
    }
    if (tempPointer2 != nullptr)
    {
      while (tempPointer2 != nullptr)
      {

        tempPointer3->next = new ListNode(tempPointer2->val);
        tempPointer2 = tempPointer2->next;
        tempPointer3 = tempPointer3->next;
      }
    }

    return list3.next;
  }
};

int main()
{
  Solution obj;

  ListNode list1 = ListNode(1);
  list1.next = new ListNode(2);
  list1.next->next = new ListNode(4);

  ListNode list2 = ListNode(1);
  list2.next = new ListNode(3);
  list2.next->next = new ListNode(4);

  ListNode *list3 = obj.mergeTwoLists(&list1, &list2);

  ListNode *tempPointer = list3;
  while (tempPointer != nullptr)
  {
    cout << tempPointer->val << endl;
    tempPointer = tempPointer->next;
  }

  return 0;
}