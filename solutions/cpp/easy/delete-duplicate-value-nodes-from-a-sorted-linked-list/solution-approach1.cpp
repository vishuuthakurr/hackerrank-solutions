// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/contests/hackathon-3yr-ct-1/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem?isFullScreen=true
// Problem     Delete duplicate-value nodes from a sorted linked list
// Difficulty  Easy
// Subdomain   N/A
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-26, 10:49 a.m.
// ──────────────────────────────────────────────────


/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {

    SinglyLinkedListNode* curr = llist;

    while(curr != nullptr && curr->next != nullptr)
    {
        if(curr->data == curr->next->data)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }

    return llist;
}

