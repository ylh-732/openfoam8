Info<< "Reading file sensorProperties\n" << endl;
IOdictionary sensorProperties
(
    IOobject
    (
        "sensorProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    )
);

dimensionedScalar x_sensor_1
(
    sensorProperties.lookup("x_sensor_1")
);
dimensionedScalar y_sensor_1
(
    sensorProperties.lookup("y_sensor_1")
);
dimensionedScalar x_sensor_2
(
    sensorProperties.lookup("x_sensor_2")
);
dimensionedScalar y_sensor_2
(
    sensorProperties.lookup("y_sensor_2")
);
dimensionedScalar x_sensor_3
(
    sensorProperties.lookup("x_sensor_3")
);
dimensionedScalar y_sensor_3
(
    sensorProperties.lookup("y_sensor_3")
);
dimensionedScalar x_sensor_4
(
    sensorProperties.lookup("x_sensor_4")
);
dimensionedScalar y_sensor_4
(
    sensorProperties.lookup("y_sensor_4")
);
dimensionedScalar x_sensor_5
(
    sensorProperties.lookup("x_sensor_5")
);
dimensionedScalar y_sensor_5
(
    sensorProperties.lookup("y_sensor_5")
);
dimensionedScalar x_sensor_6
(
    sensorProperties.lookup("x_sensor_6")
);
dimensionedScalar y_sensor_6
(
    sensorProperties.lookup("y_sensor_6")
);
dimensionedScalar x_sensor_7
(
    sensorProperties.lookup("x_sensor_7")
);
dimensionedScalar y_sensor_7
(
    sensorProperties.lookup("y_sensor_7")
);
dimensionedScalar x_sensor_8
(
    sensorProperties.lookup("x_sensor_8")
);
dimensionedScalar y_sensor_8
(
    sensorProperties.lookup("y_sensor_8")
);
dimensionedScalar x_sensor_9
(
    sensorProperties.lookup("x_sensor_9")
);
dimensionedScalar y_sensor_9
(
    sensorProperties.lookup("y_sensor_9")
);
dimensionedScalar x_sensor_10
(
    sensorProperties.lookup("x_sensor_10")
);
dimensionedScalar y_sensor_10
(
    sensorProperties.lookup("y_sensor_10")
);
dimensionedScalar x_sensor_11
(
    sensorProperties.lookup("x_sensor_11")
);
dimensionedScalar y_sensor_11
(
    sensorProperties.lookup("y_sensor_11")
);
dimensionedScalar x_sensor_12
(
    sensorProperties.lookup("x_sensor_12")
);
dimensionedScalar y_sensor_12
(
    sensorProperties.lookup("y_sensor_12")
);


dimensionedScalar sigma
(
    sensorProperties.lookup("sigma")
);