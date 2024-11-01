/*
 *      NAME:   Ty Ahrens
 *      PROGRAM: materials_class.cpp
 *      DATE: 10/23/24
 *      PURPOSE: 
 */

#include "materials_class.h"

/*
 *      FUNCTION: setMaterialType() 
 *       PURPOSE: 
 */

void Materials::setMaterialType(std::string materialType){
    this->matType = materialType;
}

/*
 *      FUNCTION: setMaterialColor() 
 *       PURPOSE: 
 */

void Materials::setMaterialColor(std::string materialColor){
    this->matColor = materialColor;
}

/*
 *      FUNCTION: setMaterialPrice() 
 *       PURPOSE: 
 */

void Materials::setMaterialPrice(float materialPrice){
    this->matPrice = materialPrice; 
}

/*
 *      FUNCTION: setMaterialAmount() 
 *       PURPOSE: 
 */

void Materials::setMaterialAmount(float materialAmount){
    this->matAmount = materialAmount;
}

/*
 *      FUNCTION: getMaterialType() 
 *       PURPOSE: 
 */

std::string Materials::getMaterialType()const{
    return this->matType;
}

/*
 *      FUNCTION: getMaterialColor() 
 *       PURPOSE: 
 */

std::string Materials::getMaterialColor()const{
    return this->matColor;
}

/*
 *      FUNCTION: getMaterialPrice() 
 *       PURPOSE: 
 */

float Materials::getMaterialPrice()const{
    return this->matPrice;
}

/*
 *      FUNCTION: getMaterialType() 
 *       PURPOSE: 
 */

float Materials::getMaterialAmount()const{
    return this->matAmount;
}

/*
 *      FUNCTION: operator==() 
 *       PURPOSE: 
 */
bool Materials::operator==(const Materials& right_comparison)
{
    return this->matPrice == right_comparison.matPrice;
}

/*
 *      FUNCTION: operator<() 
 *       PURPOSE: 
 */
bool Materials::operator<(const Materials& right_comparison)
{
    return this->matPrice < right_comparison.matPrice;
}

/*
 *      FUNCTION: operator>()
 *       PURPOSE: 
 */
bool Materials::operator>(const Materials& right_comparison)
{
    return this->matPrice > right_comparison.matPrice;
}

/*
 *      FUNCTION: Materials() 
 *       PURPOSE: constructor for Materials class
 */

Materials::Materials(){
    
}

/*
 *      FUNCTION: ~Materials() 
 *       PURPOSE: deconstructor for Materials class
 */

Materials::~Materials(){
 
}