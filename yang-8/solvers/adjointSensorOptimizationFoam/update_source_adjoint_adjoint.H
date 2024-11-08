scalar ca_average = ca.average().value();

forAll(source_adjoint_adjoint, i)
{
    source_adjoint_adjoint[i] = ca[i] - ca_average;
}