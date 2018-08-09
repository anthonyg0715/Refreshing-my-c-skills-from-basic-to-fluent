#include <iostream>

using namespace std;

//for the purpose of this example I will create a new function that prints our hello world
//the functions type is void and the name is print and it takes in no parameters and returns nothing since it is void
void print(){

    cout << "This is the print function" << endl;

}
//Here is a function that does basic math addition and takes in two parameters
int add(int a, int b){

    return a+b;

}
//Here we are going to pass by reference what we did before was pass by copy
int addition(int &c, int &d)
{
    //Modification of c and d in this function is allowed and has effect of the variables outside of it
    //because they are passed by reference
    c+=2;
    d+=3;

}

//right now the main itself is a function that prints hello world and returns 0 for success
//I will comment out hello world and instead now use the main to call the print function we made
int main()
{
    print();
    int z = add(5,3);
    cout << "The result of z is " << z << endl;
    //or we could just say
    cout << add(5,3) << endl;
    int x = 5; int y=3;
    addition(x,y);
    cout << "x is " << x << " y is " << y << endl;
    //cout << "Hello world!" << endl;
    return 0;
}


