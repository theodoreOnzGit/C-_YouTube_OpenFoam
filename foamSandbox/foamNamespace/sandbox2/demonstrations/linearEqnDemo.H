linearEqn eq1(2,7);

Info << "y = 2x + 7 " << endl;
scalar c=eq1.value(5);
Info << "at x =5, y = " << c << endl;

// get derivative

Info << "dy/dx at x=5  is... " << eq1.derivative(5) << endl;

Info << "roots " << eq1.roots() << endl;

