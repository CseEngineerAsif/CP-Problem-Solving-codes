#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:

    Node* findMiddle(Node* start) {
        Node* slow = start;
        Node* fast = start->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* mergeList(Node* left, Node* right) {
        Node dummy(0);
        Node* ptr = &dummy;

        while (left != NULL && right != NULL) {
            if (left->val < right->val) {
                ptr->next = left;
                left = left->next;
            } else {
                ptr->next = right;
                right = right->next;
            }
            ptr = ptr->next;
        }


        if (left != NULL) ptr->next = left;
        if (right != NULL) ptr->next = right;

        return dummy.next;
    }


    Node* sortList(Node* start) {
        if (start == NULL || start->next == NULL)
            return start;

        Node* mid = findMiddle(start);
        Node* right = mid->next;
        mid->next = NULL;

        Node* left = start;

        left = sortList(left);
        right = sortList(right);

        return mergeList(left, right);
    }
};


Node* insert(Node* head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL)
        return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    Node* start = NULL;
    int n, x;


    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> x;
        start = insert(start, x);
    }

    Solution obj;
    start = obj.sortList(start);


    printList(start);

    return 0;
}
