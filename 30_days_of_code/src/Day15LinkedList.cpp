#include "../include/Day15LinkedList.h"
#include <iostream>
#include <cstddef>

class Day15Node
{
public:
    int data;
    Day15Node *next;
    Day15Node(int d){
        data=d;
        next=NULL;
    }
};

class Day15Solution {
public:

    Day15Node* insert(Day15Node *head,int data)
    {
        //Complete this method
        Day15Node *node=head;
        if (node==NULL)
        {
            return node=new Day15Node(data);
        }
        while(node)
        {
            if(node->next==NULL)
            {
                node->next=new Day15Node(data);
                break;
            }
            node=node->next;
        }
        return head;
    }

    void display(Day15Node *head)
    {
        Day15Node *start=head;
        while(start)
        {
            std::cout<<start->data<<" ";
            start=start->next;
        }
    }
};

int Day15LinkedListNS::day15LinkedList()
{
    Day15Node* head=NULL;
    Day15Solution mylist;
    int T,data;
    std::cin>>T;
    while(T-->0){
        std::cin>>data;
        head=mylist.insert(head,data);
    }	
    mylist.display(head);
	return 0;
}
