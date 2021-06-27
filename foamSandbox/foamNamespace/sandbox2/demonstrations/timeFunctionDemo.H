#include "setRootCaseLists.H"
#include "createTime.H"

Info<< "\nStarting time loop\n" << endl;

while (runTime.loop())
{
    //Info<< "Time = " << runTime.timeName() << nl << endl;

    //#include "CourantNo.H"

    // Momentum predictor

    //#include "UEqn.H"
    // --- PISO loop
    //while (piso.correct())
    //{
    //    #include "pEqn.H"
    //}
    //#include "TEqn.H"
    runTime.write();
    Info << runTime.write() << endl;

    Info << runTime.path() << endl;

    runTime.printExecutionTime(Info);
}

Info<< "End\n" << endl;


