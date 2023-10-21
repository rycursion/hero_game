#include<iostream>
#include<fstream>
#include<filesystem>
#include<cstdio>
#include<string>
#include"../include/player.h"
#include"../include/game.h"

namespace fs = std::filesystem;

const fs::path binPath = fs::path(".");

int main(int argc,char*  argv[])
{

    hero currentHero;

    if(isPlayerFound())
    {
        std::cout<<"No existing saves found."<<std::endl;
        createNewPlayer(currentHero);
    }
    else
    {
        std::cout<<"Existing player found."<<std::endl;
        loadPlayer(currentHero);
    }

    return 0;
}

bool isPlayerFound()
{
    fs::path playersPath = binPath;
    playersPath /= "players";
    std::cout<<binPath<<std::endl;

    return fs::is_empty(playersPath);

}

void createNewPlayer(hero newHero)
{
    char ack;
    std::cout<<"Create your character....\n";
    std::cout<<"What is your character's name?\n";
    std::cin>>newHero.firstName>>newHero.lastName;
    std::cout<<"OK, your hero is named "<<newHero.firstName<<" "<<newHero.lastName<<std::endl<<"Is that correct (Y/N)?\n";
    std::cin>>ack;
    while(ack!='Y'||'y')
    {
        std::cout<<"What is your character's name?\n";
        std::cin>>newHero.firstName>>newHero.lastName;
        std::cout<<"OK, your hero is named "<<newHero.firstName<<" "<<newHero.lastName<<std::endl<<"Is that correct (Y/N)?\n";
        std::cin>>ack;
    }

    std::cout<<"Character creation complete!\n";

}

void loadPlayer(hero currentHero)
{

}
