file.open ("optimized_sensors_" + runTime.timeName() + ".txt", std::ofstream::out | std::ofstream::trunc);

file << x_sensor_1.value() << " " << y_sensor_1.value() << std::endl << "\n";
file << x_sensor_2.value() << " " << y_sensor_2.value() << std::endl << "\n";
file << x_sensor_3.value() << " " << y_sensor_3.value() << std::endl << "\n";
file << x_sensor_4.value() << " " << y_sensor_4.value() << std::endl << "\n";
file << x_sensor_5.value() << " " << y_sensor_5.value() << std::endl << "\n";
file << x_sensor_6.value() << " " << y_sensor_6.value() << std::endl << "\n";
file << x_sensor_7.value() << " " << y_sensor_7.value() << std::endl << "\n";
file << x_sensor_8.value() << " " << y_sensor_8.value() << std::endl << "\n";
file << x_sensor_9.value() << " " << y_sensor_9.value() << std::endl << "\n";
file << x_sensor_10.value() << " " << y_sensor_10.value() << std::endl << "\n";
file << x_sensor_11.value() << " " << y_sensor_11.value() << std::endl << "\n";
file << x_sensor_12.value() << " " << y_sensor_12.value() << std::endl << "\n";

file.close();