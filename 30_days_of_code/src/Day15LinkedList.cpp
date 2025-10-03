#include "../include/Day15LinkedList.h"
#include <iostream>
#include <cstddef>

class Node
{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

class Solution {
public:

    Node* insert(Node *head,int data)
    {
        //Complete this method
        Node *node=head;
        if (node==NULL)
        {
            return node=new Node(data);
        }
        while(node)
        {
            if(node->next==NULL)
            {
                node->next=new Node(data);
                break;
            }
            node=node->next;
        }
        return head;
    }

    void display(Node *head)
    {
        Node *start=head;
        while(start)
        {
            std::cout<<start->data<<" ";
            start=start->next;
        }
    }
};

int Day15LinkedListNS::day15LinkedList()
{
    Node* head=NULL;
    Solution mylist;
    int T,data;
    std::cin>>T;
    while(T-->0){
        std::cin>>data;
        head=mylist.insert(head,data);
    }	
    mylist.display(head);
	return 0;
}
