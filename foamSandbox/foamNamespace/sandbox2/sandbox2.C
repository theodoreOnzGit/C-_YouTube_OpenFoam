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
#include "templateDemo.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

int main(int argc, char *argv[])
{
    //#include "setRootCase.H"
    //#include "createTime.H"

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    //#include "foamNameSpaceExample1.H"
    //#include "linearEqnDemo.H"
    //#include "cubicEqnDemo.H"  

    //argList::addNote
    //(
    //    "Transient solver for incompressible, laminar flow"
    //    " of Newtonian fluids."
    //);

    //#include "postProcess.H"

    //#include "addCheckCaseOptions.H"
    //#include "setRootCaseLists.H"
    //#include "createTime.H"
    //#include "createMesh.H"

    //pisoControl piso(mesh);

    //#include "createFields.H"
    //#include "initContinuityErrs.H"

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    //#include "timeFunctionDemo.H"

    float a=2.23;
    float b=returnNumber<float>(a);
    
    Info << "b is " << b << endl;
    int d=5.67;
    int e=returnNumber<int>(d);

    Info << "e is " << e << endl; 

    scalar scalar1;
    scalar1=10.2;
    scalar scalar2=returnNumber<scalar>(scalar1);   

    Info << "scalar value is " << scalar2 << endl;
    

    printClass<int> obj1(a);
    printClass<int> obj2;

    return 0;
}


// ************************************************************************* //
