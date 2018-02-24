/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position) {
    // Complete this method
    Node* q = head;
    Node* temp;

    if (position == 0) {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    while (position > 1) {
        q = q->next;
        position--;
    }
    temp = q->next;
    q->next = temp->next;
    free(temp);
    return head;
}
