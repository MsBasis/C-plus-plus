// Stone Paper Scissor or Rock Paper Scissor is a game that is played between two people, Each player in this game forms one of three shapes. The winner will be decided as per the given rules:

//Rock vs Scissor -> Rock wins
//Rock vs Paper -> Paper wins
//Paper vs Scissor -> Scissor wins
//In this game, the user is asked to make choices based on both computer and user choices and the results are displayed showing both computer and user choices.

#include <iostream>
#include <format>
#include <map>
#include <cstdlib> //for random
#include <ctime> //for time for random after compile


std::map<int, std::string> shapes = {
    {0,"Rock"},
    {1,"Paper"},
    {2,"Scissors"}
};



int UserChoice(){
    int choice;
    for (const std::pair<const int, std::string>&shape : shapes){
        std::string text = std::format("[{}] {}\n",shape.first,shape.second);
        std::cout << text;
    };
    std::cout << "[3] End game\n";
    std::cout << "Choose shape: ";
    std::cin >> choice;
   
    return choice;
}

int ComputerChoice(){
    srand(time(0));
    int choice = rand() % 3;
    return choice;
}

void DecideWinner(int User ,int Computer, std::map<int,std::string> shapes){
    if (User == Computer ){
        std::string text = std::format("Your choice: {}\nComputers choice: {}\nNobody won :(\n",shapes.at(User),shapes.at(Computer));
        std::cout << text;
    }    
    if ((User==0 && Computer==2) || (User==1 && Computer==0) || (User==2 && Computer==1)){
        std::string text = std::format("Your choice: {}\nComputers choice: {}\nYou won!!!\n",shapes.at(User),shapes.at(Computer));
        std::cout << text;
    }
    if ((User==0 && Computer==1) || (User==1 && Computer==2) || (User==2 && Computer==0)){
        std::string text = std::format("Your choice: {}\nComputers choice: {}\nComputer won!!!\n",shapes.at(User),shapes.at(Computer));
        std::cout << text;
    }
}

void GameLoop(std::map<int,std::string> shapes){
    bool condition = true;
    while (condition){
        std::cout << "= = = = = = = = = = = = = = = = = = = = = = =\n";
        std::string text = std::format("Let's play a game of Rock Paper Scissors!\n");
        
        int User = UserChoice();
        int Computer = ComputerChoice();
        if (User == 3){
            std::cout << "Thanks for playing!"<<std::endl;
            condition = false;
        }
        DecideWinner(User, Computer, shapes);
    }
}





int main(){

    GameLoop(shapes);

    return 0;
}




