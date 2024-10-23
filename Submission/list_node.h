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
class ListNode
{
	public:	
		/*	notice the attributes are public so that the 
			LinkedList class can directly access them */
			
		T value;        // Node value
		ListNode *next; // Pointer to a ListNode object (the next node object)

		// Constructor
		ListNode (T value)
		{ 
			this->value = value;
			this->next = NULL;
		}
};

#endif