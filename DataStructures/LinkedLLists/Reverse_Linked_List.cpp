/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head) {
  // Complete this method
  if(head->next == NULL)
    return head;
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
  return next;
}
