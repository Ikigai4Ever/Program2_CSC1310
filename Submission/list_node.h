/*
 *         NAME: Ty Ahrens
 *      PROGRAM: list_node.h
 *         DATE: 10/23/24
 *      PURPOSE: This class that is representing the other class for 
 *               program 2
 */

#define LIST_NODE_H
#ifndef LIST_NODE_H
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
        T getData(){
            return this->data;
        }

        void setData(T sentData){
            this->data = sentData;
        }

        void setNext(ListNode sentNext){
            this->next = sentNext;
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