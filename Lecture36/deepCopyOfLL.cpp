
// Question's Link: https://leetcode.com/problems/copy-list-with-random-pointer/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //corner Case
        if(!head)return NULL;
        Node *curr=head;
        //step 1
        while(curr)
        {
           Node* next=curr->next;
           curr->next=new Node(curr->val); 
           curr->next->next=next;
           curr=curr->next->next;
        } 

        //step 2==> random pointer
        curr=head; // curr is for original
                    // curr->next is copied node of curr
        while(curr)
        {
            if(curr->random)
            {
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
        }

        //step 3==>extract original and copied list seperately
        Node* newHead=head->next;
        curr=head;
        Node *p=newHead;
        while(curr)
        {
            curr->next=curr->next->next;
            curr=curr->next;
            if(curr)
            {
                p->next=curr->next;
                p=p->next;
            }

        }
        return newHead;
        
        
    }
};