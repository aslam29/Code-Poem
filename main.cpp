#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <limits>

class Fish {
private:
    bool alive;
    bool hungry;
    std::string name;

public:
    // Default Constructor
    Fish() {
        alive  = true;
        hungry = false;
        name   = "Fishy";
    }

    // Constructor
    Fish(bool x, bool y, std::string z) {
        alive  = x;
        hungry = y;
        name   = z;
    }

    // Return fish's life status
    bool isAlive() { return alive; }

    // Return fish's hunger status
    bool isHungry() { return hungry; }

    // Return fish's name
    std::string printName() { return name; }

    // Set fish's life status
    void setAlive(bool status) { alive = status; return; }

    // Set fish's hunger status
    void setHungry(bool status) { hungry = status; return; }
};

int main() {
    srand( (unsigned)time(NULL) );   // initialize the sequence of pseudo-random numbers with a random seed

    Fish Dennis(true, false, "Dennis");   // Create my cute fish, Dennis!

    // Dennis's life is like a loop. 
    while (Dennis.isAlive()) {
        std::cout << "Hello, I'm " << Dennis.printName() << "!" << std::endl << std::endl;

        // Dennis is chilling until he gets hungry
        while(!Dennis.isHungry()) {
            // Randomly chooses a number from 1 to 10 and if it is 2, Dennis is now hungry
            if ( (rand() % 3) + 1 == 2 ) {
                Dennis.setHungry(true);
                break;
            }

            // Till then, Dennis is just chilling in his tank :^)
            std::cout << "(chilling...)" << std::endl;
        }

        // Dennis is now hungry :^(
        std::cout << std::endl << "My hungry..." << std::endl;

        // Time to feed Dennis!
        std::cout << std::endl << "Press Enter to Feed Dennis" << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        // Dennis notices the food
        std::cout << "!" << std::endl;

        // Time for Dennis to eat!
        std::cout << std::endl << "(NOM! NOM! NOM! NOM! NOM!)" << std::endl;

        Dennis.setHungry(false);  // Dennis is now full

        // Dennis thanks his owner for the food <3
        std::cout << std::endl << "Thank you! <3" << std::endl;

        // Continue on to the next day -- repeating Dennis's life over and over again till death
        std::cout << std::endl << "Press Enter to Continue to the Next Day" << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
}
