// 03 Class Circle

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
   // สร้าง Object เพื่อทดสอบด้วยตัวเอง
}