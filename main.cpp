#include <iostream>
#include <string>
using namespace std;

class Animal{
private:
    string diet;
protected:
    string voice;
    string name;
    string type;

public:
    Animal(string arg, string arg2){
        this-> name = arg;
        this-> type = arg2;
    }

    Animal(string arg, string arg2, string arg3){
        this-> name = arg;
        this-> type = arg2;
        this-> voice = arg3;
    }


    //returns name
    string getName(){
        return this->name;
    };
    //returns voice
    string getVoice(){
        return this->voice;
    };

    //returns type
    string getType(){
        return this->type;
    };

    void regionPopulation(){
        // value is carried through the function call
        static int population = 0;
        population++;
        cout << "Total population is now: " <<population  << "\n";
    }

    //virtual functions
    virtual void setVoice(){
        this->voice;
    };

    virtual bool operator == (const Animal& aAnimal) const{
        return true;
    }

};

//Create Inherited Class:
class  Dog : Animal
{
    void setVoice(){
        this->voice = "bark";
    };


    bool operator == (const Dog& adog) const{
        return this->name == adog.name;
    }

};
//Exercise: create a setVoice command for Fish and
// write a new boolean operator that returns true if the types are equal

int main() {
    Animal dino = Animal("bob", "T-Rex", "ROAR");
    cout << "bob the dino has been CREATED: \n";
    cout << "bob says " + dino.getVoice() << "\n";
    dino.regionPopulation();
    Animal dog = Animal("steve", "poodle");
    dog.setVoice();
    cout << "steve the dog has been CREATED: \n";
    cout << "steve says " + dog.getVoice() << "\n";
    dog.regionPopulation();
   //run to make sure correct
//    Animal fish1 = Animal("sammy", "salmon");
//    cout << "sammy the fish has been CREATED: \n";
//    Animal fish2 = Animal("liv", "red snapper");
//    cout << "liv the fish has been CREATED: \n";
//     if (fish1 == fish2){
//         fish1.regionPopulation();
//     }
//    else{
//        fish1.regionPopulation();
//        fish2.regionPopulation();
//     }
}

/*Answer:
class  Fish : Animal
{
    void setVoice(){
        this->voice = "blub";
    };

    bool operator == (const Fish& afish) const{
        return this->name == afish.type;
    }

};
*/