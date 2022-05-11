//return reference /dengling pointer

#include <iostream>
#include <stdio.h>
//for using malloc heap memory we need stdlib library


#include <stdlib.h>


using namespace std;

int* getValue(){
    int x;

    x=20;

    return &x;

}

int main(){

    int *px;

    //px was created in stack memory and it was pointed to  heap memory address with the help of malloc function ////
    // malloc return a void pointer so we need to typecutst into int pointer


    px = (int*)malloc(4);
     
    return 0;
}
