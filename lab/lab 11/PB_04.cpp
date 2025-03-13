// 04 Weapon Part 2
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

class Weapon {
    private:
        int durability;
        int damage;
        string weaponType;
    
    public:
        Weapon(int durability, int damage, string weaponType);
        int getDurability();
        int getDamage();
        string getWeaponType();
        int attack();
        bool upgrade(Material material);
        void repair();
        void showStatus();
};

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

Weapon::Weapon(int durability, int damage, string weaponType){
    
    // durability
    if (durability < 0){
        this->durability = 0;
    } else if (durability > 100){
        this->durability = 100;
    } else {
        this->durability = durability;
    }

    // damage 
    if (damage < 0){
        this->damage = 0;
    } else {
        this->damage = damage;
    }

    // weapon type
    this->weaponType = weaponType;
}

int Weapon::getDurability(){
    return durability;
}

int Weapon::getDamage(){
    return damage;
}

string Weapon::getWeaponType(){
    return weaponType;
}

int Weapon::attack(){
    if (this->durability == 0){
        return 0;
    } else {
        this->durability -= 2;
        if(this->durability < 0) {
            this->durability = 0;
        }
        return getDamage();
    }
}

bool Weapon::upgrade(Material material){
    if (material.isCompatibleWith(weaponType)){
        damage += material.getUpgradeValue();
        return true;
    }

    return false;
}

void Weapon::repair(){
    durability = 100;
}

void Weapon::showStatus(){
    cout << getDurability << " " << getDamage() << " " << getWeaponType() << endl;
}


int main() {
    // เขียน main function เพื่อทดสอบเอง
}


