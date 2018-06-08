#include "cs162_list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    int firstNlast = display_first_and_last(head);
    bool didItWork = insert_before_last(head, 100000);
    if (didItWork)
        cout << "\nIt worked\n";
    else
        cout << "\nNaw\n";

    cout << "\nKilled this many off the top: " << remove_first_two(head) << endl;


    node * newHead = new node;
    copy_all(newHead, head);
    
    display_all(head);
    cout << "the copy:";
    display_all(newHead);
    
    return 0;
}
