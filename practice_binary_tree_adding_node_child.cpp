# if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


struct Node
{
  int data;
  Node *right, *left;

};

Node* newNode(int data)
{
  Node *newNode = new Node;
  newNode->data = data;
  newNode->left = NULL;
  newNode->right= NULL;
  cout << newNode->data << endl;
  return newNode;
}

Node* addSibling(Node *n, int data)
{
  if (n==NULL)
  {
    return NULL;
  }
  return newNode(data);


}
Node* addchild(Node *n, int data)
{
  if (n==NULL)
  {
    return NULL;
  }

  if (!n->left && !n->right)
  {
    n->left= newNode(data);
  }

  else if (n->left )
  {
    n->right = addSibling(n, data);
  }
  else
  {
    n->left = addSibling(n, data);

  }
}


/*
int main()
{
  Node *root = newNode(10);
  Node *leftchild = addchild(root, 5);
  Node *rightchild = addchild(root ,7);




  getch();
  return 0;

} */


#endif