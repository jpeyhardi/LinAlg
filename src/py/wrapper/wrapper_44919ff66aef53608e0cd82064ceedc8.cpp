#include "_linalg.h"


void wrapper_44919ff66aef53608e0cd82064ceedc8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_fcf05ce9829d59fbac7dfcc9a3fbd7b4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".linalg");
    boost::python::object module_fcf05ce9829d59fbac7dfcc9a3fbd7b4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fcf05ce9829d59fbac7dfcc9a3fbd7b4.c_str()))));
    boost::python::scope().attr("linalg") = module_fcf05ce9829d59fbac7dfcc9a3fbd7b4;
    boost::python::scope scope_fcf05ce9829d59fbac7dfcc9a3fbd7b4 = module_fcf05ce9829d59fbac7dfcc9a3fbd7b4;
    ::statiskit::linalg::Matrix  (*function_pointer_44919ff66aef53608e0cd82064ceedc8)(::statiskit::linalg::Matrix const &, ::statiskit::linalg::Matrix const &, enum ::statiskit::linalg::solver_type const &) = ::statiskit::linalg::solve;
    boost::python::def("solve", function_pointer_44919ff66aef53608e0cd82064ceedc8, "");
}