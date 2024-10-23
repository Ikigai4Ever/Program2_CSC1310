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
        
    
    public:

    //functions (add to top, choose where to add, add to bottom, remove from top, choose where to remove, remove from bottom)


    //3 calls of the push function for mulch, sand, and clay
    Storage() //color, cost, abundance, index
    {
        Material mulch;
        mulch.setColor("Brown");
        mulch.setCost(12.87); //dollars, float
        mulch.setAbundance(13); //bags, int
        mulch.setIndex(0); //where it is at in the list, int

        Material sand;
        sand.setColor("Beige");
        sand.setCost(42.09); //dollars, float
        sand.setAbundance(7); //bags, int
        sand.setIndex(1); //where it is at in the list, int

        Material clay;
        clay.setColor("Blue");
        clay.setCost(99.99); //dollars, float
        clay.setAbundance(4); //bags, int
        clay.setIndex(2); //where it is at in the list, int

        push(mulch);
        push(sand);
        push(clay);
    };
   
    //Destructor
    ~Storage();

};





#endif