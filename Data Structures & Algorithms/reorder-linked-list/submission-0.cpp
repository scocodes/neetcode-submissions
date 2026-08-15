
class Solution 
{
public:
    void reorderList(ListNode* head) 
    {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* current = slow;
        ListNode* previous = nullptr;

    
        while(current != nullptr)
        {
            ListNode* next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }

        ListNode* first = head;
        ListNode* second = previous;

        while(second->next != nullptr)
        {
            ListNode* firstNext = first->next;
            ListNode* secondNext = second->next;

            first->next = second;
            second->next = firstNext;

            first = firstNext;
            second = secondNext;
        }
    }
};
