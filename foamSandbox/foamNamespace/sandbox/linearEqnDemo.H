    scalar a=5.2;
    scalar b=1.23;

    std::cout << "hi" << std::endl;
    Foam::Info << "hi" << Foam::endl;

    Info << "add 2 scalars" << endl;
    Info << a << "+" << b << " = " << a+b << endl;
// let's try some linear equations...

    linearEqn eq1(a,b);
    eq1.roots();

    Info << "root of equation" << endl;
    Info << eq1.roots() << endl;

    scalar x=5;
    scalar y=eq1.value(x); 

    Info << "evaluate linear equation at x = " << x << endl;
    Info << "linear equation is ..." << endl;

    Info << "y = " << a << "x + " << b << endl;
    Info << "y = " << y << " at x = " << x << endl;



