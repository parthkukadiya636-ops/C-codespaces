int find_length(ListNode* slow, ListNode* fast){
    int count =1;
    fast = fast->next;

    while(slow!= fast){
        count++;
        fast = fast->next;
         
    }
    return count;
}

class Solution {
public:
    int findLengthOfLoop(ListNode *head) {

        ListNode* slow= head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast=  fast->next ->next;
            if(slow == fast){
                return find_length(slow,fast);
            }
        }
        return 0;

    }
};