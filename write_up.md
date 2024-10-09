# MudSandandClay

## Starting Write Up 10/9/24

We will have a sotrage unit that we can store different types of material (mulch, sand, clay, dirt, silt, gravel). The material is going to have the attributes of color, cost, abundance, and index. The program will have 4 differnet types of material already in the storage units and the user can have a truck put in more types of materials into other storage units to take out materials from the units. 

The classes that we will be using are Storage class that will represent the different storage units that are holding different material. We will also be using a linked list class to hold the different materials that are going to be stored in the storage unit. We will also have a class for the smart pointer in order to help with the risk of memory leaks.

The flow of the program is the user will have a menu of options to choose to do:
 1) Add material to storage
 2) Take material from storage
 3) End program

They are then able to add to prexisiting materials that have been stored or are able to add a new type of material into storage. Also, they can take an amount out of storage to bring to something like a construction site.

### Structure

The materials are in a bonus template called storage.

    Storage<Materials>

The materials are being stored on different storage units (like storage wars), this would help to demonstrate the insert and remove abilities from anywhere in the list. 

    LinkedList <Storage<Materials>>

