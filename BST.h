#ifndef BinaryTree_h
#define BinaryTree_h
class BST{
	public:
		virtual void preorder()=0;
		virtual void add(int data)=0;
		virtual bool search(int data)=0;
		virtual int min(int i=1) =0; // to find the minimum value in the BST.
		virtual void inorder(int i=1)=0;
		virtual void delete_node(int data)=0;		
};
#endif
