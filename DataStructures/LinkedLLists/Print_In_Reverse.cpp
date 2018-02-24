/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head) {
    // This is a "method-only" submission.
    // You only need to complete this method.
    if(head == NULL)
        return;
    Node *prev = NULL;
    Node *current = head;
    Node *next = head->next;

    current->next = prev;
    while(next->next != NULL) {
        prev = current;
        current = next;
        next = next->next;
        current->next = prev;
    }
    next->next = current;

    while(next) {
        cout << next->data << "\n";
        next = next->next;
    }
}
