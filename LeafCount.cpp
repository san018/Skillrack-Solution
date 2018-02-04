/* QUESTION:
BST - Leaf Node Count

An array of N positive integers is passed as input. The program must form a binary search tree with these numbers. 
The first number (out of the N numbers passed as input) is the root node of the binary search tree. 
The program must print the count of leaf nodes present in the binary search tree.

Note: A node is a leaf node if it does not have a left or right child.

Input Format:
The first line contains N numbers, each separated by a space.

Output Format:
The first line contains the count of leaf nodes.

Boundary Conditions:
1 <= N <= 9999

Example Input/Output 1:
Input:
1 2 5 3 6 4
Output:
2
Explanation:
The leaf nodes are the nodes with the values 4 and 6.
Example Input/Output 2:
Input:
9 11 4 7 2 6 5
Output:
3
*/

#include <iostream>
 
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node* root = NULL;
int m = 0;
Node* createNew(int data)
{
    Node* a = new Node();
    a->left= NULL;
    a->right = NULL;
    a->data = data;
    return a;
}
Node* InsertNode(Node* root,int x)
{
    if(root == NULL)
    {
        root = createNew(x);
    }
    else if(x <= root->data)
    {
        root->left = InsertNode(root->left,x);
        
    }
    else if(x > root->data)
    {
        root->right = InsertNode(root->right,x);
    }
    
    return root;
}

void PrintTree(Node* root)
{
    if(root== NULL )
    {
        
        return;
    }
    PrintTree(root->left);
   // cout << root->data <<" ";
   if(root->left == NULL && root->right == NULL)
   m++;
    PrintTree(root->right);
}

int main(int argc, char** argv)
{
int a[10000],temp,k=0,count = 0;
for(int i=0;i<10000;i++)
{
    a[i] = 0;
}
while(cin >> temp)
{
    a[k] = temp;
    count++;
    k++;
}

for(int i=0;i<count;i++)
{
    root=InsertNode(root,a[i]);
}

PrintTree(root);

cout <<m;
return 0;
}
