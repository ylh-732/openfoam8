volVectorField gradca(fvc::grad(ca));

Foam::vector p_source(x_source.value(), y_source.value(), 0.0);
Foam::label cell_source = mesh.findCell(p_source);

scalar grad_x = gradca[cell_source].component(0);
scalar grad_y = gradca[cell_source].component(1);

x_source = x_source - 0.2 * grad_x;
y_source = y_source - 0.2 * grad_y;

forAll(source_forward, i)
{
    const scalar x = mesh.C()[i][0];
    const scalar y = mesh.C()[i][1];
    const scalar distance = sqr(x - x_source.value()) + sqr(y - y_source.value());
    const scalar std = sigma.value();

    source_forward[i] = 1 / sqrt(2 * pi) / std * exp( - distance / sqr(std) / 2);
}