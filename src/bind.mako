#include <boost/python.hpp>
#include "${include_file}"

using namespace boost::python;

BOOST_PYTHON_MODULE(${module_name})
{
% for c in classes:
    class_<${c.name}>("${c.name}")
    % for f in c.functions:
        % if not "hidden" in f.annotations:
        .def("${f.name}", &${c.name}::${f.name})
        % endif
    % endfor
    ;
% endfor
}

void init_bindings()
{
    Py_Initialize();
    init${module_name}();
}
