scalar J = ca_rms / ca_average;

file.open ("loss_J.txt", std::ofstream::out | std::ofstream::app);
file << runTime.timeName() << " " << J << std::endl << "\n";
file.close();

file.open ("c_adjoint_rms.txt", std::ofstream::out | std::ofstream::app);
file << runTime.timeName() << " " << ca_rms << std::endl << "\n";
file.close();

file.open ("c_adjoint_average.txt", std::ofstream::out | std::ofstream::app);
file << runTime.timeName() << " " << ca_average << std::endl << "\n";
file.close();

