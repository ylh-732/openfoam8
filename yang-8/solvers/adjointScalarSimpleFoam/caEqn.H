// Linghui
// Solve the advection and diffusion equation
// References : solvers/basic/scalarTransportFoam/scalarTransportFoam.c
// Line 60 ~ 72

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

fvScalarMatrix caEqn
(
  fvm::ddt(c)
  + fvm::div(-phi, c)
  - fvm::laplacian(Dc, c)
 == source
);
caEqn.relax();
caEqn.solve();

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
