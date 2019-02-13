/*
* Taylor Bui

*Date: 09/5/18
*The purpose of this program is given three user inputed points.
*Calculate the perimeter, side , area of the triangle
*/

#include<math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[])
{
    double x1, x2, x3, y1 , y2, y3, s1, s2, s3, a1, a2, a3, perimeter, area, s;
    
    cout << "Enter three points : ";
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    
    
    s1 = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    s2 = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    s3 = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    
    cout<<fixed;
    cout << "The three sides are " << setprecision(3) << s1 << " "  <<s2 << " " << " " <<s3 << endl;
    
    a1 = (acos((pow(s3,2) + pow(s2,2) - pow(s1,2))/(2*s2*s3))*(180/M_PI));
    a2 = (acos((pow(s1,2) + pow(s2,2) - pow(s3,2))/(2*s2*s1))*(180/M_PI));
    a3 = (acos((pow(s3,2) + pow(s1,2) - pow(s2,2))/(2*s1*s3))*(180/M_PI));
    
    cout << "The three angles are " << setprecision(2) << a3 << " " << a2 << " " <<  " " << a1 << endl;
    
    perimeter = s1 + s2 + s3;
    s = perimeter/2;
    
    cout << "The perimeter is "<< setprecision(3) << perimeter << endl;
    
    area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout << "The area is " << area;
   
}

//1 1 6.5 1 6.5 2.5