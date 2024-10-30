scalar J = 0.0;

forAll(source_adjoint, i) {
    J = J + 0.5 * source_adjoint[i] * source_adjoint[i]; 
}

Info<< "Loss J: " << J << endl;

std::ofstream file;
file.open ("loss_J.txt", std::ofstream::out | std::ofstream::app);
file << runTime.timeName() << " " << J << std::endl << "\n";
file.close();