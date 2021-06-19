{
        fvScalarMatrix TEqn
        (
            fvm::ddt(T)
            + fvm::div(phi, T)
            - fvm::laplacian(alpha, T)
        );

        TEqn.solve();
}
