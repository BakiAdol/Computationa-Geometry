
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

    cin >> x >> y >> a >> b; // two coordinate for line AB

    cin >> m >> n >> p >> q; // another two point

    bool first = isLeft(x,y,a,b,m,n);
    bool second = isLeft(x,y,a,b,p,q);

    if(first==second) cout << "Two points are same side of this line" << endl;
    else cout << "Tow points are different side of this line" << endl;

    return 0;
}
