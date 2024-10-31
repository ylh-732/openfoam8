forAll(ca, i)
{
    ca[i] = 0;
}

for(int i = 0; i < stop; i++) 
{
    fvScalarMatrix caEqn
    (
        fvm::ddt(ca)
      + fvm::div(-phi, ca)
      - fvm::laplacian(Dc, ca)
      == source_adjoint
    );
    caEqn.relax();
    caEqn.solve();
}
