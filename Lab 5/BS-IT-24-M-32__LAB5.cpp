#include<iostream>
using namespace std;

int main()
{
    const int N = 5;
    const int M = 2;
    const int F = 2;
    

    //Array of all states
    int states[N] = {0,1,2,3,4};

    //Array of input characters
    char alphabet[M]= {'a','b'};

    //Array of final states
    int finalStates [] = {1,3};

    //Starting state
    int startState = 0;

    //Allocate 2D matrix on heap
    int** transition = new int*[N];

    for(int i=0;i<N;i++)
    transition[i]=new int[M];

    //Store transition table in  heap matrix
    int table[N][M]={
        {1,3},
        {1,2},
        {1,2},
        {3,4},
        {3,4}
    };

    for (int i =0;i<N;i++)
      for(int j=0;j<M;j++)
        transition[i][j]= table[i][j]; 

    //Input string   
    char input[100];
    char inputChar;

   //DFA variables
    int currentState = startState;
    int col;
    int safeCol ;

    bool valid = true ;
    bool accepted = false;

    cout << "Enter String : ";
    cin.width(100);
    cin>>input;

    //Iterative extended transition function
    for(int i = 0;input[i] != '\0';i++)
    {
        inputChar = input[i];
        col = -1;

        //Find the column of the input character in the alphabet
        for(int j =0;j<M;j++)
        col= (alphabet[j]==input[i])? j :col;

        //Check if the input character is valid 
        valid = valid && (col >=0);
        safeCol = (col >=0 )? col : 0;

        //Apply the transition function 
        currentState=(valid)?transition[currentState][safeCol]:currentState;

    }
    //Check if the current state is a final state
    for (int  i=0;i<F;i++)
    accepted = accepted || (currentState == finalStates[i]);

    cout<<(valid ?(accepted? "Success : String Accepted ":" Failiure: String Rejected"):"Invalid Input ");

    cout<< endl;

    //Free the allocated memory
    for ( int i = 0; i<N ; i++)
    delete [] transition[i];
    delete transition ;
    return 0 ;
}