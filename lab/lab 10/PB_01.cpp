// 01 Class Hero

#include <iostream>
#include <string>
using namespace std;

class Hero{
    private:
        string name;
        int level;
    public:
        Hero(string n, int lv) : name(n), level(lv){}

        string getName() const {
            return name;
        }
        
        int getLevel() const {
            return level;
        }

};


int main()
{
   // สร้าง object เพื่อทดสอบด้วยตัวเอง
}