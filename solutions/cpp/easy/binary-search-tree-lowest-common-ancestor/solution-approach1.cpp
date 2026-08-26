// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/contests/hackathon-3yr-ct-1/challenges/binary-search-tree-lowest-common-ancestor/problem?isFullScreen=true
// Problem     Binary Search Tree : Lowest Common Ancestor
// Difficulty  Easy
// Subdomain   N/A
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-26, 10:40 a.m.
// ──────────────────────────────────────────────────



/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if(v1< root-> data && v2< root->data)
        {
            return lca(root->left, v1 , v2);
        }
        
        if(v1 > root-> data && v2 > root->data)
        {
            return lca(root->right, v1 , v2);
        }
        
        return root;
    }

