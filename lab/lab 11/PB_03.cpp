// 03 Weapon Part 1
#include <iostream>
#include <vector>
using namespace std;

class Material {
private:
    string name;
    int quality;
    vector<string> compatibleTypes;

public:
    Material(string name, int quality);
    string getName();
    int getQuality();
    void addCompatibleType(string type);
    bool isCompatibleWith(string weaponType);
    int getUpgradeValue();
};

Material::Material(string name, int quality){
    this->name = name;

    if (quality <= 0){
        this->quality = 1;
    } else if (quality > 5){
        this->quality = 5;
    } else {
        this->quality = quality;
    }
}

string Material::getName(){
    return name;
}

int Material::getQuality(){
    return quality;
}

void Material::addCompatibleType(string type){
    compatibleTypes.push_back(type);
}

bool Material::isCompatibleWith(string weaponType){
    for(int i = 0; i < compatibleTypes.size(); i++){
        if (compatibleTypes[i] == weaponType){
            return true;
        }
    }
    return false;
}

int Material::getUpgradeValue(){
    return quality*5;
}


int main() {
    // เขียน main function เพื่อทดสอบเอง
}


