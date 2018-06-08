#include "cs162_list.h"
#include <iostream>

using namespace std;

//These are the functions to implement for this lab
//Like Lab9, we are not using clases here

//Check to see if the desired item is in the list
//Return true if it is found

//We are also practicing with returning values; make
//sure to return values from your functions and use
//those returned values in main!

//Step 2 - Practice Traversal
int display_first_and_last(node * head)
{
    int pile = 0;
    if (head != NULL)
    {
        node * current = head;
        pile += current->data;

        cout << "\nFirst node: " << current->data << endl;

        while (current->next != NULL)
            current = current->next;

        pile +=current->data;

        cout << "\nLast node: " << current->data << endl;
        cout << "Sum between the two: " << pile << endl;

    }       //Write your code here
    else
        cout << "\nNo nodes\n";

    return pile;
}

//Step 3 - Practice Insertion
bool insert_before_last(node * & head, int to_add)
{
    //Write our code here
    //
    if (head!=NULL)
    {
        node * previous = NULL;
        node * current = head;

        while (current->next !=NULL)
        {
            previous = current;
            current = current->next;
        }

        node * temp = new node;
        temp->data = to_add;
        previous->next = temp;
        temp->next = current;

        return true;
    } 
    return false;
}

//Step 4 - Practice Removal
int remove_first_two(node * & head)
{
    int victims = 0;
    if (head != NULL)
    {
        node * firsty = head;
        if (firsty->next !=NULL)
        {
            node * secondy = head->next;
            head = secondy->next;
            //destroy(secondy);
            //destroy(firsty);
            victims++;
        }

        //destroy(firsty);
        victims++;
    }
    return victims;
}


//Challenge - Make a complete copy  of the entire LLL creating
//a completely new LLL
//the 'source' the givenn node to be copied
//the 'destination' is the node that will be new, a copy of the given source
void copy_all(node * & destination_head, node * source_head)
{
    if ( destination_head==NULL || source_head == NULL)
        return;

    node * nextStepperBoiThing = new node;
    nextStepperBoiThing->data = source_head->data;
    destination_head->next = nextStepperBoiThing;

    node * evenNexter = new node;
    nextStepperBoiThing->next = evenNexter;
    copy_all(evenNexter, source_head->next);

    return;
}






















