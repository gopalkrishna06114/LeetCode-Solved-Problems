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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        if(head==NULL){
            return head;
        }

        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        vector<int>list;
        ListNode* temp=head;
        while(temp!=NULL){
            list.push_back(temp->val);
            temp=temp->next;
        }

        vector<int>ans;
        for(int i=0;i<list.size();i++){
            auto it = mpp.find(list[i]);
            if(it==mpp.end()){
                ans.push_back(list[i]);
            }
        }

        ListNode* dummy=new ListNode(ans[0]);
        ListNode* curr=dummy;

        for(int i=1;i<ans.size();i++){
            ListNode* newNode=new ListNode(ans[i]);
            curr->next=newNode;
            curr=newNode;
        }
        return dummy;
    }
};