template <typename T>
class BtreeNode
{
    public:
    T data;
    BtreeNode *left,*right;
    BtreeNode(T data)
    {
        this->data = data;
        left=right=NULL;
    }
    ~BtreeNode()
    {
        delete left;
        delete right;
    }
};