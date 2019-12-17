
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,a,b,m,n;
    cin >> x >> y >> a >> b >> m >> n; // three points of a triangle

    /*
    *   consider (x,y), (a,b) and (a,b), (m,n) are two vector
    *   Now we calculate cross product of this two vector
    *
    *       (x,y).              |    (x,y)........ (p,q)
    *           .               |        .      .
    *          .                |       .      .
    *    (a,b)........ (m,n)    | (a,b)........ (m,n)
    *
    *   after cross product we found the area of (x,y), (a,b), (m,n) and (p,q)
    *   if we divided this area by 2 then we get area of (x,y), (a,b), (m,n)
    *
    *       (x,y).
    *           . .
    *          .    .
    *    (a,b)........ (m,n)
    *
    *   Cross product
    *   | x y 1 |
    *   | a b 1 |
    *   | m n 1 |
    *
    *   cross_product = |x*(b*1 - n*1) - y*(a*1 - m*1) + 1*(a*n - b*m)|
    *   area of this triangle = cross_product/2
    */

    cout << abs(x*(b-n)- y*(a-m)+ (a*n - b*m))/2.0 << endl;

    return 0;
}

