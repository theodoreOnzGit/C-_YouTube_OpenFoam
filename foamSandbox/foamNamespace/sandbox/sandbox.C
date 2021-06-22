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
    sandbox

Description

\*---------------------------------------------------------------------------*/
#include "linearEqn.H"
#include "fvCFD.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

int main(int argc, char *argv[])
{
    //#include "setRootCase.H"
    //#include "createTime.H"

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //


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

    return 0;
}


// ************************************************************************* //
