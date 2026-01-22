class Solution {
public:
    ListNode *deleteHead(ListNode *&head) {
        if(head == NULL || head->next ==  NULL){
            return NULL;
        }
        ListNode* backptr= head;
         head = head->next;
          
         head->prev = nullptr; 

         backptr->next = nullptr;

         delete backptr ;

         return head;
    }
};
