#include <iostream>
using namespace std;
int main() {

char opreator;
long int value1,value2;

cin>>value1>>opreator>>value2;

switch(opreator){
    case '+' :
        cout<<value1 + value2;
        break;
    case '-' :
        cout<<value1 - value2;
        break;
    case '*' :
        cout<<value1 * value2;
        break;
    case '/' :
        if(value2 != 0){
            cout<<value1 / value2;
        }else{
            cout<<"error!!";
        }
    case '%':
        cout<<value1 % value2;
        break;
    default:
    cout<<"opreator error!";
}
return 0;
}
