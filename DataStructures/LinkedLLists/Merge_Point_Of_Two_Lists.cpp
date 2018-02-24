/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB) {
    // Complete this function
    // Do not write the main method.
    Node* temp;
    Node* tempA;
    Node* tempB;
    int countA = 0, countB = 0, diff;
    temp = headA;
    while(temp) {
        temp = temp->next;
        countA++;
    }
    temp = headB;
    while(temp) {
        temp = temp->next;
        countB++;
    }
    //printf("%d, %d\n", countA, countB);
    diff = countB > countA ? countB - countA : countA - countB;
    temp = countB > countA ? headB : headA;
    while (diff) {
        temp = temp->next;
        diff--;
    }
    if (countB > countA) {
        tempB = temp;
        tempA = headA;
    } else {
        tempB = headB;
        tempA = temp;
    }

    while (tempA && tempB) {
        if (tempA->data == tempB->data) {
            return tempA->data;
        }
        tempA = tempA->next;
        tempB = tempB->next;
    }
    return 0;
}
