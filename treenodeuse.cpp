#include<iostream>
#include "treenode.h"
using namespace std;




//----------------input
TreeNode<int>* takeinput()
{
    int rootdata;
    cout<<"enter data:"<<endl;
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);

    int n;
    cout<<"Enter num of children"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}


//input2 : levelwise :using queue
// TreeNode<int>* takeinput2()
// {
//     int rootdata;
//     cout<<"enter data:"<<endl;
//     cin>>rootdata;
//     TreeNode<int>* root = new TreeNode<int>(rootdata);

// }



//---------------prints
void printT(TreeNode<int>* root)
{
    //edge case
    if(root==NULL){
        return;
    }

    cout<<root->data <<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
        cout<<"\n";

    for(int i=0;i<root->children.size();i++)
    {
        printT(root->children[i]);
    }
}


//-------------no of nodes
int numNodes(TreeNode<int>* root)
{
    int ans=1;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=numNodes(root->children[i]);
    }
    return ans;

}


//------------height
int max1=0;
int heightT(TreeNode<int>* root)
{
    if(root == NULL)
    {
        return 0;
    }
    for(int i=0;i<root->children.size();i++)
    {
        max1 = heightT(root->children[i]);
    }
    return max1+1;
}


//----------nodes at a depth 
void depth(TreeNode<int>* root,int k)
{
    if(k==0){
        cout<<"level data"<<root->data<<endl;
    }
    for(int i=0;i<root->children.size();i++)
    {
        depth(root->children[i],k-1);
    }
}



//----------delete
void deleteT(TreeNode<int>* root)
{
    for(int i=0;i<root->children.size();i++)
    {
        deleteT(root->children[i]);
    }
    delete root;
}


int main()
{
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);    
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // TreeNode<int>* node3 = new TreeNode<int>(4);    

    // root->children.push_back(node1);
    // node1->children.push_back(node3);
    // root->children.push_back(node2);
    TreeNode<int>* root ;
    root = takeinput();
    printT(root);
    int m = heightT(root);
    cout<<m<<endl;

    depth(root,2);
    deleteT(root);
}