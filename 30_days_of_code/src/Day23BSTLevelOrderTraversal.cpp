#include "../include/Day23BSTLevelOrderTraversal.h"

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

class Day23Node{
public:
    int data;
    Day23Node *left,*right;
    Day23Node(int d){
        data=d;
        left=right=NULL;
    }
};

class Day23Solution{
public:
    Day23Node* insert(Day23Node* root, int data){
        if(root==NULL){
            return new Day23Node(data);
        }
        else{
            Day23Node* cur;
            if(data<=root->data){
                cur=insert(root->left,data);
                root->left=cur;
            }
            else{
                cur=insert(root->right,data);
                root->right=cur;
            }           
            return root;
        }
    }

    void levelOrder(Day23Node * root){
        //Write your code here
        if (root == nullptr) {
            return; // Handle empty tree
        }

        std::queue<Day23Node*> q;
        q.push(root);

        while (!q.empty()) {
            Day23Node* current = q.front();
            q.pop();

            std::cout << current->data << " "; // Process the node (e.g., print its value)

            if (current->left != nullptr) {
                q.push(current->left);
            }
            if (current->right != nullptr) {
                q.push(current->right);
            }
        }
        std::cout << std::endl; // For better output formatting
    }

};//End of Solution

int Day23BSTLevelOrderTraversalNS::day23BSTLevelOrderTraversal(){
    Day23Solution myTree;
    Day23Node* root=NULL;
    int T,data;
    std::cin>>T;
    while(T-->0){
        std::cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}