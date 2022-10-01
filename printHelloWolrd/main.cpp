/*
 * File: printHelloWorld
 * -----------------------
 * A program prints "Hello, World!"
 */

#include <iostream>
#include <string>
#include "console.h"
using namespace std;

int main(){

    //buggy version
    //cout<<"Hello,"+"World!"<<endl;
    /***********************************************/

    string World =" World!";
    cout<<"Hello,"+ World << endl;

    cout<<"Hello, World!"<<endl;

    return 0;
}
