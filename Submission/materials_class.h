/*
 *         NAME: Ty Ahrens
 *      PROGRAM: materials_class.h
 *         DATE: 10/23/24
 *      PURPOSE: 
 */

#define MATERIALS_CLASS_H
#ifndef MATERIALS_CLASS_H
#include <iostream>
#include <string>
#include "list_node.h"

class Materials{
    private:
        std::string matType;
        std::string matColor;
        float matPrice;
        float matAmount;

    public:

    void setMaterialType(std::string);
    void setMaterialColor(std::string);
    void setMaterialPrice(float);
    void setMaterialAmount(float);
    std::string getMaterialType();
    std::string getMaterialColor();
    float getMaterialPrice();
    float getMaterialAmount();

    //constructor
    Materials();

    //deconstructor
    ~Materials();
};


#endif
