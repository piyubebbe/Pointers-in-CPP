//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main() 
{
    int a = 10;
    int *aptr = &a;
    cout << aptr << endl;
    aptr++;
    cout << aptr << endl;
    return 0;
}

/*
Output:
0x60ff08
0x60ff0c
*/