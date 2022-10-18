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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        
        if(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                ans->val=list1->val;
                list1 = list1->next;
            }else{
                ans->val=list2->val;
                list2 = list2->next;
            }
        }else if(list1==NULL && list2==NULL){
            return NULL;
        }
        else if(list1==NULL){
            ans->val=list2->val;
            list2 = list2->next;
        }else if(list2==NULL){
            ans->val=list1->val;
            list1 = list1->next;
        }
            
        
        ListNode* prevNode = ans;
        while(list1!=NULL && list2!=NULL){
            ListNode* newNode = new ListNode();
            if(list1->val<list2->val){
                newNode->val=list1->val;
                prevNode->next=newNode;
                list1 = list1->next;
                prevNode = newNode;
            }else{
                newNode->val=list2->val;
                prevNode->next=newNode;
                list2 = list2->next;
                prevNode = newNode;
            }
            // cout<<newNode->val;
        }
        
        if(list1==NULL){
            while(list2!=NULL){
                ListNode* newNode = new ListNode();
                newNode->val = list2->val;
                prevNode->next = newNode;
                prevNode = newNode;
                list2 = list2->next;
            }
        }
        
        if(list2==NULL){
            while(list1!=NULL){
                ListNode* newNode = new ListNode();
                newNode->val = list1->val;
                prevNode->next = newNode;
                prevNode = newNode;
                list1 = list1->next;
            }
        }
        
        return ans;
    }
};