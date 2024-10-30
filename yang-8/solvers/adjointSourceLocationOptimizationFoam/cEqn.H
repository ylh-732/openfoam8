for(int i = 0; i < 1; i++) 
{
    fvScalarMatrix cEqn
    (
        fvm::ddt(c)
      + fvm::div(phi, c)
      - fvm::laplacian(Dc, c)
      == source_forward
    );
    cEqn.relax();
    cEqn.solve();
}


