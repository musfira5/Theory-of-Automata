// Task 1 ------DFA using extedned teansition function (Recursive function)------

/*
#include <iostream>
using namespace std;

int transition[5][2] = {
    {1, 3},  // q0
    {1, 2},  // q1
    {1, 2},  // q2
    {3, 4},  // q3
    {3, 4}   // q4
};

int extendedTransition(int state, char input[], int index)
{
    // Base case
    if (input[index] == '\0')
        return state;

    int symbol;

    if (input[index] == 'a')
        symbol = 0;
    else
        symbol = 1;

    int nextState = transition[state][symbol];

    return extendedTransition(nextState, input, index + 1);
}

int main()
{
    char input[101];

    cout << "Enter string (a and b only): ";
    cin >> input;

    int finalState = extendedTransition(0, input, 0);

    if (finalState == 1 || finalState == 3)
        cout << "String Accepted";
    else
        cout << "String Rejected";

    return 0;
}

*/

// Task 1 ------DFA using extedned teansition function (Iteratiive function)------

#include <iostream>
using namespace std;

int transition[5][2] = {
    {1, 3},
    {1, 2},
    {1, 2},
    {3, 4},
    {3, 4}
};

int extendedTransition(int state, char input[])
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        int symbol;

        if (input[i] == 'a')
            symbol = 0;
        else
            symbol = 1;

        state = transition[state][symbol];
    }

    return state;
}

int main()
{
    char input[101];

    cout << "Enter string (a and b only): ";
    cin >> input;

    int finalState = extendedTransition(0, input);

    if (finalState == 1 || finalState == 3)
        cout << "String Accepted";
    else
        cout << "String Rejected";

    return 0;
}
