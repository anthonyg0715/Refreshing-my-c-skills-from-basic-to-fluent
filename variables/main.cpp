#include <iostream>

using namespace std;

int main()
{
    //keep in mind that variables are just place holders somewhere in memory
    int x = 6;//int is the type and x is the name
    cout << x << endl;//now when you output variables you do it without quotes
    //let's create another variable with a value
    int y = 6;
    //now we can do basic math inside another variable that will return the result
    int result = x + y;
    cout << "x+y = " << result << endl;//the result will be 12
    int result2 = x - y;
    cout << "x-y = " << result2 << endl;//the result will be 0
    int result3 = x * y;
    cout << "x*y = " << result3 << endl;//the result will be 36
    int result4 = x / y;
    cout << "x/y = " << result4 << endl;// the result will be 1
    int result5 = x%y;
    cout << "x%y = " << result5 << endl;//the result will be 0 because that is what the remainder is
    //we can also do something where the user has to provide input. Lately we have been doing cout but now here is cin
    //which is input stream
    int z;
    cout << "Please enter a value for z" << endl;
    cin >> z;//as stated before cin is an input stream and now >> <-- these are extraction operators which retrieves the data
    //given for that variable
    cout << "Your value entered is " << z << endl;
    return 0;
}
