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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Priority queue to hold the values in sorted order
        priority_queue<int, vector<int>, greater<int>> minheap;
        
        // Number of lists
        int n = lists.size();
        
        // Traverse each list and add its elements to the min-heap
        for (int i = 0; i < n; i++) {
            ListNode* temp = lists[i];
            while (temp) {
                minheap.push(temp->val);
                temp = temp->next;
            }
        }

        // If the heap is empty, return nullptr
        if (minheap.empty()) {
            return nullptr;
        }

        // Create the head of the new list
        ListNode* head = new ListNode(minheap.top());
        minheap.pop();
        ListNode* temp = head;

        // Construct the rest of the new list from the heap
        while (!minheap.empty()) {
            ListNode* newnode = new ListNode(minheap.top());
            temp->next = newnode;
            temp = newnode;
            minheap.pop();
        }

        return head;
        
    }
};