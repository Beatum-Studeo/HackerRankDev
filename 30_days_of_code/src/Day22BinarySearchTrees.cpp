#include "../include/Day22BinarySearchTrees.h"

#include <iostream>
#include <cstddef>

class Day22Node{
public:
    int data;
    Day22Node *left;
    Day22Node *right;
    Day22Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
class Day22Solution{
public:
    Day22Node* insert(Day22Node* root, int data) {
        if(root == NULL) {
            return new Day22Node(data);
        }
        else {
            Day22Node* cur;
            if(data <= root->data){
                cur = insert(root->left, data);
                root->left = cur;
            }
            else{
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    int getHeight(Day22Node* root){
        
        //Write your code here

        if (root == nullptr) {
            return -1;
        }
        
        int rightHeight = getHeight(root->right);
        int leftHeight = getHeight(root->left);

        return 1 + std::max(leftHeight, rightHeight); // max(-1, -1) + 1 = 0 or +1 height
    }

}; //End of Solution

int Day22BinarySearchTreesNS::day22BinarySearchTrees() {
    Day22Solution myTree;
    Day22Node* root = NULL;
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0){
        std::cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    std::cout << height;

    return 0;
}
    
       
            
        