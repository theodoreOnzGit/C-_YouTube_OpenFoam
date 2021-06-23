/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2021 2021 AUTHOR,AFFILIATION
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Application
    sandbox2

Description

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"
#include "cubicEqn.H"
#include "linearEqn.H"
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

int main(int argc, char *argv[])
{
    //#include "setRootCase.H"
    //#include "createTime.H"

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    Foam::Info << "hi" << Foam::endl;
    Info << "hi, i am using the foam namespace" << endl;     

    scalar a=5.42;
    scalar b=4.23;

    Info << "a = " << a << " ; b = " << b << endl;

    Info << "multiply a and b " << a*b << endl;
    Info << "add a and b " << a+b << endl;
    Info << "divide a by b " << (a/b) << endl;


    linearEqn eq1(2,7);
    
    Info << "y = 2x + 7 " << endl;
    a=eq1.value(5);
    Info << "at x =5, y = " << a << endl;

    // get derivative

    Info << "dy/dx at x=5  is... " << eq1.derivative(5) << endl;
     
    Info << "roots " << eq1.roots() << endl;

    cubicEqn eq2(1,2,3,4);

    Info << "cubic equation value ... at x=7 " << endl;

    Info << eq2.value(7) << endl;

    Info << "dy/dx at x = 0  and x =7 " << endl; 
    
    Info << eq2.derivative(0) << endl;
    Info << "at x = 7 , dy/dx = " << eq2.derivative(7) << endl;
    Info << "roots " << endl;
    Info << eq2.roots() << endl;
    

    //argList::addNote
    //(
    //    "Transient solver for incompressible, laminar flow"
    //    " of Newtonian fluids."
    //);

    //#include "postProcess.H"

    //#include "addCheckCaseOptions.H"
    #include "setRootCaseLists.H"
    #include "createTime.H"
    //#include "createMesh.H"

    //pisoControl piso(mesh);

    //#include "createFields.H"
    //#include "initContinuityErrs.H"

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

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

    return 0;
}


// ************************************************************************* //
