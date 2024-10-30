Info<< "Constructing source field of forward equation \n" << endl;
volScalarField source_forward
(
    IOobject
    (
        "source_forward",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("source_forward", dimensionSet(0, 0, -1, 0, 0, 0, 0), 0.0)
);

Info<< "Constructing source filed of adjoint equation \n" << endl;
volScalarField source_adjoint
(
    IOobject
    (
        "source_adjoint",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("source_adjoint", dimensionSet(0, 0, -1, 0, 0, 0, 0), 0.0)
);

