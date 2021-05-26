#include <iostream>
#include<stack>
#include<set>
#include<map>

using namespace std;

namespace ariel {
    
template<class T>
class BinaryTree{
    private:
        struct Node {
            T _data;
            Node *_left, *_right, *_parent;
            Node(const T& data, Node* left = nullptr, Node* right = nullptr)
                : _data(data), _left(left), _right(right){}
        };

        Node* _root=nullptr;
        set<T>tree_nodes;
        map<T,Node*> map;

    public:
        BinaryTree<T>(){};

        class preorder_iterator{
            private:
                stack<Node*>pre_it;
                Node* current; //where the iterator now
            public:
                preorder_iterator(Node* root=nullptr):current(root){} //constructor 
                //++i
                preorder_iterator operator++() {
                    return preorder_iterator(); 
                }
                //i++
                preorder_iterator operator++(int) {
                    return preorder_iterator();
                }
                bool operator==(const preorder_iterator& other) const {
                    return this->current == other.current;
                }

                bool operator!=(const preorder_iterator& other) const {
                    return this->current != other.current;
                }
                T operator*() {
                    if(this->current!=nullptr){
                        return this->current->_data;
                    }
                    return 0;
                }
                T *operator->() const{
                    return &(this->current->_data);
                }

            };
       
        class inorder_iterator{
            private:
                stack<Node*>in_it;
                Node* current;
            public:
                inorder_iterator(Node* root=nullptr):current(root){} //constructor
                //++i
                inorder_iterator operator++() {
                    return inorder_iterator(); 
                }
                //i++
                inorder_iterator operator++(int) {
                    return inorder_iterator(); 
                }
                bool operator==(const inorder_iterator& other) const {
                    return this->current == other.current;
                }

                bool operator!=(const inorder_iterator& other) const {
                    return this->current != other.current;
                }
                T operator*() {
                    if(this->current!=nullptr){
                        return this->current->_data;
                    }
                    return 0;
                }
                T *operator->() const{
                    return &(this->current->_data);
                }

            };

        class postorder_iterator{
            private:
                stack<Node*>post_it;
                Node* current;
            public:
                postorder_iterator(Node* root=nullptr):current(root){} //constructor
                //++i
                postorder_iterator operator++() {
                    return postorder_iterator(); 
                }
                //i++
                postorder_iterator operator++(int) {
                    return postorder_iterator(); 
                }
                bool operator==(const postorder_iterator& other) const {
                    return this->current == other.current;
                }

                bool operator!=(const postorder_iterator& other) const {
                    return this->current != other.current;
                }
                T operator*() {
                    if(this->current!=nullptr){
                        return this->current->_data;
                    }
                    return 0;
                }
                T *operator->() const{
                    return &(this->current->_data);
                }

            };
              

        BinaryTree<T>& add_root(const T& node){
            // if(_root==nullptr){
            //     this->_root =new Node(node);   
            // }
            // else{
            //     this->_root->_data=node;
            // }
            // map[node]=this->_root;
            // tree_nodes.insert(node);
            return *this;
        }
        BinaryTree<T>& add_left(const T& node, const T& node_to_add_left){
            //need to check if node is in the tree?
            // if(tree_nodes.count(node)==0){ //node is not in the tree
            //     throw"execption";
            // }
            // map[node_to_add_left]=new Node(node_to_add_left);
            // map[node]->_left=map[node_to_add_left];
            // tree_nodes.insert(node);
            return *this;
        }
        BinaryTree<T>& add_right(const T& node, const T& node_to_add_right){
            //need to check if node is in the tree?
            // if(tree_nodes.count(node)==0){ //node is not in the tree
            //     throw"execption";
            // }
            // map[node_to_add_right]=new Node(node_to_add_right);
            // map[node]->_right=map[node_to_add_right];
            // tree_nodes.insert(node);
            return *this;
        }

        friend ostream& operator<<(ostream& out, const BinaryTree<T> &bt){
            out<<"ss";
            return out;
        }

        preorder_iterator begin_preorder() {  //return the iterator
             return preorder_iterator(_root); 
            } 

        preorder_iterator end_preorder() {
             return preorder_iterator(this->_root); 
            }
        inorder_iterator begin_inorder() {
             return inorder_iterator(this->_root); 
            }
        inorder_iterator end_inorder() {
             return inorder_iterator(this->_root); 
            }
        postorder_iterator begin_postorder(){
             return postorder_iterator(this->_root); 
            }
        postorder_iterator end_postorder(){
            return postorder_iterator(this->_root); 
            }

        preorder_iterator begin(){
            return preorder_iterator(this->_root); 
            }
        preorder_iterator end(){
             return preorder_iterator(this->_root); 
            }
};
}      

 