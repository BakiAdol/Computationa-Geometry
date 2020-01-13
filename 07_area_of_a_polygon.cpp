///From 03_area_of_a_triangle_from_given_three_points.cpp
double areaOfTriangle(int x, int y, int a, int b, int m, int n)
{
    return (abs(x*(b-n)- y*(a-m)+ (a*n - b*m))/2.0);
}

/// Find area of a polygon
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    /*
    *   Area of a Polygon
    *
    *   D(x4,y4)..................C(x3,y3)
    *           .                .
    *           .                .
    *           .                .
    *           .                .
    *   A(x1,y1)..................B(x2,y2)
    *
    *       This is the polygon
    *
    *   D(x4,y4)..................C(x3,y3)
    *           .             .  .
    *           .          .     .
    *           .      .         .
    *           .  .             .
    *   A(x1,y1)..................B(x2,y2)
    *
    *   Divided this polygon into two triangel ABC and ACD
    *   So the area of this polygon(ABCD) = Area of (Triangle ABC + Triangle ACD)
    *
    *   In this way Area of polygon ABCDEFG = ABC + ACD + ADE + AEF + AFG
    *
    */
    double areaOfPolygon=areaOfTriangle(x1,y1,x2,y2,x3,y3)+areaOfTriangle(x1,y1,x3,y3,x4,y4);
    cout << areaOfPolygon << endl;
    
    return 0;
}
