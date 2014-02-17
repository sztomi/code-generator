-- this is a premake4 script
-- see http://industriousone.com/premake

solution "codegen"
    language "c++"
    includedirs { "./src", "/usr/include/python2.7" }
    buildoptions { "-std=c++11" }
    links { "boost_python", "boost_filesystem", "boost_system", "python2.7" }

    configurations { "debug", "release" }

    configuration "debug"
        targetdir "build/debug"
        flags "Symbols"
        defines "DEBUG"

    configuration "release"
        targetdir "build/release"
        defines { "RELEASE", "NDEBUG" }

    project "codegen"
        kind "ConsoleApp"
        files "./src/**cc"
