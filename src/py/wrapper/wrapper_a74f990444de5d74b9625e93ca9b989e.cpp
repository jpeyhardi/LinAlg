#include "_linalg.h"



namespace autowig
{

    void method_decorator_bb30eaa4cc035ab5b2070ad8e4b7ffe8(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > & instance, const class ::Eigen::SparseMatrix< double, 0, int > & param_out) { instance.derived() = param_out; }
    void method_decorator_d1f0134d5eda5ea1b085d86102576bbb(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > const & instance, const class ::Eigen::SparseMatrix< double, 0, int > & param_out) { instance.const_cast_derived() = param_out; }
    void method_decorator_e6b51274f36e563b800a9048569fa4fd(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > & instance, const ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::NonConstRealReturnType  param_out) { instance.real() = param_out; }
    void method_decorator_c65c6c2bc7525f02a8a4a0edec1b4ce1(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > & instance, const class ::Eigen::SparseMatrix< double, 0, int > & param_out) { instance.markAsRValue() = param_out; }
    void method_decorator_19e2c32e85425f8ea0158c035d07eff9(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > & instance, ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::Scalar const & param_in_0, const class ::Eigen::SparseMatrix< double, 0, int > & param_out) { instance.operator*=(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > const volatile * get_pointer<class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > const volatile >(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a74f990444de5d74b9625e93ca9b989e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::SparseMatrix< double, 0, int > const & (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_bf7ce97eec4253618afea439f1aad3a2)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::derived;
    class ::Eigen::SparseMatrix< double, 0, int > & (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_bb30eaa4cc035ab5b2070ad8e4b7ffe8)() = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::derived;
    class ::Eigen::SparseMatrix< double, 0, int > & (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_d1f0134d5eda5ea1b085d86102576bbb)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::const_cast_derived;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::ConjugateReturnType  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_47d2ed342bd85fe5956c1bfba111e480)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::conjugate;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::RealReturnType  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_0c6e10e85e2b57979e4d4ff96fe98c05)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::real;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::NonConstRealReturnType  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_e6b51274f36e563b800a9048569fa4fd)() = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::real;
    ::Eigen::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_28c336e280865ca087d32aa6321207a1)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::rows;
    ::Eigen::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_9c3e310fa1c052f59e926673b7986b9a)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::cols;
    ::Eigen::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_997b64a3bdb051468dcd8de9e071da07)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::size;
    bool  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_94c8eabbf31e5de58a7a2ad436f72d1f)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::isVector;
    ::Eigen::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_7e6707dfe8395fd89a0bf458023b176b)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::outerSize;
    ::Eigen::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_a102691f750953369aa92b37e6624a9b)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::innerSize;
    bool  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_bab39b5a10f4597a9cf90ca8657917b3)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::isRValue;
    class ::Eigen::SparseMatrix< double, 0, int > & (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_c65c6c2bc7525f02a8a4a0edec1b4ce1)() = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::markAsRValue;
    class ::Eigen::SparseMatrix< double, 0, int > & (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_19e2c32e85425f8ea0158c035d07eff9)(::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::Scalar const &) = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::operator*=;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::RealScalar  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_0d4ab7e6ed745c3ca393056d32f3dd5b)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::squaredNorm;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::RealScalar  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_b6bef4996e845793998f408f4c6ed1f2)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::norm;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::RealScalar  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_24e174d1aa8e55d4a5d51ba630624576)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::blueNorm;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::DenseMatrixType  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_b924b25b026c57a08160de8f02989e8d)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::toDense;
    class ::Eigen::SparseMatrix< double, 0, int > const (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_d2c53424a2985c2392fdc14b992a28be)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::eval;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::Scalar  (::Eigen::SparseMatrixBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_260a36c2e4d8503ab368fb8f70c53ea0)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >::sum;
    struct function_group
    {
        static class ::std::basic_ostream< char, struct ::std::char_traits< char > > & function_240307badd155590a520368e78145ebb(class ::std::basic_ostream< char, struct ::std::char_traits< char > > & parameter_0, class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > const & parameter_1)
        { return operator<<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > >, autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > >::Type, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > > > > class_a74f990444de5d74b9625e93ca9b989e("_SparseMatrixBase_a74f990444de5d74b9625e93ca9b989e", "", boost::python::no_init);
    class_a74f990444de5d74b9625e93ca9b989e.def(boost::python::init<  >(""));
    class_a74f990444de5d74b9625e93ca9b989e.def(boost::python::init< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > const & >(""));
    class_a74f990444de5d74b9625e93ca9b989e.def("derived", method_pointer_bf7ce97eec4253618afea439f1aad3a2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a74f990444de5d74b9625e93ca9b989e.def("derived", method_pointer_bb30eaa4cc035ab5b2070ad8e4b7ffe8, boost::python::return_internal_reference<>(), "");
    class_a74f990444de5d74b9625e93ca9b989e.def("derived", autowig::method_decorator_bb30eaa4cc035ab5b2070ad8e4b7ffe8);
    class_a74f990444de5d74b9625e93ca9b989e.def("const_cast_derived", method_pointer_d1f0134d5eda5ea1b085d86102576bbb, boost::python::return_internal_reference<>(), "");
    class_a74f990444de5d74b9625e93ca9b989e.def("const_cast_derived", autowig::method_decorator_d1f0134d5eda5ea1b085d86102576bbb);
    class_a74f990444de5d74b9625e93ca9b989e.def("conjugate", method_pointer_47d2ed342bd85fe5956c1bfba111e480, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a74f990444de5d74b9625e93ca9b989e.def("real", method_pointer_0c6e10e85e2b57979e4d4ff96fe98c05, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a74f990444de5d74b9625e93ca9b989e.def("real", method_pointer_e6b51274f36e563b800a9048569fa4fd, boost::python::return_internal_reference<>(), "");
    class_a74f990444de5d74b9625e93ca9b989e.def("real", autowig::method_decorator_e6b51274f36e563b800a9048569fa4fd);
    class_a74f990444de5d74b9625e93ca9b989e.def("rows", method_pointer_28c336e280865ca087d32aa6321207a1, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("cols", method_pointer_9c3e310fa1c052f59e926673b7986b9a, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("__len__", method_pointer_997b64a3bdb051468dcd8de9e071da07, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("is_vector", method_pointer_94c8eabbf31e5de58a7a2ad436f72d1f, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("outer_size", method_pointer_7e6707dfe8395fd89a0bf458023b176b, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("inner_size", method_pointer_a102691f750953369aa92b37e6624a9b, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("is_r_value", method_pointer_bab39b5a10f4597a9cf90ca8657917b3, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("mark_as_r_value", method_pointer_c65c6c2bc7525f02a8a4a0edec1b4ce1, boost::python::return_internal_reference<>(), "");
    class_a74f990444de5d74b9625e93ca9b989e.def("mark_as_r_value", autowig::method_decorator_c65c6c2bc7525f02a8a4a0edec1b4ce1);
    class_a74f990444de5d74b9625e93ca9b989e.def("__imul__", method_pointer_19e2c32e85425f8ea0158c035d07eff9, boost::python::return_internal_reference<>(), "");
    class_a74f990444de5d74b9625e93ca9b989e.def("__imul__", autowig::method_decorator_19e2c32e85425f8ea0158c035d07eff9);
    class_a74f990444de5d74b9625e93ca9b989e.def("squared_norm", method_pointer_0d4ab7e6ed745c3ca393056d32f3dd5b, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("norm", method_pointer_b6bef4996e845793998f408f4c6ed1f2, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("blue_norm", method_pointer_24e174d1aa8e55d4a5d51ba630624576, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("to_dense", method_pointer_b924b25b026c57a08160de8f02989e8d, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("eval", method_pointer_d2c53424a2985c2392fdc14b992a28be, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("sum", method_pointer_260a36c2e4d8503ab368fb8f70c53ea0, "");
    class_a74f990444de5d74b9625e93ca9b989e.def("__lshift__", function_group::function_240307badd155590a520368e78145ebb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > >::Type, autowig::Held< struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > > >::Type >();
    }

}