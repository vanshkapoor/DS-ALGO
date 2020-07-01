#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *createNode(int data)
{
    struct tree *temp = new tree();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct tree *obj)
{
    if (obj == NULL)
    {
        return;
    }
    inorder(obj->left);
    cout << obj->data << " ";
    inorder(obj->right);
}

void levelorder(struct tree *obj)
{
    queue<struct tree *> q;

    q.push(obj);

    while (!q.empty())
    {
        struct tree *r = q.front();
        cout << r->data << " ";
        q.pop();

        if (r->left != NULL)
        {
            q.push(r->left);
        }
        if (r->right != NULL)
        {
            q.push(r->right);
        }
    }
}

void inorderStack(struct tree *obj)
{
    struct tree *curr = obj;
    stack<struct tree *> st;
    while (curr != NULL || !st.empty())
    {
        while (curr != NULL)
        {
            /* code */
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

void BFS_print(struct tree *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (level == 1)
    {
        cout << root->data << " ";
    }
    BFS_print(root->left, level - 1);
    BFS_print(root->right, level - 1);
}
void BFS(struct tree *obj, int level)
{
    for (int i = 1; i <= level; i++)
    {
        BFS_print(obj, i);
    }
}

int main()
{
    struct tree *p = createNode(1);
    p->right = createNode(2);
    p->left = createNode(3);
    p->left->left = createNode(4);
    p->left->right = createNode(4);

    inorder(p);
    cout << endl;
    levelorder(p);
    cout << endl;
    inorderStack(p);
    cout << endl;
    BFS(p, 3);
    return 0;
}