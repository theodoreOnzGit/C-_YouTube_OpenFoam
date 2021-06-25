// C++ templates. Why learn? Because they are critical 
// in terms of syntax. fvMatrix.H uses templates everywhere
// refer to : https://www.geeksforgeeks.org/templates-cpp/
// the most simplest of templates, let's just think of printing,

// this is a function template



template <typename Type>
Type printType(Type var1, Type var2)
{
    Info << "this is the custom template printType .... " << endl;
    Info << var1 << endl;
    Info << var2 << endl;
    Info << "the variable types are " << typeid(var1).name() << endl;
    return 0;
}

// sometimes class is used in place of typename... 

template <class Type>
Type printType2(Type var1, Type var2)
{
    Info << "this is the custom template printType2 (class) .... " << endl;
    Info << var1 << endl;
    Info << var2 << endl;
    Info << "the variable types are " << typeid(var1).name() << endl;
    return 0;
}

// now, this is NOT class declaration, so sometimes typename is used
// to prevent less confusion
// however, openfoam code often uses class instead of typename,
// so unfortunately you got to get used to it

// now that we've dealt with function templates, we can then move on to
// class templates

// now i'm going to try and follow fvMatrix.H convention

// 80 chars per line
// 4 spaces for each level
// no space between template and <>
// use class instead of typename
// Type is type with capital T, case sensitive and exact
// open and closed parantheses for class declaratoin below the class
// member functions are always classed into public, protected and private
// two empty lines between functions

// functions 2 levels below, classes 1 level below


// functions and data are provided in private, protected and public, in that
// order


// this is a simple printing class with the same constructor

// also we use very nice headers. eg.


/*---------------------------------------------------------------------------*\
                           Class printClass Declaration
\*---------------------------------------------------------------------------*/


template<class Type>
class printClass
{

private:

    // Private data

        //- Variable a        
        Type a;

        //- Variable b
        Type b;

protected:

    // Protected Member Functions

public:

    // Constructors

        //- Construct given no input
        printClass()
        {
            Info << "I am an empty constructor" << endl;
        }

        //- Construct given two inputs
        printClass
        (
            Type a,
            Type b 
        )
        {
            Info << "You gave me two pieces of data of type: " << endl;
            Info << typeid(a).name() << endl;
        }
        


    // Destructor
    ~printClass()
     {
         Info << "destructor called" << endl;
     }
};
