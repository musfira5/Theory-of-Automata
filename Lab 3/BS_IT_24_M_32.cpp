#include <iostream>
#include <cstring>

using namespace std;

int main(){

    //Transition Table
    //Column 0 =a
    //Column 1 =b

int transtition[5][2]={
    {1,3},       //q0
    {1,2} ,      //q1
    {1,2} ,      //q2
    {3,4} ,      //q3
    {3,4}       //q4
};
 char input[101];
 cout<<"Enter a string containing a and b : ";
 cin>> input;

 int state = 0;
 int valid = 1;

 for(int i = 0 ; i < strlen(input);i++)
 {
    if (input[i] == 'a'){
        state=transtition[state][0];
    }
    else if (input[i] == 'b'){
        state=transtition[state][1];
    }
    else
      valid = 0;
      break;
 }
   if(valid == 1 && (state == 1 || state == 3))
   {
    cout<<"Success! String is accepted ";
   }
   else
    {
        cout<<"Failure ! String is rejected ";
    }
     
    return 0;

}