/*
 *      NAME:       Christopher Bowman
 *      PROGRAM:    storage_class.h
 *      DATE:       10/23/24
 *      PURPOSE:    This class is used as the linked list for 
 *                  program 2
 */

#define STORAGE_CLASS_H
#ifndef STORAGE_CLASS_H
#include "materials_class.h"
#include <iostream>
#include <iomanip>
#include <string>


class Storage{
    private:
        
    
    

    //functions (add to top, add to bottom, remove from top, remove from bottom, sorting, is empty, clear, constructer, deconstructer)


   
		

		
		struct Node //node for linked list
    {
        Material data; //CHANGE TO TEMPLATE
        Node *next; //next node

    };
    
    Node *head; //top of the queue or stack
    Node *tail; //bottom of the queue or stack
    int numMats = 0;
    
    Storage() //name, cost, abundance, index
    {
        head = NULL; //do i need to set head and tail to NULL?
        tail = NULL;

        Material preload;  //CHAGNE TO TEMPLATE 

        preload.setName("Mulch");
        preload.setCost(12.87); //dollars, float
        preload.setAbundance(13); //bags, int
        preload.setIndex(0); //where it is at in the list, int
        push_front(preload);
        
        preload.setName("Sand");
        preload.setCost(42.09); //dollars, float
        preload.setAbundance(7); //bags, int
        preload.setIndex(1); //where it is at in the list, int
        push_front(preload);
        
        preload.setName("Clay");
        preload.setCost(99.99); //dollars, float
        preload.setAbundance(4); //bags, int
        preload.setIndex(2); //where it is at in the list, int
        push_front(preload);
        
    }

    Storage push_front(Material mats) //WILL CHANGE MATERIAL TO T FOR TEMPLATE
    {
        Node *newNode = NULL;
        newNode = new Node;
        newNode->data=mats;

        if(isEmpty())
        {
            head = newNode;
            newNode->next = NULL;
            tail = newNode;

        }
        else //DO I NEED TO CHNAGE THE TAIL POINTER TO ANYTHING OR IS IT GOOD SINCE IN THE IS EMPTY CASE IT SETS NEWNODE TO TAIL?
        {
            newNode->next = head;
            head = newNode;

        }

        numMats ++;
    }


    Storage pop_front(Material &mat) //CHNAGE MAT TO TEMPLATE
    {
        Node *temp = NULL; //temp node pointer to null

        //pops the value off the stack
        mat = head->data; 
        temp = head->next;
        delete head;
        head = temp;
   

        numMats --;
    }


    Storage push_bottom(Material mat) //
    {   
        Node *newNode = NULL;
        newNode = new Node;
        newNode->data = mat;
        newNode->next = NULL;


        if (isEmpty())
        {
            head = newNode;
            tail = newNode;

        }

        else
        {
            tail->next = newNode;
            tail = newNode;

        }

        numMats ++;
    }

    Storage pop_back(Material &mat) //rember for edge cases (ONLY 1 NODE)
    {
        Node* current = head;

        mat = tail->data;

        while (current->next != tail)
        {

            current = current->next;

        }

        delete tail;
        tail = current;
        tail->next = NULL;

    }






    //Destructor
    ~Storage() //MIGHT UPDATE THIS TO CALL POP_FRONT UNTIL IT HITS TAIL
    {
        Node *nodePtr,*nextNode; 
        nodePtr = head; 


        while (nodePtr != NULL) //goes down the stack deleting 
        {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
        }


    }



    public:

};





#endif