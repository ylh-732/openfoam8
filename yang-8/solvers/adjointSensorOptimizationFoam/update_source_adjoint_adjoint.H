using Foam::sqrt;

scalar ca_average = ca.average().value();
scalar ca_rms = 0.0;

forAll(ca, i) {
    ca_rms = ca_rms + (ca[i] - ca_average) * (ca[i] - ca_average); 
}
ca_rms = sqrt(ca_rms / mesh.nPoints());


forAll(source_adjoint_adjoint, i)
{
    source_adjoint_adjoint[i] = (ca[i] - ca_average) / ca_average / ca_rms - ca_rms / ca_average / ca_average;
}