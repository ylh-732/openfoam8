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

dimensionedScalar x_source_1
(
    sourceProperties.lookup("x_source_1")
);
dimensionedScalar y_source_1
(
    sourceProperties.lookup("y_source_1")
);
dimensionedScalar x_source_2
(
    sourceProperties.lookup("x_source_2")
);
dimensionedScalar y_source_2
(
    sourceProperties.lookup("y_source_2")
);
dimensionedScalar x_source_3
(
    sourceProperties.lookup("x_source_3")
);
dimensionedScalar y_source_3
(
    sourceProperties.lookup("y_source_3")
);
dimensionedScalar x_source_4
(
    sourceProperties.lookup("x_source_4")
);
dimensionedScalar y_source_4
(
    sourceProperties.lookup("y_source_4")
);
dimensionedScalar x_source_5
(
    sourceProperties.lookup("x_source_5")
);
dimensionedScalar y_source_5
(
    sourceProperties.lookup("y_source_5")
);
dimensionedScalar x_source_6
(
    sourceProperties.lookup("x_source_6")
);
dimensionedScalar y_source_6
(
    sourceProperties.lookup("y_source_6")
);
dimensionedScalar x_source_7
(
    sourceProperties.lookup("x_source_7")
);
dimensionedScalar y_source_7
(
    sourceProperties.lookup("y_source_7")
);
dimensionedScalar x_source_8
(
    sourceProperties.lookup("x_source_8")
);
dimensionedScalar y_source_8
(
    sourceProperties.lookup("y_source_8")
);
dimensionedScalar x_source_9
(
    sourceProperties.lookup("x_source_9")
);
dimensionedScalar y_source_9
(
    sourceProperties.lookup("y_source_9")
);
dimensionedScalar x_source_10
(
    sourceProperties.lookup("x_source_10")
);
dimensionedScalar y_source_10
(
    sourceProperties.lookup("y_source_10")
);
dimensionedScalar x_source_11
(
    sourceProperties.lookup("x_source_11")
);
dimensionedScalar y_source_11
(
    sourceProperties.lookup("y_source_11")
);
dimensionedScalar x_source_12
(
    sourceProperties.lookup("x_source_12")
);
dimensionedScalar y_source_12
(
    sourceProperties.lookup("y_source_12")
);


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
    scalar distance; 
    const scalar std = sigma_source.value();

    distance = sqr(x - x_source_1.value()) + sqr(y - y_source_1.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_2.value()) + sqr(y - y_source_2.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_3.value()) + sqr(y - y_source_3.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_4.value()) + sqr(y - y_source_4.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_5.value()) + sqr(y - y_source_5.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_6.value()) + sqr(y - y_source_6.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_7.value()) + sqr(y - y_source_7.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_8.value()) + sqr(y - y_source_8.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_9.value()) + sqr(y - y_source_9.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_10.value()) + sqr(y - y_source_10.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_11.value()) + sqr(y - y_source_11.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
    distance = sqr(x - x_source_12.value()) + sqr(y - y_source_12.value());
    source[i] = source[i] + 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
}

