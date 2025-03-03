// 05 class Time

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        // first construct
        Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second){};

        // second construct
        Time(int duration){
            hour = duration / 3600;
            minute = (duration / 60) - (hour * 60);
            second = duration - (hour * 3600) - (minute * 60);
        }

        int getHour(){
            return hour;
        }

        int getMinute(){
            return minute;
        }

        int getSecond(){
            return second;
        }

        int getDuration(){
            return (hour * 3600) + (minute * 60) + second;
        }

        Time add(Time other){
            int total = getDuration() + other.getDuration();
            return Time(total%86400);
        }

        int subtract(Time other){
            if (getDuration() < other.getDuration()){
                return getDuration() - other.getDuration() + 86400;
            } else {
                return abs(getDuration() - other.getDuration());}
        }

        int equals(Time other){
            if (other.hour == hour && other.minute == minute && other.second == second){
                return 1;
            } else {
                return 0;
            }
        }

        string toString(){
            stringstream ss;
            
            if (hour < 10){
                ss << "0";
            }
            ss << hour << ":";

            if (minute < 10){
                ss << "0";
            }
            ss << minute << ":";

            if (second < 10){
                ss << "0";
            }
            ss << second;
            return ss.str();
        }
};

int main() {

    return 0;
}
