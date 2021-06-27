cubicEqn eq2(1,2,3,4);

Info << "cubic equation value ... at x=7 " << endl;

Info << eq2.value(7) << endl;

Info << "dy/dx at x = 0  and x =7 " << endl;

Info << eq2.derivative(0) << endl;
Info << "at x = 7 , dy/dx = " << eq2.derivative(7) << endl;
Info << "roots " << endl;
Info << eq2.roots() << endl;


