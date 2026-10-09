//Task 1--------------string starting and ending with a
#include<iostream>
using namespace std;

int main(){     
   char arr[100];
    int size=0;
    cout<<"Enter a string"<<endl;
         cin.getline(arr,100);
   
while(arr[size]!='\0'){
    size++;
}

if(arr[0]=='a'&& arr[size-1]=='a')
cout<<"Valid String";
else
cout<<"Invalid string";
     return 0;
}

//Task 2-------------- continuous substring aa
 
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

 