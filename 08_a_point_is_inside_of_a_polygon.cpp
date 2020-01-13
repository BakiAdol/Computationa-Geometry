///From 03_area_of_a_triangle_from_given_three_points.cpp
double areaOfTriangle(int x, int y, int a, int b, int m, int n)
{
    return (abs(x*(b-n)- y*(a-m)+ (a*n - b*m))/2.0);
}

/// A point is inside of a polygon or not
bool insidePolygon(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5)
{
    return (areaOfTriangle(x1,y1,x2,y2,x3,y3)+areaOfTriangle(x1,y1,x3,y3,x4,y4))==
    (areaOfTriangle(x1,y1,x2,y2,x5,y5)+areaOfTriangle(x5,y5,x2,y2,x3,y3)+
        areaOfTriangle(x4,y4,x5,y5,x3,y3)+areaOfTriangle(x1,y1,x4,y4,x5,y5));
}
/*
    *
    * This is four point polygon
    * This algorithm is only work for convex polygon
    *
    *   Given point P(x5,y5)
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
    *   Make triangle from the given point P
    *   Consider point P inside of the polygon
    *
    *   D(x4,y4)..................C(x3,y3)
    *           . .           .  .
    *           .   .      .     .
    *           .      .P(x5,y5) .
    *           .  .         .   .
    *   A(x1,y1)..................B(x2,y2)
    *
    *   Now we need to find the area of PAB, PBC, PCD, PDA
    *   Here area of this polygon ABCD=area of triangle (PAB+PBC+PCD+PDA)
    *   That means the point P inside of this polygon
    *
    *   No consider point P outside of this polygon, So
    *
    *   D(x4,y4)..................C(x3,y3)
    *           .     .          .    .
    *           .            .   .       .
    *           .                .         .P(x5,y5)
    *           .                .      .
    *           .      .         .
    *   A(x1,y1)..................B(x2,y2)
    *
    *   Here area of this polygon ABCD!= area of triangle (PAB+PCB+PCD+PDA)
    *   So here this point P outside of this polygon
    */
    
