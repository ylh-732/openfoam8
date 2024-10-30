for(int i = 0; i < 1; i++) 
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
