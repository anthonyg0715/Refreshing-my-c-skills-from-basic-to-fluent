#include <iostream>

using namespace std;

int main()
{
    //this if statement checks if 1 is less than -1 since it is not it prints out bad job
    if(1<-1){
        cout << "Nice Job!" << endl;
    }else{
        cout << "Bad Job!" << endl;
    }
    //the second flow control prints out nice job because 1 is indeed greater than -1
    if(1>-1){
        cout << "Nice Job!" << endl;
    }else{
        cout << "Bad Job!" << endl;
    }
    //this will print out the else statement since 1 is not equal to -1
    if(1==-1){
        cout << "Nice Job!" << endl;
    }else{
        cout << "Come on this is just ridiculous now!" << endl;
    }
    //this will print the statement because 1 is not the same as -1
    if(1!=-1){
        cout << "Another good job!" << endl;
    }
    //Now that you understand these comparison operators you can also do >= or <= which means greater than or equal to and the
    //other one less than or equal to

    return 0;
}
