#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED
using namespace std;

class Inventory;

class Cat {
    public:
        int damage;
        int affectionLevel;

        Cat (int d, int aL) {
            damage = d;
            affectionLevel = aL;
        }

        void feedCat(Inventory& drawer);
};

class Hooman {
    public:
        int health;
        string name;

        Hooman (int h, string n) {
            health = h;
            name = n;
    }
    void subtractHealth(Cat& zookie);
    void damagePlayer(Cat& zookie);
};

class Inventory {
    public:
        int catFoodSupply;

        Inventory (int cFS) {
            catFoodSupply = cFS;
        }

        void checkStore();
};

void gameOptions(Hooman& gabbi, Cat& zookie, Inventory& drawer);

void appear();
void petCat();



#endif // CAT_H_INCLUDED
