// Linghui
// Solve the advection and diffusion equation
// References : solvers/basic/scalarTransportFoam/scalarTransportFoam.c
// Line 60 ~ 72

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

fvScalarMatrix caEqn
(
  fvm::ddt(ca)
  + fvm::div(-phi, ca)
  - fvm::laplacian(Dc, ca)
 == source
);
caEqn.relax();
caEqn.solve();

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
