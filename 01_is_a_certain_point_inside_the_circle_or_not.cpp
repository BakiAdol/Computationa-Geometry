
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int radius,x,y;
    cin >> radius; // radius of the circle
    cin >> x >> y; // coordinate of the circle

    int p,q;
    cin >> p >> q; // coordinate of a certain point

    int distance = (x-p)*(x-p) + (y-q)*(y-q); // distance from (x,y) to (p,q)
                                              // without square root
    if(distance<=radius*radius) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
/*
* (x,y) is a circle with radius r
*  a certain point (p,q) is in the circle, if
*  the distance between (x,y) to (p,q) is less than
*  or equal to r
*
*  So, Distance between(x,y) to (p,q) d = sqrt((x-p)*(x-p) + (y-q)*(y-q))
*  From the condition r == d
*                     r == sqrt((x-p)*(x-p) + (y-q)*(y-q))
*                   r*r == ((x-p)*(x-p) + (y-q)*(y-q)) // just avoid floating point precision
*       If this is true, then the certain point (p,q) is inside the circle
*/

