#include <iostream>
#include <boost/python.hpp>

#include "textcomponent.h"

namespace py = boost::python;

void init_bindings();

int main()
{
    init_bindings();

    auto main_module = py::import("__main__");
    auto main_ns = main_module.attr("__dict__");

    try
    {
        py::exec_file("src/test.py", main_ns);
    }
    catch(py::error_already_set&)
    {
        PyErr_Print();
    }

    // according to Boost.Python docs, there is no need to Py_Finalize

    return 0;
}
