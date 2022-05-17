#include <stdio.h>
#include <stdlib.h>
struct doubly_node{
  int data;
   struct doubly_node *next, *prev;
};
int main() {
  printf("\n Doubly Linked List with 3 nodes");
  struct doubly_node *head = NULL, *new_node, *temp;
  for (int counter = 0; counter < 3; counter++) {
    new_node = (struct doubly_node *)malloc(sizeof(struct doubly_node));
    new_node->data = counter;
    new_node->next = new_node->prev= NULL;
    if (head == NULL) {
      head = temp = new_node;
	  new_node->prev = head;
	}
    else {
      temp->next = new_node;
	  new_node->prev = temp;
      temp = new_node;
    }
  }
  printf("\n Traversing the elements in the Doubly Linked List");
  temp = head;
  while (temp != NULL) {
    printf("\n%d", temp->data);
    temp = temp->next;
  }
}
