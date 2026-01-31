ListNode* reverseList(ListNode* head) {
         ListNode* prev = nullptr; 
        ListNode* curr = head;      
        ListNode* next = nullptr;   

        while (curr != nullptr) {
            next = curr->next;   
            curr->next = prev;   
            prev = curr;        
            curr = next;         
        }

        return prev;
    }   
class Solution {
public:
    bool isPalindrome(ListNode* head) {
         if(head == NULL || head->next == NULL){
            return true;
         }
         ListNode* slow = head;
         ListNode* fast = head;

         while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        
         }

         ListNode* Newhead = reverseList(slow->next);

         ListNode* first = head;
         ListNode* second = Newhead;
         while(second != NULL){
            if(first->val != second->val){
                reverseList(Newhead);
                return false;
            }

            first = first->next;
            second = second->next;
         }
         reverseList(Newhead);
         return true;
    }
};