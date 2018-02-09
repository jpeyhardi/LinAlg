#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile * get_pointer<class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile >(class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ebc9828c80d75c2d974c4eca04150bd1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_ca268eca22445c44bdfd7c45e5610a5c)() = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::setZero;
    class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const > const, 6 > const (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_b914c2a547415881bb0fcc0c1a55cb2b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::matrixU;
    class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 5 > const (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1d0a04a99c3a527ebc659b8177847677)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::matrixL;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::TranspositionType const & (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_d37e6eb6fd7a53bead50af6a59817843)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::transpositionsP;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 0 >  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_dbc8a72c605c566f823b364031293439)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::vectorD;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_de20d4b546e75d2180192fa925e715da)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_24949a43f60d581cac91732c8e144766)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::isNegative;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::RealScalar  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_115f6597b511515385c1d34c7e497b5e)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::rcond;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::MatrixType const & (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_4943c3dcc62b5829b0f69508839cacf5)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::matrixLDLT;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::MatrixType  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_eabe73580856515886dba190b2bc5adc)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const & (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f02d576be1cc5516b00e69093b9ef61a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Index  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f034ec7fa4bc55cfb29b07b093f5a08a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::rows;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Index  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_0bd184e6963f5362bbed791b177dc88d)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_b403caa2f32055e88dd1ad81d3634e4b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::info;
    class ::Eigen::Solve< class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > const (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_31cdd775c9145987bce48f61d17c5c39)(class ::Eigen::MatrixBase< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > const &) const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::solve;
    void  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_e15901351d505c6bb778bb23a4f5cee8)(class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::_solve_impl;
    class ::Eigen::Solve< class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_7294e51d565a57d6a1a37c4dbe74a3e4)(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const &) const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::solve;
    void  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_26fb660eb03e51e18544eb1fd78a989a)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::_solve_impl;
    class ::Eigen::Solve< class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > > const (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_c25e228db6f35646b423f5ef38b6ed1f)(class ::Eigen::MatrixBase< class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > > const &) const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::solve;
    void  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_0a073483f4dc543091662bece418ae39)(class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::_solve_impl;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, autowig::Held< class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type > class_ebc9828c80d75c2d974c4eca04150bd1("_LDLT_ebc9828c80d75c2d974c4eca04150bd1", "", boost::python::no_init);
    class_ebc9828c80d75c2d974c4eca04150bd1.def("set_zero", method_pointer_ca268eca22445c44bdfd7c45e5610a5c, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("matrix_u", method_pointer_b914c2a547415881bb0fcc0c1a55cb2b, ":Returns:\n    a view of the upper triangular matrix U\n\n:Return Type:\n    :cpp:any:`::Eigen::TriangularView<` class\n    ::Eigen::Transpose< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >\n    const > const, 6 >\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("matrix_l", method_pointer_1d0a04a99c3a527ebc659b8177847677, ":Returns:\n    a view of the lower triangular matrix L\n\n:Return Type:\n    :cpp:any:`::Eigen::TriangularView<` class ::Eigen::Matrix<\n    double, -1, -1, 0, -1, -1 > const, 5 >\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("transpositions_p", method_pointer_d37e6eb6fd7a53bead50af6a59817843, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the permutation matrix P as a transposition sequence.\n\n:Return Type:\n    :cpp:any:`::Eigen::Transpositions<` -1, -1, int >\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("vector_d", method_pointer_dbc8a72c605c566f823b364031293439, ":Returns:\n    the coefficients of the diagonal matrix D\n\n:Return Type:\n    :cpp:any:`::Eigen::Diagonal<` class ::Eigen::Matrix<\n    double, -1, -1, 0, -1, -1 > const, 0 >\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("is_positive", method_pointer_de20d4b546e75d2180192fa925e715da, ":Returns:\n    true if the matrix is positive (semidefinite)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("is_negative", method_pointer_24949a43f60d581cac91732c8e144766, ":Returns:\n    true if the matrix is negative (semidefinite)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("rcond", method_pointer_115f6597b511515385c1d34c7e497b5e, ":Returns:\n    an estimate of the reciprocal condition number of the matrix of which\n    :raw-latex:`\\c *t`his is the LDLT decomposition.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("matrix_ldlt", method_pointer_4943c3dcc62b5829b0f69508839cacf5, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the internal LDLT decomposition matrix\n    \n    TODO: document the storage layout\n\n:Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, -1, 0, -1, -1 >\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("reconstructed_matrix", method_pointer_eabe73580856515886dba190b2bc5adc, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("adjoint", method_pointer_f02d576be1cc5516b00e69093b9ef61a, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the adjoint of :raw-latex:`\\c *t`his, that is, a const reference to the\n    decomposition itself as the underlying matrix is self-adjoint.\n    \n    This method is provided for compatibility with other matrix\n    decompositions, thus enabling generic code such as:\n\n:Return Type:\n    :cpp:any:`::Eigen::LDLT<` class ::Eigen::Matrix< double,\n    -1, -1, 0, -1, -1 >, 1 >\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("rows", method_pointer_f034ec7fa4bc55cfb29b07b093f5a08a, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("cols", method_pointer_0bd184e6963f5362bbed791b177dc88d, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("info", method_pointer_b403caa2f32055e88dd1ad81d3634e4b, "Reports whether previous computation was successful.\n\n:Returns:\n    :raw-latex:`\\c S`uccess if computation was succesful,\n\n:Return Type:\n    :cpp:enumerator:`::Eigen::ComputationInfo`\n\n");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("solve", method_pointer_31cdd775c9145987bce48f61d17c5c39, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("solve_impl", method_pointer_e15901351d505c6bb778bb23a4f5cee8, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("solve", method_pointer_7294e51d565a57d6a1a37c4dbe74a3e4, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("solve_impl", method_pointer_26fb660eb03e51e18544eb1fd78a989a, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("solve", method_pointer_c25e228db6f35646b423f5ef38b6ed1f, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("solve_impl", method_pointer_0a073483f4dc543091662bece418ae39, "");

}