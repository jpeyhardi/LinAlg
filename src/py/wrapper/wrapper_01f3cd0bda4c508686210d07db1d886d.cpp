#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const volatile * get_pointer<class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const volatile >(class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_01f3cd0bda4c508686210d07db1d886d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::ConstTransposeReturnType  (::Eigen::SolverBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_d88c673e1f675e38b7493fb3e99841bc)() const = &::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::transpose;
    ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::AdjointReturnType  (::Eigen::SolverBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_b11d96b9277a50f2ab806d7c81425b95)() const = &::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::adjoint;
    boost::python::class_< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::Held< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > > class_01f3cd0bda4c508686210d07db1d886d("_SolverBase_01f3cd0bda4c508686210d07db1d886d", "", boost::python::no_init);
    class_01f3cd0bda4c508686210d07db1d886d.def(boost::python::init<  >(""));
    class_01f3cd0bda4c508686210d07db1d886d.def(boost::python::init< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & >(""));
    class_01f3cd0bda4c508686210d07db1d886d.def("transpose", method_pointer_d88c673e1f675e38b7493fb3e99841bc, "");
    class_01f3cd0bda4c508686210d07db1d886d.def("adjoint", method_pointer_b11d96b9277a50f2ab806d7c81425b95, "");

    if(autowig::Held< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type, autowig::Held< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type >();
    }

}