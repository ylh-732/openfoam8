/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) 2011-2020 OpenFOAM Foundation
     \\/     M anipulation  |
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
    simpleFoam

Description
    Steady-state solver for incompressible, turbulent flow, using the SIMPLE
    algorithm.

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"
#include "fvMesh.H"     // Linghui 
#include "singlePhaseTransportModel.H"
#include "kinematicMomentumTransportModel.H"
#include "simpleControl.H"
#include "fvOptions.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

void computeDirection(
    scalar x_sensor,
    scalar y_sensor,
    Foam::fvMesh& mesh,
    Foam::volVectorField& grad_theta,
    Foam::List<scalar>& list_grad_x,
    Foam::List<scalar>& list_grad_y,
    Foam::List<scalar>& list_grad_mag,
    scalar& max_grad_mag
    )
{
    Foam::vector point_sensor;
    Foam::label cell_sensor;
    scalar grad_x;
    scalar grad_y;
    scalar grad_mag;

    point_sensor = vector(x_sensor, y_sensor, 0.0);
    cell_sensor = mesh.findCell(point_sensor);

    grad_x = grad_theta[cell_sensor].component(0);
    grad_y = grad_theta[cell_sensor].component(1);
    grad_mag = mag(Foam::vector(grad_x, grad_y, 0.0));

    list_grad_x.append(grad_x);
    list_grad_y.append(grad_y);
    list_grad_mag.append(grad_mag);

    max_grad_mag = max(max_grad_mag, grad_mag);
}

int main(int argc, char *argv[])
{
    #include "postProcess.H"
    #include "setRootCaseLists.H"
    #include "createTime.H"
    #include "createMesh.H"
    #include "createControl.H"
    #include "createFields.H"
    #include "read_sensor_location.H"
    #include "create_source.H"             
    #include "initContinuityErrs.H"

    turbulence->validate();

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    Info<< "\nStarting time loop\n" << endl;
    
    // Initialization
    #include "calculate_source_adjoint.H"
    #include "empty_txt_content.H"

    while (simple.loop(runTime))
    {
        Info<< "Time = " << runTime.timeName() << nl << endl;

        int stop = int(end_time.value());

        #include "output_sensor.H"
        #include "caEqn.H"
        #include "update_source_adjoint_adjoint.H"
        #include "output_loss.H"
        #include "thetaEqn.H"
        #include "update_sensor_location.H"
        #include "calculate_source_adjoint.H"
        
        runTime.write();

        Info<< "ExecutionTime = " << runTime.elapsedCpuTime() << " s"
            << "  ClockTime = " << runTime.elapsedClockTime() << " s"
            << nl << endl;
    }

    Info<< "End\n" << endl;

    return 0;
}

// ************************************************************************* //
