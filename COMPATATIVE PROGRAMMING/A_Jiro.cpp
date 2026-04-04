// There are three brothers named A, B, and C. The age relationships among them are given by three characters

// SAB​,SAC​,SBC​, which mean the following:

//     If 

// SAB​ is <, then A is younger than B; if it is >, then A is older than
// B.
// If
// SAC​ is <, then A is younger than C; if it is >, then A is older than
// C.
// If
// SBC​ is <, then B is younger than C; if it is >, then B is older than

//     C.

// Who is the middle brother, that is, the second oldest among the three?
// Constraints

//     Each of 

//     SAB​,SAC​,SBC​ is < or >.
//     The input contains no contradictions; that is, there always exists an age relationship that satisfies all given inequalities.

// Input

// The input is given from Standard Input in the following format:

// SAB​ 

// SAC​ 

// SBC​

// Output

// Print the name of the middle brother, that is, the second oldest among the three.
// Sample Input 1
// Copy

// < < <

// Sample Output 1
// Copy

// B

// Since
// A is younger than B, and B is younger than C, we can determine that C is the oldest, B is the middle, and

// A is the youngest. Hence, the answer is B.
// Sample Input 2
// Copy

// < < >

// Sample Output 2
// Copy

// C
 //ABC 371 contest 
// Language * /
#include <iostream>
using namespace std;
int main()
{

    char a, b, c;
    cin >> a >> b >> c; //  find out the middle age ;
    if (a < b && b < c && b < a)
    {
        cout << "A" << endl;
    }
    else if (a < b || b < c || b > c)
    {
        cout << "C";
    }
    else
    {
        cout << "B";
    }
}