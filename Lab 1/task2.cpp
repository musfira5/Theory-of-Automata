#include<iostream>
using namespace std;

int main(){
char arr[100];
bool found=false;

    cout<<"Enter a string"<<endl;
    cin.getline(arr,100);
   
for(int i=0;arr[i]!='\0';i++){

   if(arr[i]=='a'&& arr[i+1]=='a'){
   found=true;}
   }

if(found)   
cout<<"Substring found"<<endl;
else
cout<<"Substring not found"<<endl;

}

 