#include "../include/Day24MoreLinkedLists.h"

#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


class Day24Node
{
public:
    int data;
    Day24Node *next;
    Day24Node(int d){
        data=d;
        next=NULL;
    }
};

class Day24Solution{
public:

    Day24Node* removeDuplicates(Day24Node *head)
    {
        //Write your code here
        for (Day24Node *curr = head; curr != NULL; curr = curr->next)
        {
            for (Day24Node *currNext = curr->next; currNext != NULL; currNext = currNext->next)
            {
                bool first_time = true;
                if (first_time)
                {
                    if (curr->data == currNext->data)
                    {
                        curr->next = currNext->next;
                    }
                }
                else if (curr->data == currNext->next->data)
                {
                    Day24Node *deletNode = currNext->next;
                    Day24Node *nextNode = deletNode->next;
                    currNext->next = nextNode->next;
                    delete deletNode;
                }
            }
        }
        return head;
    }

    Day24Node* insert(Day24Node *head,int data)
    {
        Day24Node* p=new Day24Node(data);
        if(head==NULL){
            head=p;  

        }
        else if(head->next==NULL){
            head->next=p;

        }
        else{
            Day24Node *start=head;
            while(start->next!=NULL){
                start=start->next;
            }
            start->next=p;   

        }
        return head;
                
            
    }
    void display(Day24Node *head)
    {
        Day24Node *start=head;
        while(start)
        {
            std::cout<<start->data<<" ";
            start=start->next;
        }
    }
};
			
int Day24MoreLinkedListsNS::day24MoreLinkedLists()
{
    Day24Node* head=NULL;
    Day24Solution mylist;
    int T,data;
    std::cin>>T;
    while(T-->0){
        std::cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

    mylist.display(head);
		
}