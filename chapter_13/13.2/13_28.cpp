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
            cout << "������Ĭ�Ϲ��캯��" << endl;
        };
        TreeNode(const string v, TreeNode* l = nullptr, TreeNode* r = nullptr):value(v), left(l), right(r){
            cout << "�������вι��캯��" << endl;
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

//�������캯��
TreeNode::TreeNode(const TreeNode& node){
    if(left)
        left -> CopyTree();
    if(right)
        right -> CopyTree();
}

//������ֵ�����
TreeNode& TreeNode::operator= (const TreeNode& node){
    cout << "�����˿�����ֵ����" << endl;
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

//��������
TreeNode::~TreeNode(){
    cout << "��������������" << endl;
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



//��������
BinStrTree::~BinStrTree(){
    if(!root -> ReleaseTree())
        delete root;
}

int main(){
    TreeNode root1;
}