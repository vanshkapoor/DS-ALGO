#include<iostream>

using namespace std;

class tree
{
  public:
  int data;
  tree *left;
  tree *right;

  tree(int data)
  {
      this->data=data;
      left=right=NULL;
  }  
};

void inorder2(tree *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder2(root->left);
    cout<<root->data<<" - ";    
    inorder2(root->right);

}

void BFS_print(tree *root,int level);

int BFS_height(tree *node)
{
    if(node == NULL)
    {
        return 0;
    }

    int left = BFS_height(node->left);
    int right = BFS_height(node->right);

    if(left>right)
    {
        return left+1;
    }else{
        return right+1;
    }
}

// SHORTCUT FOR HEIGHT
// int bfshght(tree *obj)
// {
//     if(obj == NULL){return 0;}

//     return (1 + max(obj->left,obj->right));
// }



void BFS_print_loop(tree* root,int height)
{
    for(int i=1;i<=height;i++)
    {
        BFS_print(root,i);
    }

}


void BFS_print(tree *root,int level)
{
    if(root == NULL)
    {
        return;
    }
    if(level == 1)
    {
        cout<<root->data<<" ";
    }
    else{
        BFS_print(root->left,level-1);
        BFS_print(root->right,level-1);
    }
}

int item = 6;
void inorder(tree *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" - ";
    if(root->data == item)
    {
        cout<<"found";
    }
    inorder(root->right);

}


bool search(tree *root,int item)
{
    if(root == NULL)
    {
        // cout<<root->data;
        return false;
    }
    if(root->data == item)
    {
        cout<<"found";
    }else{
        if(item < root->data)
        {
            search(root->left,item);
        }else{
            search(root->right, item);
        }
    }
}

tree* new_node(int key)
{
    tree* temp = new tree(key);
    return temp;
}


tree* insert(tree* root,int key)
{
    if(root == NULL)
    {
        root=new_node(key);
        return root;
    }

    if(root->data >  key)
    {
        cout<<"insert - "<<root->data<<"\n";
        insert(root->left,key);
    }else if(root->data <  key){
        insert(root->right,key);
    }

    cout<<"\n";

    // inorder2(root);

    return root;
}


void insert_basic(tree *p,int key)
{
    tree* temp = new tree(key);
    tree *par = p;

    if(p == NULL)
    {
        p = temp;
    }else{
        while(par!=NULL)
        {
            if(par->data > key)
            {
                if(par ->left == NULL)
                {
                    par->left = temp;
                }
                par = par->left;
            }else if(par->data < key)
            {
                if(par ->right == NULL)
                {
                    par->right = temp;
                }
                par = par->right;
            }
        }
    }
}



int main()
{
    tree *root = new tree(6);
    root->left = new tree(4);
    root->right = new tree(8);
    root->left->left = new tree(2);
    root->left->right = new tree(5);


    int height = BFS_height(root);
    cout<<"\n";
    cout<<height;

    BFS_print_loop(root, height);
    cout<<"\n";
    search(root,5);

    cout<<"\n";
    inorder(root);

    cout<<"\n";
    // root = insert(root,3);
    // root = insert(root,9);
    // root = insert(root,10);


    insert_basic(root,10);


    cout<<"check";
    inorder2(root);
    cout<<"\n";


    return 0;
}