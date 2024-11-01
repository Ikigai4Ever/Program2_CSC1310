/*
 *         NAME: Ty Ahrens
 *      PROGRAM: list_node.h
 *         DATE: 10/23/24
 *      PURPOSE: This class that is representing the other class for 
 *               program 2
 */

#ifndef LIST_NODE_H
#define LIST_NODE_H

#include <iostream>
#include <iomanip>

template <typename T>
/*****************************************************************
							ListNode Class
******************************************************************/
class ListNode{
	
    private:			
		T data;         // Node data
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
			this->data = nodeValue;
			this->next = NULL;
		}

        ~ListNode(){

        }
};

#endif