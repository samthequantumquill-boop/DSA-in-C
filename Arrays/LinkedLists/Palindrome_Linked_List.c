/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
   if(head == NULL || head->next == NULL){
    return true;
   } 
   struct ListNode *slow = head,*fast = head;
   while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
   }
   struct ListNode *prev = NULL,*cur = slow,*next;
   while(cur != NULL){
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
   }
   struct ListNode *first = head;
   struct ListNode *second = prev;
   while(second != NULL){
    if(first -> val != second->val){
        return false;
    }
    first = first->next;
    second = second -> next;
   }
   return true;
}
