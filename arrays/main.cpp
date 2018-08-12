#include <iostream>
using namespace std;

//Now let us look at Arrays as parameters passing arrays to functions
//create a simple print function then for the first parameter use an int array and for the second parameter create an int size
//of the array
//then just loop through the size of the array and print out the passedArray parameter at index i
//in the main call the function print and pass in an array and its size
void print(int passedArray[], int sizeofPassedArray){

    for(int i=0; i<sizeofPassedArray; i++){
        cout << " " << passedArray[i];
    }

}

int main()
{
    //to declare an array you must have type name and in brackets -->[size of the array] then initialize it with your values.
    int numbers[5] = {55,43,60,75,80};

    //accessing an arrays element by doing index look up. numbers[0] means at the 0th index of numbers print its element which is 0.
    cout << "Element at index 0: " << numbers[0] << endl;

    //to print the whole array we need to loop through it
    for(int i=0; i<5; i++){
        cout << "Index: " << i << " Element: " << numbers[i] << endl;
    }

    cout << endl;

    //lets do some calculations now rather than printing
    //first declare your new array with a size of 5 and initialize it
    int newArray[5] = {5,6,7,8,9};
    //create a variable sum and set it to 0
    int sum = 0;
    //let us loop through the array and add sum to each element in the array
    for(int i=0; i<5; i++){
        sum = sum + newArray[i];
        cout << " index: " << i << " With Sum: " << sum << endl;
    }

    cout << endl;

    //multidimensional arrays or arrays of arrays and here is how to declare them
    //and drawn they look like this
    //012
    //123
    int multiNumbers[2][3] = {{0,1,2},{1,2,3}};
    //accessing a multidimensional array
    //from the picture of the drawing we can see that by choosing the proper indexes for each row and col
    //that is what we will gain access to so for example
    //row 0 and col 1 will give us the number 1
    cout << multiNumbers[0][1] << endl;
    //and row 1 col 2 will give us the number 3
    cout << multiNumbers[1][2] << endl;
    cout << endl;
    //using the same array let us print it out by doing the following
    for(int row=0; row<2; row++){
        for(int col=0; col<3; col++){

            cout << multiNumbers[row][col] << " ";

        }
        cout << endl;
    }

    cout << endl;

    int arrayPrint[3] = {0,1,2};
    print(arrayPrint,3);

    return 0;
}
