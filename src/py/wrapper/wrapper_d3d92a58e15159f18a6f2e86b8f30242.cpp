#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile * get_pointer<class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile >(class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d3d92a58e15159f18a6f2e86b8f30242()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const > const, 2 > const (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_984588572f775f3a95206515cd79676e)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::matrixU;
    class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 1 > const (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_58810546cf565937b2a5b7b2f197ded7)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::matrixL;
    ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::RealScalar  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3bf34c20a65d5777a755c4f017e837f8)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::rcond;
    ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::MatrixType const & (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_7e780eca5ec458fdae2bad6457010993)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::matrixLLT;
    ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::MatrixType  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_bf77092bae7657c1b0742eeda499ffa7)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_700c80e74cf65192a01ce6aed2d6e94a)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const & (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_d30d0ad290415f22a52d6b4ad2176c05)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Index  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_5d0240b3519253208da7645c6ee69187)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::rows;
    ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Index  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_62c560aeedfa57f9bf2823c0874cb19e)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::cols;
    class ::Eigen::Solve< class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > const (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3f75caa105415e71969b09d220b6747e)(class ::Eigen::MatrixBase< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > const &) const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::solve;
    void  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_76d2cacc3f7a5b20bcd380488dacf015)(class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::_solve_impl;
    void  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3c2f47b90aeb5af6bc401de2f741bd0d)(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > &) const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::solveInPlace;
    class ::Eigen::Solve< class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_262ec2f8e46c5944bf38ee394f183c62)(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const &) const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::solve;
    void  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_c854dff9a0fa5316acbda654c5f98b61)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::_solve_impl;
    class ::Eigen::Solve< class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > > const (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_edf9e425c15955f5b4a53a957093043a)(class ::Eigen::MatrixBase< class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > > const &) const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::solve;
    void  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_11911b1bb7fc5b7892c3346f51ce18c9)(class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::_solve_impl;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, autowig::Held< class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type > class_d3d92a58e15159f18a6f2e86b8f30242("_LLT_d3d92a58e15159f18a6f2e86b8f30242", "", boost::python::no_init);
    class_d3d92a58e15159f18a6f2e86b8f30242.def("matrix_u", method_pointer_984588572f775f3a95206515cd79676e, ":Returns:\n    a view of the upper triangular matrix U\n\n:Return Type:\n    :cpp:any:`::Eigen::TriangularView<` class\n    ::Eigen::Transpose< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >\n    const > const, 2 >\n\n");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("matrix_l", method_pointer_58810546cf565937b2a5b7b2f197ded7, ":Returns:\n    a view of the lower triangular matrix L\n\n:Return Type:\n    :cpp:any:`::Eigen::TriangularView<` class ::Eigen::Matrix<\n    double, -1, -1, 0, -1, -1 > const, 1 >\n\n");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("rcond", method_pointer_3bf34c20a65d5777a755c4f017e837f8, ":Returns:\n    an estimate of the reciprocal condition number of the matrix of which\n    :raw-latex:`\\c *t`his is the Cholesky decomposition.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("matrix_llt", method_pointer_7e780eca5ec458fdae2bad6457010993, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the LLT decomposition matrix\n    \n    TODO: document the storage layout\n\n:Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, -1, 0, -1, -1 >\n\n");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("reconstructed_matrix", method_pointer_bf77092bae7657c1b0742eeda499ffa7, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("info", method_pointer_700c80e74cf65192a01ce6aed2d6e94a, "Reports whether previous computation was successful.\n\n:Returns:\n    :raw-latex:`\\c S`uccess if computation was succesful,\n\n:Return Type:\n    :cpp:enumerator:`::Eigen::ComputationInfo`\n\n");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("adjoint", method_pointer_d30d0ad290415f22a52d6b4ad2176c05, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the adjoint of :raw-latex:`\\c *t`his, that is, a const reference to the\n    decomposition itself as the underlying matrix is self-adjoint.\n    \n    This method is provided for compatibility with other matrix\n    decompositions, thus enabling generic code such as:\n\n:Return Type:\n    :cpp:any:`::Eigen::LLT<` class ::Eigen::Matrix< double,\n    -1, -1, 0, -1, -1 >, 1 >\n\n");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("rows", method_pointer_5d0240b3519253208da7645c6ee69187, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("cols", method_pointer_62c560aeedfa57f9bf2823c0874cb19e, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("solve", method_pointer_3f75caa105415e71969b09d220b6747e, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("solve_impl", method_pointer_76d2cacc3f7a5b20bcd380488dacf015, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("solve_in_place", method_pointer_3c2f47b90aeb5af6bc401de2f741bd0d, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("solve", method_pointer_262ec2f8e46c5944bf38ee394f183c62, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("solve_impl", method_pointer_c854dff9a0fa5316acbda654c5f98b61, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("solve", method_pointer_edf9e425c15955f5b4a53a957093043a, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("solve_impl", method_pointer_11911b1bb7fc5b7892c3346f51ce18c9, "");

}