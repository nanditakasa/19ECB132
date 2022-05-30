#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node 
{
    int k;
    struct node *left;
    struct node *right;
};
struct node* insert( struct node* root, int k ) 
{
    if(root == NULL) 
    {
        struct node* node = (struct node*)malloc(sizeof(struct node));
        node->k = k;
        node->left = NULL;
        node->right = NULL;
        return node;
    } else 
    {
        struct node* cur;
        if(k <= root->k) 
        {
            cur = insert(root->left, k);
            root->left = cur;
        } else 
        {
            cur = insert(root->right, k);
            root->right = cur;
        }
    
        return root;
    }
}
/*
struct node 
{
    int k;
    struct node *left;
    struct node *right;
};
*/
int getHeight(struct node* root)
{
int counter_right = 0;
int counter_left = 0;   
    if (root == NULL)
    {
        return -1;
    }
    
         counter_left = getHeight(root->left);
        counter_left++;
         
         counter_right = getHeight(root->right);
         counter_right++; 
         
        if (counter_left > counter_right)
        {
            return counter_left;
        }
              
         return counter_right;     
}
int main() 
{
    struct node* root = NULL;
    int n;
    int k;
    scanf("%d", &n);
    while(n-- > 0) {
        scanf("%d", &k);
        root = insert(root, k);
    }
    printf("%d",getHeight(root));
    return 0;
}
