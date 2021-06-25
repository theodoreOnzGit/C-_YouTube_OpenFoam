// for long Info or cout the << must be four spaces after start of the stream

template<class Type>
class additionClass
:
    public printClass<int>
{
    public:

        // Constructors

        additionClass()
        {
            Info<< "this is a null constructor of the addition class" 
                << endl;
        }
};

