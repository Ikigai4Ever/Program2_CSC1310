/*
 *      NAME:       Christopher Bowman
 *      PROGRAM:    storage_class.h
 *      DATE:       11/1/24
 *      PURPOSE:    This class is used as the linked list for 
 *                  program 2
 */


#ifndef STORAGE_CLASS_H
#define STORAGE_CLASS_H
#include "materials_class.h"
#include "list_node.h"
#include <iostream>
#include <iomanip>
#include <string>


class Storage{
    private:
    
    ListNode<Materials> *head; //pointer to top of the linked list
    ListNode<Materials> *tail; //pointer to bottom of the linked list
    int numMats = 0; //number of materials in storage
    
    public:
/*
 *      FUNCTION: Storage() 
 *       PURPOSE: Constructer to preload materials
 */
    Storage() //name, ccolor, price, abundance
    {
        head = NULL; //set both to NULL 
        tail = NULL;

        Materials preload;  //preload material 

        preload.setMaterialType("Mulch");
        preload.setMaterialColor("Black"); 
        preload.setMaterialPrice(12.87); 
        preload.setMaterialAmount(9.8); 
        push_front(preload);
        
        preload.setMaterialType("Sand");
        preload.setMaterialColor("Beige"); 
        preload.setMaterialPrice(32.78); 
        preload.setMaterialAmount(7.0); 
        push_front(preload);
        
        preload.setMaterialType("Clay");
        preload.setMaterialColor("Grey"); 
        preload.setMaterialPrice(400.99); 
        preload.setMaterialAmount(3.0); 
        push_front(preload); 
        
    }

/*
 *      FUNCTION: push_front() 
 *       PURPOSE: push to front of list
 */
    void push_front(const Materials &mat) 
    {
        ListNode<Materials> *newNode = new ListNode<Materials>(mat); //create new list node
        

        if(isEmpty()) //edge case for if empty
        {
            head = newNode;
            tail = newNode;

        }
        else //otherwise 
        {
            newNode->setNext(head); //set newNode as the head and make it point to the previos head
            head = newNode;

        }

        numMats ++;
    }

/*
 *      FUNCTION: pop_front() 
 *       PURPOSE: remove from the top of the list
 */
    void pop_front() 
    {
        if (isEmpty()) //edge case for empty
        {
            
            return;
        } 

      
        ListNode<Materials>* temp = head; //set the temp to the head
        
        head = head->getNext();
        delete temp;
        
        if (head == NULL) //edge case for when you pop a one elemnet list
        {
            tail = NULL;

        }
   

        numMats --;
    }

/*
 *      FUNCTION: push_bottom() 
 *       PURPOSE: add to the bottom of the list
 */
    void push_bottom(const Materials &mat) 
    {   
        ListNode<Materials>* newNode = new ListNode<Materials>(mat); //create a new listNode


        if (isEmpty()) //edge case for when list is empty
        {
            head = newNode;
            tail = newNode;

        }

        else
        {
            tail->setNext(newNode); //set teh current tail next to the newNode
            tail = newNode; //set newNode to tail

        }

        numMats ++;
    }


/*
 *      FUNCTION: pop_back() 
 *       PURPOSE: remove from the bottom of the list 
 */
    void pop_back() 
    {
        if (isEmpty()) //edeg case for empty
        {

            return;
        } 

        

        if(head==tail) //edge case for one elemnt linked list
        {
            delete tail;
            head = NULL;
            tail = NULL;

        }
        else
        {
            ListNode<Materials>* current = head;
            while (current->getNext() != tail) //finds the elemnt before tail
            {

                current = current->getNext();

            }

            delete tail;
            tail = current;
            tail->setNext(NULL); //make sure to set tail Next to null after deletion

        }

    
        numMats--;
    }

/*
 *      FUNCTION: isEmpty() 
 *       PURPOSE: checks the number of mats in storage to find if empty
 */
    bool isEmpty() 
    {
        bool status;

        if (numMats > 0)
            status = false;
        else
            status = true;

        return status;
    }


/*
 *      FUNCTION: sorting_ac() 
 *       PURPOSE: when ac is true, sort ascending. When ac is false, sort descedning
 */
    void sorting_ac(bool ac) 
    {
        if (head == NULL || head->getNext() == NULL) //edge case for one element and empty
            return;
        quicksort(head,tail, ac);

    }

    
/*
 *      FUNCTION: quicksort() 
 *       PURPOSE: sortrs the linked list with a piviot element and sorting to the left of a piviot and right of the piviot
 */
    void quicksort(ListNode<Materials>* start, ListNode<Materials>* end, bool ac)
    {
        
        if (start == NULL|| start == end || start == end->getNext()) //edge case exit constions to get out of quicksort
        return;

        ListNode<Materials>* piviot = partition(start,end,ac); //find piviot element
        ListNode<Materials>* leftEnd = BeforePivot(start, piviot); //find element beofre piviot
        
        if (start != piviot) //if the start does not equal the piviot, quicksort the left of the piviot
        quicksort(start, leftEnd, ac); 

        if (piviot != end) //if the piviot does not equal the end, sort the right of the piviot
        quicksort(piviot->getNext(), end, ac);

    }

/*
 *      FUNCTION: BeforePivot() 
 *       PURPOSE: entire purpose is to find node before piviot
 */
    ListNode<Materials>* BeforePivot(ListNode<Materials>* start, ListNode<Materials>* piviot) 
    {
        ListNode<Materials>* current = start; //set current to start of list
        while (current && current->getNext() != piviot) //while current and current next do not equal piviot, traverse the list
        {
            current = current->getNext();
        }
        return current; // Returns the last node before the piviot
    }

/*
 *      FUNCTION: partition() 
 *       PURPOSE: partition's list around piviot element
 */
    ListNode<Materials>* partition(ListNode<Materials>* start, ListNode<Materials>* end, bool ac) 
    {   
        
        Materials pivdata = end->getData(); //used for comparison
        ListNode<Materials>* index = start; //used to track where element will be swapped

        for(ListNode<Materials>* current = start; current != end; current = current->getNext()) //current is the travistor, current does not equal end, move current to next
        {
            if((ac&&current->getData() < pivdata)||(!ac&&current->getData() > pivdata)) //YUCK, if the bool is true AND current is less than pivdata, swap. OR, is bool is false AND current is greater than pivdata, swap
            {
                
            
                swap(index->getData(), current->getData()); //swap the data of the index and current
            
                index = index->getNext(); //increment index
            }


        }
        swap(index->getData(),end->getData()); //swap index and end
        return index;
    }


/*
 *      FUNCTION: swap() 
 *       PURPOSE: template to swap the data of materials 
 */    
    template<typename T>
    void swap(T &a, T &b) 
    {
        
    T temp = a; // temporay version of a
    a = b;      // make a and b
    b = temp;   // make b into a
    }

/*
 *      FUNCTION: operator<<() 
 *       PURPOSE: overloaded output operator to print of the linked list
 */
    friend std::ostream& operator<<(std::ostream &os, const Storage &storage) 
    {
    ListNode<Materials>* current = storage.head; // Start at head of the list
    os<<"\n(START OF LIST)\n";
    while (current != NULL) // goes through the linked list
    { 
        const Materials &mat = current->getData();
        os << "Type: " << mat.getMaterialType()
           << ", Color: " << mat.getMaterialColor()
           << ", Price: " << mat.getMaterialPrice()
           << ", Amount: " << mat.getMaterialAmount()<<std::endl;
        current = current->getNext(); // Move to the next node in the linked list
    }
    os<<"(END OF LIST)\n";
    return os; 
}


/*
 *      FUNCTION: ~Storage() 
 *       PURPOSE: calls pop_front until it is empty 
 */
    ~Storage() 
    {
        while(!isEmpty())
        {
            
            pop_front();

        }


    }



    

};





#endif