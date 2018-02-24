/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB) {
    // This is a "method-only" submission.
    // You only need to complete this method
    Node *tempA = headA, *tempB = headB;
    if ((!headA && !headB)) {
        return 1;
    }
    if ((!headA && headB) || (headA && !headB)) {
        return 0;
    }
    while (tempA && tempB) {
        if (tempA->data != tempB->data) {
            return 0;
        }
        tempA = tempA->next;
        tempB = tempB->next;
    }
    if (tempA == NULL && tempB == NULL) {
        return 1;
    } else {
        return 0;
    }
    return 0;
}
