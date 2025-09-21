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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL){
            return head;
        }
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int maxEle=0;
        vector<int>ans;
        ans.push_back(arr[arr.size()-1]);
        maxEle=arr[arr.size()-1];
        for(int i=arr.size()-2;i>=0;i--){
            
            if(arr[i]<maxEle){
                continue;
            }
            maxEle=max(maxEle,arr[i]);
            ans.push_back(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        ListNode* dummy = new ListNode(ans[0]);
        ListNode* curr=dummy;
        for(int i=1;i<ans.size();i++){
            ListNode* newNode = new ListNode(ans[i]);
            curr->next=newNode;
            curr=newNode;
        }
        return dummy;
    }
};