volVectorField grad_theta(fvc::grad(theta));

List<scalar> list_grad_x;
List<scalar> list_grad_y;
List<scalar> list_grad_mag;
List<scalar> list_step_size;

scalar max_grad_mag = 0;

computeDirection(x_sensor_1.value(), y_sensor_1.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_2.value(), y_sensor_2.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_3.value(), y_sensor_3.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_4.value(), y_sensor_4.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_5.value(), y_sensor_5.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_6.value(), y_sensor_6.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_7.value(), y_sensor_7.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_8.value(), y_sensor_8.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_9.value(), y_sensor_9.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_10.value(), y_sensor_10.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_11.value(), y_sensor_11.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);
computeDirection(x_sensor_12.value(), y_sensor_12.value(), mesh, grad_theta, list_grad_x, list_grad_y, list_grad_mag, max_grad_mag);

Info<< "max_grad_mag = "
    << max_grad_mag
    << endl;

for (int i = 0; i < 12; i++) {
    scalar step_size = alpha.value() + beta.value() * list_grad_mag[i] / max_grad_mag;
    list_step_size.append(step_size);
}

x_sensor_1 = x_sensor_1 - list_step_size[0] * list_grad_x[0] / list_grad_mag[0];
y_sensor_1 = y_sensor_1 - list_step_size[0] * list_grad_y[0] / list_grad_mag[0];

x_sensor_2 = x_sensor_2 - list_step_size[1] * list_grad_x[1] / list_grad_mag[1];
y_sensor_2 = y_sensor_2 - list_step_size[1] * list_grad_y[1] / list_grad_mag[1];

x_sensor_3 = x_sensor_3 - list_step_size[2] * list_grad_x[2] / list_grad_mag[2];
y_sensor_3 = y_sensor_3 - list_step_size[2] * list_grad_y[2] / list_grad_mag[2];

x_sensor_4 = x_sensor_4 - list_step_size[3] * list_grad_x[3] / list_grad_mag[3];
y_sensor_4 = y_sensor_4 - list_step_size[3] * list_grad_y[3] / list_grad_mag[3];

x_sensor_5 = x_sensor_5 - list_step_size[4] * list_grad_x[4] / list_grad_mag[4];
y_sensor_5 = y_sensor_5 - list_step_size[4] * list_grad_y[4] / list_grad_mag[4];

x_sensor_6 = x_sensor_6 - list_step_size[5] * list_grad_x[5] / list_grad_mag[5];
y_sensor_6 = y_sensor_6 - list_step_size[5] * list_grad_y[5] / list_grad_mag[5];

x_sensor_7 = x_sensor_7 - list_step_size[6] * list_grad_x[6] / list_grad_mag[6];
y_sensor_7 = y_sensor_7 - list_step_size[6] * list_grad_y[6] / list_grad_mag[6];

x_sensor_8 = x_sensor_8 - list_step_size[7] * list_grad_x[7] / list_grad_mag[7];
y_sensor_8 = y_sensor_8 - list_step_size[7] * list_grad_y[7] / list_grad_mag[7];

x_sensor_9 = x_sensor_9 - list_step_size[8] * list_grad_x[8] / list_grad_mag[8];
y_sensor_9 = y_sensor_9 - list_step_size[8] * list_grad_y[8] / list_grad_mag[8];

x_sensor_10 = x_sensor_10 - list_step_size[9] * list_grad_x[9] / list_grad_mag[9];
y_sensor_10 = y_sensor_10 - list_step_size[9] * list_grad_y[9] / list_grad_mag[9];

x_sensor_11 = x_sensor_11 - list_step_size[10] * list_grad_x[10] / list_grad_mag[10];
y_sensor_11 = y_sensor_11 - list_step_size[10] * list_grad_y[10] / list_grad_mag[10];

x_sensor_12 = x_sensor_12 - list_step_size[11] * list_grad_x[11] / list_grad_mag[11];
y_sensor_12 = y_sensor_12 - list_step_size[11] * list_grad_y[11] / list_grad_mag[11];