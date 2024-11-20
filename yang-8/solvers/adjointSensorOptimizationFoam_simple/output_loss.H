scalar J = 0.0;

forAll(ca, i) {
    J = J + 0.5 * (ca[i] - ca_average) * (ca[i] - ca_average); 
}
J = J / mesh.nPoints();

file.open ("loss_J.txt", std::ofstream::out | std::ofstream::app);
file << runTime.timeName() << " " << J << std::endl << "\n";
file.close();

file.open ("c_adjoint_average.txt", std::ofstream::out | std::ofstream::app);
file << runTime.timeName() << " " << ca_average << std::endl << "\n";
file.close();