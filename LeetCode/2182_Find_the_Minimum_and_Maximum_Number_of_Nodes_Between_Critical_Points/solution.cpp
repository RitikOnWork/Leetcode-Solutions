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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1, -1};

        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return ans;

        ListNode* prevNode = head;
        ListNode* currNode = head->next;

        int pos = 1;
        int first = -1;
        int prev = -1;
        int minDist = INT_MAX;
        int maxDist = -1;

        while (currNode->next != nullptr) {
            int nextVal = currNode->next->val;

            bool isCritical =
                (currNode->val > prevNode->val && currNode->val > nextVal) ||
                (currNode->val < prevNode->val && currNode->val < nextVal);

            if (isCritical) {
                if (first == -1) {
                    first = pos;
                } else {
                    minDist = min(minDist, pos - prev);
                    maxDist = max(maxDist, pos - first);
                }

                prev = pos;
            }

            prevNode = currNode;
            currNode = currNode->next;
            pos++;
        }

        if (first == -1 || maxDist == -1)
            return {-1, -1};

        return {minDist, maxDist};
    }
};
