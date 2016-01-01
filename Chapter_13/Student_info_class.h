#ifndef GUARD_Core
#define GUARD_Core

#include <iostream>
#include <string>
#include <vector>
#include "grade.h"



class Core{
    public:
        //Constructor
        Core();
        Core(std::istream&);

        // Deconstructor
        virtual ~Core() {};
        
        virtual double grade() const;
        virtual std::istream& read(std::istream&);
        virtual double thesis_score() const {return 0;}
        
        std::string name() const {return n;}
        std::istream& read_common(std::istream&);
        std::istream& read_homework(std::istream& in);
        double temp;

    protected: 
        double midterm, final;
        std::vector<double> homework;
    private:
        std::string n;
};


// Defining another class by deriving it from Core
class Grad : public Core{
    public:
        // Constructor
        Grad();
        Grad(std::istream&);

        // Over riding the grade and name functions
        double grade() const;
        std::istream& read(std::istream&);
        double thesis_score() const {return thesis;}
    private:
        double thesis;
};




bool compare(const Core& , const Core&);




#endif
