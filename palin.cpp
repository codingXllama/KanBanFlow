#include<iostream>
#include<string>
using namespace std;



bool isPalin(string s){

    int leftPtr;
    int rightPtr = s.length() - 1;

    while (leftPtr<rightPtr)
        {
            // base case if the end and front char is not the same 
            if (s[leftPtr]!=s[rightPtr])
            {
                return false;
            }
            leftPtr++;
            rightPtr--;
        }

        return true;
}



int main()
{
    string userIn;
    cout << "Enter a string ";
    cin >> userIn;

    cout << "you entered: " + userIn << endl;


    return 0;
}