class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

 
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = reverseList(slow->next);

        ListNode* p1 = head;
        ListNode* p2 = secondHalf;
        bool result = true;
        while (p2 != nullptr) {
            if (p1->val != p2->val) {
                result = false;
                break;
            }
            p1 = p1->next;
            p2 = p2->next;
        }

        

        return result;
    }

private:
    ListNode* reverseList(ListNode* node) {
        ListNode* prev = nullptr;
        while (node != nullptr) {
            ListNode* next = node->next;
            node->next = prev;
            prev = node;
            node = next;
        }
        return prev;
    }
};