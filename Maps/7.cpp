// Print top view of Binary tree.

#include <iostream>
#include <map>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void topView(Node* root) {
    if (!root) return;

    map<int, int> topNode;  // HD → Node Data
    queue<pair<Node*, int>> q;

    q.push({root, 0}); // Node and its HD

    while (!q.empty()) {
        auto p = q.front(); q.pop();
        Node* curr = p.first;
        int hd = p.second;

        // Only store the first node at this HD
        if (topNode.find(hd) == topNode.end())
            topNode[hd] = curr->data;

        if (curr->left)  q.push({curr->left, hd - 1});
        if (curr->right) q.push({curr->right, hd + 1});
    }

    for (auto node : topNode) {
        cout << node.second << " ";
    }
}
