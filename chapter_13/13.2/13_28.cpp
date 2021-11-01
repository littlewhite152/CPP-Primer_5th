#include<iostream>
#include<string>
using namespace std;
class TreeNode{
    private:
        string value;
        int count;
        TreeNode* left;
        TreeNode* right;
    public:
        TreeNode():value(""), count(1), left(nullptr), right(nullptr){
            cout << "调用了默认构造函数" << endl;
        };
        TreeNode(const string v, TreeNode* l = nullptr, TreeNode* r = nullptr):value(v), left(l), right(r){
            cout << "调用了有参构造函数" << endl;
        }
        void CopyTree(void);
        TreeNode(const TreeNode& node);
        int ReleaseTree(void);

        TreeNode& operator= (const TreeNode& node);
        
        ~TreeNode();
        friend void print(TreeNode& node);
};

void TreeNode::CopyTree(void){
    if(left)
        left -> CopyTree();
    if(right)
        right -> CopyTree();
    count ++;
}

//拷贝构造函数
TreeNode::TreeNode(const TreeNode& node){
    if(left)
        left -> CopyTree();
    if(right)
        right -> CopyTree();
}

//拷贝赋值运算符
TreeNode& TreeNode::operator= (const TreeNode& node){
    cout << "调用了拷贝赋值函数" << endl;
    if(node.left != nullptr){
        auto l = nullptr;
        delete this -> left;
    }
    if(node.right != nullptr){
        auto r = nullptr;
        delete this -> right;
    }
    left = this -> left;
    right = this -> right;
    count = node.count;
    value = node.value;
    return *this;
}

int TreeNode::ReleaseTree(void){
    if(left){
        if(!left -> CopyTree())
            delete left;
    }
    if(right){
        if(!right -> CopyTree())
            delete right;
    }
    count --;
    return count;
}

//析构函数
TreeNode::~TreeNode(){
    cout << "调用了析构函数" << endl;
    if(count)
        ReleaseTree();
}



class BinStrTree{
    private:
        TreeNode *root;
    public:
        BinStrTree():root(nullptr){}
        BinStrTree(const BinStrTree& b):root(b.root){
            root -> CopyTree();
        }
        ~BinStrTree();
};



//析构函数
BinStrTree::~BinStrTree(){
    if(!root -> ReleaseTree())
        delete root;
}

int main(){
    TreeNode root1;
}