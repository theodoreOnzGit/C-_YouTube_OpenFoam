template<class Type>
Type returnNumber(Type a)
{
    Info << "a is " << a << endl;
    Info << "datatype is ..." << typeid(a).name() << endl;
    return a;
}



/*
int returnNumber(int a)
{
    Info << "a is " << a << endl;
    return a;
}

float returnNumber(float a)
{
    Info << "a is " << a << endl;
    return a;
}

char returnNumber(char a)
{
    Info << "a is " << a << endl;
    return a;
}

double returnNumber(double a)
{
    Info << "a is " << a << endl;
    return a;
}
*/

template<class Type>
class printClass
{
private:

protected:

public:

    // Constructors

        printClass()
        {
            Info << "Constructor declared" << endl;
        }

        printClass(Type data)
        {
            Info << "You gave me data of type ... " << endl;
            Info << typeid(data).name() << endl;
        }
};
