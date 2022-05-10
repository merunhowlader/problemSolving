#include <string.h>
#include <iostream>
using namespace std;

int main(){
    int x;
    x =10;
    int* px;
    px = &x;

    printf("%d\n",px);
    printf("%d\n",&x);
     printf("%d\n",*px);

    cout <<  x << endl;
    return 0;


}