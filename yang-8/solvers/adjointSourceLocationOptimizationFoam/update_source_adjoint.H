using Foam::constant::mathematical::pi;
using Foam::exp;
using Foam::sqrt;

forAll(source_adjoint, i)
{
    source_adjoint[i] = 0;
}

forAll(source_adjoint, i)
{
    const scalar x = mesh.C()[i][0];
    const scalar y = mesh.C()[i][1];
    scalar distance; 
    const scalar std = sigma.value();

    distance = sqr(x - x_sensor_1.value()) + sqr(y - y_sensor_1.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_2.value()) + sqr(y - y_sensor_2.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_3.value()) + sqr(y - y_sensor_3.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_4.value()) + sqr(y - y_sensor_4.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_5.value()) + sqr(y - y_sensor_5.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_6.value()) + sqr(y - y_sensor_6.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_7.value()) + sqr(y - y_sensor_7.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_8.value()) + sqr(y - y_sensor_8.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_9.value()) + sqr(y - y_sensor_9.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_10.value()) + sqr(y - y_sensor_10.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_11.value()) + sqr(y - y_sensor_11.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );

    distance = sqr(x - x_sensor_12.value()) + sqr(y - y_sensor_12.value());
    source_adjoint[i] = source_adjoint[i] + (c[i] - measurements[i]) / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2 );
}