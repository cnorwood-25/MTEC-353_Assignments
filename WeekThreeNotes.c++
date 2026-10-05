// c++ is oop and also 99% of c will work in c++
// c++ is forward compatile most of what is in C can compile in c++, some caveats. Void pointer will not work as it is too vague for c++
#include <iostream>
#include <cmath>
using namespace std; //shortcut for not saying STD all the time
// typedef struct MidiNote{
//     unsigned char pitch;
//     unsigned char velocity;
//     unsigned char channel; //unsigned is only positive numbers 0 -255
// } MidiNote;//typedef renmaes exisiting variable to a name
// float getFrequency(unsigned char pitch){
//     return 440.0f * pow(x: 2.0f, y: (pitch - 69) / 12.0f)
// }
// float getAmplitude(unsigned char velocity){
//     return velocity / 127.0f;
// }
// public:
//     float getFrequency();
//     is differnet than actually defining it, saying that the actual function exists 
// can definte the funciton in the class outside the class if its defined in the public function
// int main(){
//     // MidiNote midiNote = {.pitch=69, .velocity=100, .channel=1};
//     // float freq = getFrequency(unsigned char pitch: midiNote.pitch);
//     // float freq = getAmplitude(unsigned char velocity: midiNote.velocity);
//     MidiNote midiNote;
// }
//do this thang if you define it in a func
//:: the thang shows you which umbrealla. float MidiNote::getFrequency(){
// . operator allows you access the members in a category of the object MidiNote. 
// void transposeNote(int &note, int semitone){
//     note += semitone;
// }
// void setVelocity( int *velocity, int newVel){
//     if (velocity != nullptr){
//         *velocity = newVel;  // using pointers null pointer will crash and makes the check valuable. Alias doesnt work with memory space so it takes less time. 
//     }
// }
// int main(){
//     int midiNote = 60;
//     int velocity = 100;
//     int channel = 1;
//     transposeNote(midiNote, 12);
//     cout << "Transposed:"<< midiNote << endl; //endline
//     setVelocity(&velocity, 127);
//     cout << "New Velocity:" << velocity << endl;
//     std::cout << "Hello World\n";  //cout stands for console out. it means shift the bit to the left. That operaters means dump whats on teh right to the left. the :: means the cout belongs to the name space std so you can name a bunch of things cout its like a buble umbrella like john in mpe is different than john in epd
//     return 0;
// }

// compile with clang++ :: is scope resolution 
// :: is similar to .  operater cant use it on an instanuated object or existing varaible struct midi :: on this midi note wont work because you are accessing the member, not the name spacing. 
// 0001 << 1 = 0010. When used in. STD::COUT puts the string from the right to the left. Taking the out. Avoids collisions. 
//inlining is storing the function when you start running the program versus dynamically allocating the function in real, much slower. If it already exists in the memeory space it runs faster. 
// -0 and ./ also still work in c++
//ref are a nickname or variable for a name
// int x = 3;
// int& ref = x;
// refernece and pointers are different. Can not change alias and do it when you definte the variable. the int& signals that ref is the same as x. Different than pointers because it actually points at the memory space while alias would change the value of x if you change ref. 
// objects have attributes, like a thermometer indicating temperature or the radius and diameter of a circle
// procedural programming is alorigthims applying to data
// object = data + function / attriburte + functionality 
// an address book may have a function to insert, delete, search, or display, any of the different attirbutes of name, address, postal code, and phone #. attributes are really called data members. functions are called the member functions or methods. 
// class is how to make your own object. Class is a blueprint it defines and attributes and methods an object should have. class is like a sketch of the house. Creating an object from the sketch, you will have the detail in it, which is the object. 
// status bite is type of message, data byte 1 and 2 cahnge depending on the message. 
// when you declare a varaible in the object it just takes up storage in the memory space. 
// constructor belongs to class and the name of it must be the same as teh class
// you dont wanan call the varaibles each time yo u call the class adn write logic in the construcotr function so you only pass in the required minimal varaible parameter thats required and use the contructor to analyze the varaibles. 
// used to initialize attributes and are called automatically.
// constructors go under the public keyword
class MidiNote{
    unsigned char pitch;
    unsigned char velocity;
    unsigned char channel;
public:
    MidiNote();
    MidiNote(unsigned char pitch, unsigned char velocity, unsigned char channel);
};
MidiNote::MidiNote(){
    pitch = 60;
    velocity = 100;
    channel = 1;
}
MidiNote::MidiNote(unsigned char pitch, unsigned char velocity, unsigned char channel):pitch(pitch), velocity(velocity), channel(channel){
}
//can also use this -> pitch = pitch
//MidiNote midiNote(pitch: 72, velocity)
// also deconstructor when th eobject is destoryed, when main func exits the midiNote is destroyed since it is local and its creatd swhen main runs and is destoryed when main exits
// the ~MidiNote(); is a deconstructor (dont do this) garbage collection it is called. 

//**Encapsulation**
//Sometimes in C++ we hide information from teh user
//by default attributes in a class are private
//can clarify private or public as many times as you want
// getters or setters allow you to make sure that the varaible works with the class
// accessing objects directly makes it harder to see who changed objects. HArd to trace for troubleshooting
//getter and setter
// class MidiNote
// public:
// unsigned char getVelocity(){
//     return velocity;
// }
// void setVelocity(unsigned char v){
//     velocity = v
// }
// getters and senders 

//inheritance
class Guitar {
    protected: //makes it private exclusively for the child class.
    unsigned char numString;

    public:
    void play(){
        std::cout << "Play!\n";
    }
};

//child class must match the first class
class ElectricGuitar : public Guitar{
    public:
    void printNumString(){
        std::cout << numString << std::endl;
    }
};

int main(){
  ElectricGuitar guitar;
  guitar.play();
  guitar.printNumString();
  return 0;
}