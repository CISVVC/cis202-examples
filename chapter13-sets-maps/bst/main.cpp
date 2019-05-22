#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>

using namespace std;

template<class T>
class TreeNode
{
public:
   void insert_node(TreeNode<T>* new_node);
   void print_nodes() const;
   bool find(T value) const;
   TreeNode<T>* get_left() const;
   TreeNode<T>* get_right() const;
   T get_data() const;
   void set_right(TreeNode<T>* node);
   void set_left(TreeNode<T>* node);
   void set_data(T data);

private:
   T data;
   TreeNode<T>* left;
   TreeNode<T>* right;

};




template <class T>
TreeNode<T> * TreeNode<T>::get_left() const
{
   return left;
}


template <class T>
TreeNode<T> * TreeNode<T>::get_right() const
{
   return right;
}

template <class T>
T  TreeNode<T>::get_data() const
{
   return data;
}

template <class T>
void TreeNode<T>::set_right(TreeNode<T>* node)
{
   right = node;
}

template <class T>
void TreeNode<T>::set_left(TreeNode<T>* node)
{
   left = node;
}

template <class T>
void TreeNode<T>::set_data(T data)
{
   this->data = data;
}

template <class T>
void TreeNode<T>::insert_node(TreeNode<T>* new_node)
{  
//   cout << "TreeNode::insert_node begin new_node->data = " << new_node->data<< endl;
   if (new_node->data < data)
   {  

//      cout << "TreeNode::insert_node new_node->data < data" << endl;
      if (left == NULL) left = new_node;
      else left->insert_node(new_node);
   }
   else if (data < new_node->data)
   {  
 //     cout << "TreeNode::insert_node new_node->data < data" << endl;
      if (right == NULL) right = new_node;
      else right->insert_node(new_node);
   }
  // cout << "TreeNode::insert_node end" << endl;

}

template<class T>
class BinarySearchTree
{
public:
   BinarySearchTree();
   void insert(T data);
   void erase(T data);
   int count(T data) const;
   void print() const;
private:
   TreeNode<T>* root;
};

template<class T> 
BinarySearchTree<T>::BinarySearchTree()
{  
   root = NULL;
}

template <class T>
void BinarySearchTree<T>::print() const
{  
   if (root != NULL)
      root->print_nodes();
}

template <class T>
void BinarySearchTree<T>::insert(T data)
{  
   TreeNode<T>* new_node = new TreeNode<T>;
   new_node->set_data(data);
   new_node->set_left(NULL);
   new_node->set_right(NULL);
   if (root == NULL) root = new_node;
   else root->insert_node(new_node);
}

template<class T>
int BinarySearchTree<T>::count(T data) const
{
   if (root == NULL) return 0;
   else if (root->find(data)) return 1;
   else return 0;
}

template<class T>
void BinarySearchTree<T>::erase(T data)
{
   // Find node to be removed

   TreeNode<T>* to_be_removed = root;
   TreeNode<T>* parent = NULL;
   bool found = false;
   while (!found && to_be_removed != NULL)
   {
      if (to_be_removed->get_data() < data)
      {
         parent = to_be_removed;
         to_be_removed = to_be_removed->get_right();
      }
      else if (data < to_be_removed->get_data())
      {
         parent = to_be_removed;
         to_be_removed = to_be_removed->get_left();
      }
      else found = true;
   }

   if (!found) return;

   // to_be_removed contains data

   // If one of the children is empty, use the other

   if (to_be_removed->get_left() == NULL || to_be_removed->get_right() == NULL)
   {
      TreeNode<T>* new_child;
      if (to_be_removed->get_left() == NULL) 
         new_child = to_be_removed->get_right();
      else 
         new_child = to_be_removed->get_left();

      if (parent == NULL) // Found in root
         root = new_child;
      else if (parent->get_left() == to_be_removed)
         parent->set_left(new_child);
      else 
         parent->set_right(new_child);
      return;
   }
      
   // Neither subtree is empty

   // Find smallest element of the right subtree

   TreeNode<T>* smallest_parent = to_be_removed;
   TreeNode<T>* smallest = to_be_removed->get_right();
   while (smallest->get_left() != NULL)
   {
      smallest_parent = smallest;
      smallest = smallest->get_left();
   }

   // smallest contains smallest child in right subtree
       
   // Move contents, unlink child
   to_be_removed->get_data() = smallest->get_data();
   if (smallest_parent == to_be_removed) 
      smallest_parent->set_right(smallest->get_right()); 
   else 
      smallest_parent->set_left(smallest->get_right()); 
   delete smallest;
}

template<class T>
bool TreeNode<T>::find(T value) const
{
   if (value < data)
   {
      if (left == NULL) return false;
      else return left->find(value);
   }
   else if (data < value)
   {
      if (right == NULL) return false;
      else return right->find(value);
   }
   else 
      return true;
}

template<class T>
void TreeNode<T>::print_nodes() const
{  
   if (left != NULL)
      left->print_nodes();
   cout << data << "\n";
   if (right != NULL)
      right->print_nodes();
}

int main()
{  
   /*
   BinarySearchTree<string> t;
   t.insert("D");
   t.insert("B");
   t.insert("A");
   t.insert("C");
   t.insert("F");
   t.insert("E");
   t.insert("I");
   t.insert("G");
   t.insert("H");
   t.insert("J");
   t.erase("A"); // Removing leaf
   t.erase("B"); // Removing element with one child
   t.erase("F"); // Removing element with two children
   t.erase("D"); // Removing root
   t.print();
   cout << t.count("E") << "\n";
   cout << t.count("F") << "\n";
   */
   srand(time(0));
   BinarySearchTree<int> t;
   for(int i=0;i<10000000;i++)
   {
      int r = rand() % 10000 +1;
      t.insert(r);
   }
   cout << t.count(5000) << endl;;

   return 0;
}
