#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode l3(1);
        ListNode *l3_addr = new ListNode;
        l3_addr = &l3;
        return l3_addr;
    }
};

int main()
{
    ListNode l1(1);
    ListNode l2(2);

    l2.next = &l1;
    cout << l2.next->val;
    

}