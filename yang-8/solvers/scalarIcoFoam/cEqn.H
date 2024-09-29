// Linghui
// Solve the advection and diffusion equation
// References : solvers/basic/scalarTransportFoam/scalarTransportFoam.c
// Line 60 ~ 72

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

fvScalarMatrix cEqn
(
    fvm::ddt(c)
  + fvm::div(phi, c)
  - fvm::laplacian(Dc, c)
 == source
);
cEqn.relax();
cEqn.solve();

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
