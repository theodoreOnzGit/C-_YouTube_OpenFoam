{

     // tmp demonstration and use some functions

    tmp<fvScalarMatrix> tTEqn
    (
        fvm::ddt(T)
        + fvm::div(phi, T)
        - fvm::laplacian(alpha, T)
    );

    Info << tTEqn.ref() << endl;
    tTEqn.clear();

     
        fvScalarMatrix TEqn
        (
            fvm::ddt(T)
            + fvm::div(phi, T)
            - fvm::laplacian(alpha, T)
        );

        TEqn.solve();
}
