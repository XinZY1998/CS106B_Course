/*
 * File: printParymid
 * -----------------------
 * A program prints a parymid with the storey is what
 * you provide. If no input, print six storey as default.
 */

#include <iostream>
#include <cmath>
#include "console.h"
using namespace std;

void printStarParymid(void);
void printDigitParymid(void);
void printEmptyStarParymid(void);
void printEmptyDigitParymid(void);

const int DEFAULTSTOREY=6;

int main(){

    int program;
    cout<<"Program 1: print a star parymid"<<endl;
    cout<<"Program 2: print a empty star parymid"<<endl;
    cout<<"Program 3: print a digit parymid"<<endl;
    cout<<"Program 4: print a empty digit parymid"<<endl;
    cout<<"Select your program(1, 2, 3, 4):";
    cin>>program;

    switch(program){
    case 1:
        printStarParymid();
        break;
    case 2:
        printEmptyStarParymid();
        break;
    case 3:
        printDigitParymid();
        break;
    case 4:
        printEmptyDigitParymid();
        break;
    default:
        cout<<"Input error!"<<endl;
        break;

    }

    return 0;
}

void printStarParymid(void){

    int storey;


    cout<<"Enter your own storey: ";
    cin>>storey;

    if(storey<=0){

        storey=DEFAULTSTOREY;
    }

    for(int j=0;j<=storey-1;j++){
        for(int i=-(storey-1);i<=(storey-1);i++)
        {
            int sum=abs(i)+abs(j);
            if(sum<=2*j&&sum%2==0)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

}

void printEmptyStarParymid(void){

    int storey;

    cout<<"Enter your own storey: ";
    cin>>storey;

    if(storey<=0){

        storey=DEFAULTSTOREY;
    }

    for(int j=0;j<=storey-1;j++){
        for(int i=-(storey-1);i<=(storey-1);i++)
        {
            int sum=abs(i)+abs(j);
            if(sum==2*j||(j==storey-1&&sum%2==0))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void printDigitParymid(void){

    int storey;

    cout<<"Enter your own storey: ";
    cin>>storey;

    if(storey<=0){

        storey=DEFAULTSTOREY;
    }

    for(int j=0;j<=storey-1;j++){
        for(int i=-(storey-1);i<=(storey-1);i++)
        {
            int sum=abs(i)+abs(j);
            if(sum<=2*j&&sum%2==0)
                cout<<j+1;
            else
                cout<<" ";
        }
        cout<<endl;
    }

}

void printEmptyDigitParymid(void){

    int storey;

    cout<<"Enter your own storey: ";
    cin>>storey;

    if(storey<=0){

        storey=DEFAULTSTOREY;
    }

    for(int j=0;j<=storey-1;j++){
        for(int i=-(storey-1);i<=(storey-1);i++)
        {
            int sum=abs(i)+abs(j);
            if(sum==2*j||(j==storey-1&&sum%2==0))
                cout<<j+1;
            else
                cout<<" ";
        }
        cout<<endl;
    }

}


