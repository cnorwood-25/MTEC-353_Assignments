#include <iostream>

//polymorphism is kinda like superclass of guitar for electric or acoustic. Could name function eplay or aplay for specific. If you declared play() in superclass without details you can just define the function more specifically in the subclass. Overwriting the function
//Can use a pointer to memory address of the subclass. All attributes of the subclass come from the superclass, so assigning a pointer of the subclass only points to the superclass. Memory exclsuivley for superclass
// to fix this, use key word virtual
// abstract classes include a pure virtual function, they can not be created as an obejct. 

// A base class pointer

// Incoming Note On

class guitar {
    protected:
    virtual void play() = 0;
    //virtual void say() = 0; tells it you ain timplementing this function in the bass class. Pure virtual must be overriden versus a normal virtual which could be overriden. 
};

class Eguitar : public guitar {
    public:
    void play() override{
        std::cout << ("Hell yes");
    }
    
};

// int main(){
//     guitar *guitar ; //pointer is fine
//     Eguitar Eguitar;
//     guitar = &Eguitar ; 

// }
template<typename T>
int compare(const T &value1, const T &value2){
    if (value1< value2) return -1 ;
    if (value2 > value1) return 1;
    return 0 ;
}

//erronoues becuase T covers differnece of string and number

// int compare(const std::string &value1, const std::string &value2){
//     if (value1< value2) return -1 ;
//     if (value2 > value1) return 1;
//     return 0 ;
// }

int main(){
    std:: cout << compare<int>(1, 5) << std::endl;

}
//compiler generates code from template and only comes from compiler. 
// including const before function starts means the compiler knows you wont change variables inside the func

//generic code is type independt.
// make sure yo uuse void (T , &s) to clairfy type






//pure virtual function animal is a concept, never will be a creture named animal. Subclasses cats and dogs. Pure virtual function 
