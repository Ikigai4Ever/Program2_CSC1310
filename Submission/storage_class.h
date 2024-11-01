/*
 *      NAME:       Christopher Bowman
 *      PROGRAM:    storage_class.h
 *      DATE:       10/23/24
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
        
    
    

    //functions (add to top, add to bottom, remove from top, remove from bottom, sorting, is empty, clear, constructer, deconstructer)


   
		

		
		
    
    ListNode<Materials> *head; //top of the linked list
    ListNode<Materials> *tail; //bottom of the linked list
    int numMats = 0;
    
    public:
    Storage() //name, ccolor, price, abundance
    {
        head = NULL; //do i need to set head and tail to NULL?
        tail = NULL;

        Materials preload;  //CHAGNE TO TEMPLATE 

        preload.setMaterialType("Mulch");
        preload.setMaterialColor("Black"); 
        preload.setMaterialPrice(12.87); 
        preload.setMaterialAmount(13); 
        push_front(preload);
        
        preload.setMaterialType("Sand");
        preload.setMaterialColor("Beige"); 
        preload.setMaterialPrice(32.78); 
        preload.setMaterialAmount(7); 
        push_front(preload);
        
        preload.setMaterialType("Clay");
        preload.setMaterialColor("Grey"); 
        preload.setMaterialPrice(400.99); 
        preload.setMaterialAmount(3); 
        push_front(preload); //why does it display a message when i select it?
        
    }

    void push_front(const Materials &mat) //WILL CHANGE MATERIAL TO T FOR TEMPLATE
    {
        ListNode<Materials> *newNode = new ListNode<Materials>(mat);
        

        if(isEmpty())
        {
            head = newNode;
            tail = newNode;

        }
        else 
        {
            newNode->setNext(head);
            head = newNode;

        }

        numMats ++;
    }


    void pop_front(Materials &mat) //CHNAGE MAT TO TEMPLATE
    {
        if (isEmpty()) //edge case for calling when empty
            return;

      
        ListNode<Materials>* temp = head;
        mat = head->getData(); 
        head = head->getNext();
        delete temp;
        
        if (head == NULL) //edge case for when you pop a one elemnet list
        {
            tail = NULL;

        }
   

        numMats --;
    }


    void push_bottom(const Materials &mat) //
    {   
        ListNode<Materials>* newNode = new ListNode<Materials>(mat);


        if (isEmpty())
        {
            head = newNode;
            tail = newNode;

        }

        else
        {
            tail->setNext(newNode);
            tail = newNode;

        }

        numMats ++;
    }

    void pop_back(Materials &mat) //rember for edge cases (ONLY 1 NODE)
    {
        if (isEmpty()) //edge case for calling when empty
            return;

        mat = tail->getData();

        if(head==tail) //edge case for one elemnt linked list
        {
            delete tail;
            head = NULL;
            tail = NULL;

        }
        else
        {
            ListNode<Materials>* current = head;
            while (current->getNext() != tail)
            {

                current = current->getNext();

            }

            delete tail;
            tail = current;
            tail->setNext(NULL);

        }

    
        numMats--;
    }

    bool isEmpty()
    {
        bool status;

        if (numMats > 0)
            status = false;
        else
            status = true;

        return status;
    }

    void sorting_ac(bool ac) //true is acsending, false is descnding, breaks here
    {
        if (head == NULL || head->getNext() == NULL)
            return;
        quicksort(head,tail, ac);

    }

    

    void quicksort(ListNode<Materials>* start, ListNode<Materials>* end, bool ac)
    {
        std::cout << "hello you are in quicksort";
        if (start == end || start == NULL || end == NULL) //not sure if needed
        return;

        ListNode<Materials>* piviot = partition(start,end,ac);
        
        if(start != piviot)
        quicksort(start,piviot,ac);

        if(piviot != end) 
        quicksort(piviot->getNext(),end,ac);

    }

    ListNode<Materials>* partition(ListNode<Materials>* start, ListNode<Materials>* end, bool ac)
    {   
        std::cout << "hello you are in partition";
        Materials pivdata = end->getData();
        ListNode<Materials>* index = start; 

        for(ListNode<Materials>* current = start; current != end; current = current->getNext()) //current is the travistor, current does not equal end, move current to next
        {
            if((ac&&current->getData() < pivdata)||(!ac&&current->getData() > pivdata)) //YUCK, first is for acsending, second is for descnedning
            {
                swap(index->getData(),current->getData());
                index = index->getNext();
            }


        }
        swap(index->getData(),end->getData());
        return index;
    }


    
    template<typename T>
    void swap(T &a, T &b) 
    {
    T temp = a; // temporay version of a
    a = b;      // make a and b
    b = temp;   // make b into a
    }


    friend std::ostream& operator<<(std::ostream &os, const Storage &storage) 
    {
    ListNode<Materials>* current = storage.head; // Start at head of the list
    
    while (current != NULL) // goes through the linked list
    { 
        const Materials &mat = current->getData();
        os << "Type: " << mat.getMaterialType()
           << ", Color: " << mat.getMaterialColor()
           << ", Price: " << mat.getMaterialPrice()
           << ", Amount: " << mat.getMaterialAmount() << std::endl;
        current = current->getNext(); // Move to the next node in the linked list
    }
    
    return os; 
}


    //Destructor
    ~Storage() 
    {
        while(!isEmpty())
        {
            Materials temp;
            pop_front(temp);

        }


    }



    

};





#endif