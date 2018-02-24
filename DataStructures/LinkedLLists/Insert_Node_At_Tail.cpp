/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data) {
    // Complete this method
    Node * temp = (Node *) malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if (!head) {
        head = temp;
        return head;
    }
    Node * q = head;
    while(q->next != NULL) {
        q = q->next;
    }
    q->next = temp;
    return head;
}
