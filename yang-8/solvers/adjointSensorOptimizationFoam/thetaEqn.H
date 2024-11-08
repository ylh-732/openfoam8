forAll(theta, i)
{
    theta[i] = 0;
}

for(int i = 0; i < stop; i++) 
{
    fvScalarMatrix thetaEqn
    (
        fvm::ddt(theta)
      + fvm::div(phi, theta)
      - fvm::laplacian(Dc, theta)
      == source_adjoint_adjoint
    );
    thetaEqn.relax();
    thetaEqn.solve();
}


