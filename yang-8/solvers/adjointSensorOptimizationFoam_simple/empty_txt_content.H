std::ofstream file;

file.open ("loss_J.txt", std::ofstream::out | std::ofstream::trunc);
file.close();

file.open ("c_adjoint_average.txt", std::ofstream::out | std::ofstream::trunc);
file.close();