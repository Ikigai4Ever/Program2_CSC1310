/*
 *         NAME: Ty Ahrens
 *      PROGRAM: list_node.h
 *         DATE: 10/31/24
 *      PURPOSE: This class that is representing the other class for 
 *               program 2. This is a ListNode template class
 */

#define LIST_NODE_H
#ifndef LIST_NODE_H
#include <iostream>
#include <iomanip>

template <typename T>
class ListNode{
    private:			
		T data;         // Data of the template type
		ListNode *next; // Pointer to a ListNode object (the next node object)

    public:	
        /*
         *      FUNCTION:   getData()
         *      PURPOSE:    get the data at the current node
         */
        T getData(){
            return this->data;
        }

        /*
         *      FUNCTION:   setData()
         *      PURPOSE:    set the data at the current node
         */
        void setData(T sentData){
            this->data = sentData;
        }

        /*
         *      FUNCTION:   sentNext()
         *      PURPOSE:    set the data at the next node
         */
        void setNext(ListNode sentNext){
            this->next = sentNext;
        }

        /*
         *      FUNCTION:   getNext()
         *      PURPOSE:    return the next node
         */
        ListNode* getNext() const {
            return this->next;
        }
	
		// Constructor
		ListNode (T nodeValue){
			this->data = nodeValue; //point the data to the current node
			this->next = NULL;  //set the next node to NULL
		}
};

#endif