//pass by value */


#include <string.h>
#include <iostream>
using namespace std;

void change (int x){
    x = 20;

    cout << x << endl;

}

int main(){
    int x= 100;

    change (x);

    cout << x << endl;
  
    return 0;


}