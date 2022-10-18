/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node = head;
        int size=0;
        
        
        while(node!=NULL){
            node = node->next;
            size++;
        }
        int ct=0;
        node = head;
        bool flag=false;
        while(ct<size-n-1){
            if(node!=NULL){
                node = node->next;
            }else{
                flag=true;
            }
            
            ct++;
        }
        
        // cout<<size-n;
        if(size-n==0){
            return head->next;
        }
        
        if(!flag){
            if(node->next!=NULL){
                ListNode* nextnode = node->next->next;
        
                node->next=nextnode;
            }
        }
        
        
        return head;
    }
};