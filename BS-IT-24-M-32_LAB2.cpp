#include<iostream>
using namespace std;

int main(){
   char arr[100];
    int bcount=0;
    bool valid=true;

    cout<<"Enter a string"<<endl;
    cin.getline(arr,100);

for(int i=0;arr[i]!='\0';i++){
    if(arr[i]=='b'){
        bcount++;
    }
    else if (arr[i]!='a'){
    valid=false;
    break;
}
} 

 if(valid && bcount %2==0){
     cout<<"Belongs to Regular  Expression";
 }
  else 
  cout<<"Not belongs to  Regular Expression";  
  return 0;
}