#include <iostream>
class Fish {
private:
    bool alive;
    bool hungry;
    string name;

public:
    // Default Constructor
    Fish() {
        alive = true;
        name  = "Fishy"
    }

    // Constructor
    Fish(bool x, string y) {
        alive = x;
        name  = y;
    }

    // Return fish's life status
    bool isAlive() {
        return alive;
    }

    // Return fish's hunger status
    bool isHungry() {
        return hungry;
    }

    // Print fish's name
    void printName() {
        cout << name;
    }
};

int main() {
    Fish Dennis(true, "Dennis");    // Create my cute fish, Dennis!

    // Dennis's life is like a loop. 
    while(Dennis.isAlive()) {
        cout << "Hello, I'm " << Dennis.printName() << "!" << endl;

        for(int i = 0; i < 5; i++) {
            cout << "..." << endl;
        }
    }
}
