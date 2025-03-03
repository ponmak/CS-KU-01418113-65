// 04 Object Circle

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
    private:
        point center;
        double radius;
    public:

        Circle(point center, double radius){
            this->center.xPosition = center.xPosition;
            this->center.yPosition = center.yPosition;
            this->radius = radius;

            //cout << center.xPosition << " " << center.yPosition << " " << radius << endl;
        }

        double area(){
            return M_PI * pow(radius,2);
        }

        double distanceFromCenter(point pt){
            return sqrt(pow(pt.xPosition - center.xPosition,2) + pow(pt.yPosition - center.yPosition,2));
        }

        int contains(point pt){
            if (distanceFromCenter(pt) > radius){
                return 0;
            } else {
                return 1;
            }
        }           
};


int main()
{
    point pCenter;
    cout << "Center of Circle: ";
    cin >> pCenter.xPosition >> pCenter.yPosition;

    double radius;
    cout << "Radius of Circle: ";
    cin >> radius;

    Circle c1(pCenter, radius);

    point check;
    cout << "Point to Check: ";
    cin >> check.xPosition >> check.yPosition;

    cout << "Area of Circle is " << c1.area() << endl;
    cout << "Distance from Center to Point " << "(" << check.xPosition << ", " << check.yPosition << ")" << " is " << c1.distanceFromCenter(check) << endl;
    
    if (c1.contains(check)){
        cout << "This circle contains this point." << endl;
    } else {
        cout << "This point is not in this circle." << endl;
    }
}
