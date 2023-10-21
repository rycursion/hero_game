#include<iostream>
#include<string>

enum powersets
{
    NORMAL,
    FIREPOWERS,
    ICEPOWERS,
    INVISIBILITY,
    TELEPATHY,
    TELEKINESIS,
    FLIGHT,
    STRENGTH,
    SPEED

};

enum wealth
{
    BROKE,
    POOR,
    MIDDLECLASS,
    UPPERCLASS,
    RICH,
    ONEPERCENT
};

enum selfishness
{
    SELFLESS,
    MEASURED,
    SELFISH
};

class hero
{
public:
    std::string firstName;
    std::string lastName;
    std::string codeName;
    int wealth;
    int powerset;
    int selfishness;

    hero()
    {
        firstName="James";
        lastName="Doe";
        codeName="Superdude";
        wealth=BROKE;
        powerset=NORMAL;
        selfishness=SELFLESS;
    }
};

void createNewPlayer(hero newHero);

void loadPlayer(hero oldHero);

bool isPlayerFound();
