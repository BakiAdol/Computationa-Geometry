
#include <bits/stdc++.h>

using namespace std;

// Check a point is left side of a line if area of this point and the line is positive
bool isLeft(int x, int y, int a, int b, int p, int q)
{
    /*   Cross product
    *   | x y 1 |
    *   | a b 1 |
    *   | p q 1 |
    *
    *   cross_product = x*(b - q) - y*(a - p) + 1*(a*q - b*p)
    *
    *   A(x,y)B(a,b) is a line
    *   if cross_product is negative then consider point P(p,q)
    *   is in the left side of AB line, else if cross_product is positive
    *   then point P is right side of the line AB
    */
    return (x*(b-q) - y*(a - p) + (a*q - b*p)) > 0;
}

int main()
{
    int x,y,a,b,m,n,p,q;

    cin >> x >> y >> a >> b; // coordinate of a segment

    cin >> m >> n >> p >> q; // coordinate of another segment

    bool firstSegmentFirstPointSide = isLeft(m,n,p,q,x,y);
    bool firstSegmentSeconPointdSide = isLeft(m,n,p,q,a,b);

    bool secondSegmentFirstPointSide = isLeft(x,y,a,b,m,n);
    bool secondSegmentSeconPointdSide = isLeft(x,y,a,b,p,q);

    if(firstSegmentFirstPointSide == firstSegmentSeconPointdSide ||
       secondSegmentFirstPointSide == secondSegmentSeconPointdSide)
        cout << "Two segment are not intersect" << endl;
    else cout << "Two segment are intersect" << endl;

    return 0;
}
/*
*      segment .
*              .
* segment ..............
*              .
*              .
*          Intersect
*
*
* segment ..............
*              .
*              .
*              .
*              .
*        Not Intersect
*                           .
* segment ..............    .
*                           .
*                           .
*                           .
*                           .
*        Not Intersect
*
* So if and only if two segment are intersect if first segment two points are
* different side of second segment and segment two points are different side of
* first segment
*
*
*   If isLeft function return 0 or (x*(b-q) - y*(a - p) + (a*q - b*p))=0
*   that means segment are
*           
*                  P(x,y)
*             A(x,y)..................Q(x,y)
*                   .
*                   .
*                   .
*                   .
*             B(x,y).
*
*   So we need to check Ax <= Px and Bx>= Px where Ax <= Bx 
*   and Ay <= Py and By>=Py where Ay <= By
*
*/
