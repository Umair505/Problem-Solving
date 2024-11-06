#include<bits/stdc++.h>
using namespace std;
void space(int spc)
{
    if(spc<=0)
    {
        return;
    }
    cout<<" ";
    space(spc-1);
}
void asterisks(int astr)
{
    if(astr<=0)
    {
        return;
    }

    cout<<"*";
    asterisks(astr-1);
}
void printPattern(int n,int row)
{
    if(row>n) return;
    space(n-row);
    asterisks(2*row-1);
    cout<<endl;
    printPattern(n,row+1);
}
int main()
{
    int n,row;
    cin>>n;
    printPattern(n,1);
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
void printSpaces(int spaces)
{
    if (spaces <= 0)
    {
        return;
    }
    cout << " ";
    printSpaces(spaces - 1);
}
void printAsterisks(int asterisks)
{
    if (asterisks <= 0)
    {
        return;
    }
    cout << "*";
    printAsterisks(asterisks - 1);
}
void printPattern(int n, int row)
{
    if (row > n)
    {
        return;
    }
    // Print spaces
    printSpaces(n - row);
    // Print asterisks
    printAsterisks(2 * row - 1);
    cout << endl;
    // Recursive call for the next row
    printPattern(n, row + 1);
}

int main()
{
    int n;
    cin >> n;

    // Call the recursive function to print the pattern
    printPattern(n, 1);

    return 0;
}


*/
