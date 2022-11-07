workspace "CppProject"
    configurations { "Debug", "Release" }

project "CppProject"
   location "CppProject"
   kind "ConsoleApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"

   files { "CppProject/include/**.h", "CppProject/src/**.cc" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On" 
