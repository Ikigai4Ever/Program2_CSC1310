/*
 *      NAME:   Ty Ahrens
 *      PROGRAM: storage_class.h
 *      DATE: 10/23/24
 *      PURPOSE: This class is for the functions that are defined in
 *               the storage_class header file
 */

#include "storage_class.h"

//note: each function needs -- template <typename T> --



//****************** FUNCTIONS **********************/

/*
 *      FUNCTION: getMaterialType()
 *      PURPOSE: getter function for material type
 */

template <typename T>
std::string getMaterialType(){
    return materialType;
}
