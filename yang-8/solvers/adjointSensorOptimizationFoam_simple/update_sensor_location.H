volVectorField grad_theta(fvc::grad(theta));

Foam::vector point_sensor;
Foam::label cell_sensor;
scalar grad_x;
scalar grad_y;
scalar grad_mag;

point_sensor = vector(x_sensor_1.value(), y_sensor_1.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_1 = x_sensor_1 - alpha.value() * grad_x / grad_mag;
y_sensor_1 = y_sensor_1 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_2.value(), y_sensor_2.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_2 = x_sensor_2 - alpha.value() * grad_x / grad_mag;
y_sensor_2 = y_sensor_2 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_3.value(), y_sensor_3.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_3 = x_sensor_3 - alpha.value() * grad_x / grad_mag;
y_sensor_3 = y_sensor_3 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_4.value(), y_sensor_4.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_4 = x_sensor_4 - alpha.value() * grad_x / grad_mag;
y_sensor_4 = y_sensor_4 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_5.value(), y_sensor_5.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_5 = x_sensor_5 - alpha.value() * grad_x / grad_mag;
y_sensor_5 = y_sensor_5 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_6.value(), y_sensor_6.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_6 = x_sensor_6 - alpha.value() * grad_x / grad_mag;
y_sensor_6 = y_sensor_6 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_7.value(), y_sensor_7.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_7 = x_sensor_7 - alpha.value() * grad_x / grad_mag;
y_sensor_7 = y_sensor_7 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_8.value(), y_sensor_8.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_8 = x_sensor_8 - alpha.value() * grad_x / grad_mag;
y_sensor_8 = y_sensor_8 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_9.value(), y_sensor_9.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_9 = x_sensor_9 - alpha.value() * grad_x / grad_mag;
y_sensor_9 = y_sensor_9 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_10.value(), y_sensor_10.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_10 = x_sensor_10 - alpha.value() * grad_x / grad_mag;
y_sensor_10 = y_sensor_10 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_11.value(), y_sensor_11.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_11 = x_sensor_11 - alpha.value() * grad_x / grad_mag;
y_sensor_11 = y_sensor_11 - alpha.value() * grad_y / grad_mag;

point_sensor = vector(x_sensor_12.value(), y_sensor_12.value(), 0.0);
cell_sensor = mesh.findCell(point_sensor);
grad_x = grad_theta[cell_sensor].component(0);
grad_y = grad_theta[cell_sensor].component(1);
grad_mag = sqrt(sqr(grad_x) + sqr(grad_y));
x_sensor_12 = x_sensor_12 - alpha.value() * grad_x / grad_mag;
y_sensor_12 = y_sensor_12 - alpha.value() * grad_y / grad_mag;