#include <iostream>
using namespace std;
int main() {

char opreator;
long double value1,value2;

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
    default:
    cout<<"opreator error!";
}
return 0;
}
