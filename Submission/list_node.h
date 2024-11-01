/*
 *         NAME: Ty Ahrens
 *      PROGRAM: list_node.h
 *         DATE: 11/1/24
 *      PURPOSE: This class that is representing the other class for 
 *               program 2. This is a ListNode template class
 */

#ifndef LIST_NODE_H
#define LIST_NODE_H

#include <iostream>
#include <iomanip>

template <typename T>
class ListNode{
    private:			
		T data;         // Data of the template type
		ListNode *next; // Pointer to a ListNode object (the next node object)

    public:	
        T& getData(){
            return this->data;
        }

        void setData(T sentData) const
        {
            this->data = sentData;
        }

        void setNext(ListNode* sentNext){
            this->next = sentNext;
        }
        ListNode* getNext() const 
        {
            return this->next;
        }
	
		// Constructor
		ListNode (T nodeValue){
			this->data = nodeValue; //point the data to the current node
			this->next = NULL;  //set the next node to NULL
		}
};

#endif