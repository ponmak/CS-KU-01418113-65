// 01 Class MusicPlaylist
#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist{
    private:
        string music[20];
        string nowPlaying;
        int currentTrack = 0;
        int slotMusic = 0;
    public:
        void add(string str){
            music[slotMusic] = str;
            slotMusic++;
        }

        void setCurrentTrack(int idx){
            currentTrack = idx - 1;
        }

        string play(){
            return music[currentTrack];
        }
};


int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}