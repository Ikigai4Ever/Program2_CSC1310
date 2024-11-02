# Write Up Program 2

## Starting Write Up 10/9/24

We will have a storage unit that we can store different types of material (mulch, sand, clay, dirt, silt, gravel). The material is going to have the attributes of color, cost, abundance, and index. The program will have 4 differnet types of material already in the storage units and the user can have a truck put in more types of materials into other storage units to take out materials from the units. 

The classes that we will be using are Storage class that will represent the different storage units that are holding different material. We will also be using a linked list class to hold the different materials that are going to be stored in the storage unit. We will also have a class for the smart pointer in order to help with the risk of memory leaks.

The flow of the program is the user will have a menu of options to choose to do:
 1) Add material to storage
 2) Take material from storage
 3) Check materials in storage
 4) End program

They are then able to add to prexisiting materials that have been stored or are able to add a new type of material into storage. Also, they can take an amount out of storage to bring to something like a construction site.

### Structure

The materials are in a bonus template called storage.

    Storage<Materials>

The materials are being stored on different storage units (like storage wars), this would help to demonstrate the insert and remove abilities from anywhere in the list. 

    LinkedList <Storage<Materials>>

### Functions

The functions that we are going to need are:
 1) addMaterial(): this will add a new or existing material into the linked list
 2) displayMaterials(): this will get the material type, color, and amount for what is in the linked list and display to the user what is in the "storage"
 3) removeMaterial(): this will take out a specified number of a specific material and check to see if there is any more material still left.
 4) checkMaterial(): this function will check to see if there is any material left if a section of the storage unit after material has been taken out. It will also check to see if the material exists inside of the storage unit already or if it needs to make a new node in the list.
 5) getMaterialType(): get the material type for a specified node
 6) setMaterialType(): set the material type for a node
 7) getMaterialColor(): get the material color for a specified node
 8) setMaterialColor(): set the material type for a node
 9) getMaterialAmount(): get the material amount for a specified node
 10) setmaterialAmount(): est the amount of a material in a node

## Final Write Up

For program 2, what the group had gone to acheive was a program that would manage a loose construction packing material storage facility (like dirt and gravel). We wanted to create a program that would sort the materials based on the material price and organize it in a linked list so that the prices of materials could be found at the cheapest, most expensive, or any price range for a customer. We were successful in achieving this, as we were able to add more of an existing material, add a completely new material, remove a material, and check how much of each material we have in the storage facility. 
 
The process for creating this was knowing what were the three different menu selection were going to be and then dividing up the main, linked list, data, and list node classes up amongst each of the group members. We then made skeleton codes for each of the programs in order to help each other begin working more in depth in their part of the program. We then clarified what each person had to do in order to meet all of the requirements of the assignment. If there was anything that we think we could have done differently, it would have been to have some more time testing along with talking to one another to express what each other needed in order to do their part of the program. 

What we learned was how to use a custom template along with how to use comparison overloaded operators in order to compare different parts of the linked list. What the expected output of the program is the user to see what is already preloaded in the storage and is able to see if a material had run out when removing, or add to a prexisting part of the storage unit or a whole new material into the unit. How the TA will test the program is by using the testcase.txt file that we have made along with the MakeFile that is attached in the submission folder as well.

This program definately ran a lot more smoothly because the learning curve from GitHub is not relevent for this program. The overall workflow for the program was also really good as it had a lot more communication with one another compared to the last program. We do think that it would have been nice to have known that the second week (week five).