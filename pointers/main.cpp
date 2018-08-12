#include <iostream>
using namespace std;

//let us do what we always have been doing which is pass by value
void passByValue(int x){
    x=99;
}

//Now let us pass by reference by doing the following
void passByReference(int *x){

    *x = 99;

}

int main()
{
    int number = 1;
    //& <-- this is called the address of operator and it just gives us where in location of the variable we are looking for lives
    //and not the actual element assigned to that variable.
    //So for example doing &number will give us the location in memory that number is but not its element 1
    cout << &number << endl;
    //now that we understand the address of operator let us look at the dereference operator which is this symbol *
    //and also called a pointer
    //what we did below was we created a pointer called numberPointer, then we set it equal to the address of number
    //so we should get the same address of number as before and again not its value
    int *numberPointer;
    numberPointer = &number;
    cout << numberPointer << endl;

    cout << endl;

    int x = 13;
    int y = 23;

    passByValue(x);
    passByReference(&y);

    cout << "X is: " << x << endl;
    cout << "Y is: " << y << endl;

    //now that we know enough about pointers let us look at dynamic memory
    //let us create a new pointer
    //by setting newPointer = new int[size]; is creating dynamic memory
    //we are going to ask the user what the size is
    int i,j;
    int *newPointer;
    cout << "How many numbers would you like to enter? " << endl;
    cin >> i;
    newPointer = new int[i];
    for(j=0; j<i; j++){
        cout << "Enter number: ";
        cin >> newPointer[j];
    }
    cout << "You have entered: ";
    //in most cases, we need to delete memory allocated dynamically because it is only needed during specific periods
    //of time within a program. We can either delete using this keyword delete pointerName or delete[] pointer for arrays.
    //here is an example on using delete[]. If we don't delete allocated memory, we can have what is called memory leaks and
    //that is bad
    for(j=0; j<i; j++)
        cout << newPointer[j] << ", ";
        delete[] newPointer;

    return 0;
}
