#include <stdio.h>
#include <stdlib.h>
struct singly_node{
  int data;
  struct singly_node *next;
};
int main() {
  printf("\n Singly Linked List with 3 nodes");
  struct singly_node *head = NULL, *new_node, *temp;
  for (int counter = 0; counter < 3; counter++) {
    new_node = (struct singly_node *)malloc(sizeof(struct singly_node));
    new_node->data = counter;
    new_node->next = NULL;
    if (head == NULL)
      head = temp = new_node;
    else {
      temp->next = new_node;
      temp = new_node;
    }
  }
  printf("\n Traversing the elements in the Singly Linked List");
  temp = head;
  while (temp != NULL) {
    printf("\n%d", temp->data);
    temp = temp->next;
  }
} 
