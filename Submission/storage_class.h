/*
 *      NAME:       Ty Ahrens
 *      PROGRAM:    storage_class.h
 *      DATE:       10/23/24
 *      PURPOSE:    This class is used as the linked list for 
 *                  program 2
 */

#define STORAGE_CLASS_H
#ifndef STORAGE_CLASS_H
#include <iostream>
#include <iomanip>
#include <string>

template <typename T>
class Storage{
    private:
        struct StackNode{
            T value;          // Value in the node
            StackNode *next;  // Pointer to next node
        };
        
        StackNode *top;     // Pointer to the stack top
        std::string materialType;
    
    public:

    //functions


    //constructor
    DynamicStack();
   
    //Destructor
    ~DynamicStack();

};

//****************** FUNCTIONS **********************/

/*
 *      FUNCTION: getMaterialType()
 *      PURPOSE: getter function for material type
 */



#endif