
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1,x2,y1,y2,a1,a2,b1,b2;

    cin >> x1 >> y1 >> x2 >> y2; // two coordinate of first line

    cin >> a1 >> b1 >> a2 >> b2; // two coordinate of second line

    /*
    *   two line never intersect if their slope is same
    *   so we need to find their slope and check
    *   Slope m1 = (y2-y1)/(x2-x1)
    *         m2 = (b2-b1)/(a2-a1)
    *
    *                m1 == m2
    *   (y2-y1)/(x2-x1) == (b2-b1)/(a2-a1)
    *   (y2-y1)*(a2-a1) == (x2-x1)*(b2-b1)
    */

    if((y2-y1)*(a2-a1) == (x2-x1)*(b2-b1)) cout << "They will never intersect" << endl;
    else cout << "They will intersect" << endl;

    return 0;
}

