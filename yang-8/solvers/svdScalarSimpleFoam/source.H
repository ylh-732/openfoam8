// Linghui

using Foam::constant::mathematical::pi;
using Foam::exp;
using Foam::sqrt;

// References: createFields.H
Info<< "Reading file sourceProperties\n" << endl;
IOdictionary sourceProperties
(
    IOobject
    (
        "sourceProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ,
        IOobject::NO_WRITE
    )
);

Info<< "Reading source location x_source\n" << endl;
dimensionedScalar x_source
(
    sourceProperties.lookup("x_source")
);

Info<< "Reading source location y_source\n" << endl;
dimensionedScalar y_source
(
    sourceProperties.lookup("y_source")
);

Info<< "Reading spread of source sigma_source\n" << endl;
dimensionedScalar sigma_source
(
    sourceProperties.lookup("sigma_source")
);


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

// References: solvers/basic/potentialFoam/createFields.H
// Line 58 ~ 72
Info<< "Constructing source field \n" << endl;
volScalarField source
(
    IOobject
    (
        "source",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,  // or READ_IF_PRESENT
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("source", dimensionSet(0, 0, -1, 0, 0, 0, 0), 0.0)
);

// References: wolf dynamics: Supplement 7: High level programming in OpenFOAM
// Page 71
forAll(source, i)
{
    const scalar x = mesh.C()[i][0];
    const scalar y = mesh.C()[i][1];
    const scalar distance = sqr(x - x_source.value()) + sqr(y - y_source.value());
    const scalar std = sigma_source.value();

    source[i] = 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
}

