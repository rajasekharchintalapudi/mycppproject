workspace "HelloWorld"
    configurations { "Debug", "Release" }

project "HelloWorld"
    location "HelloWorld"
    kind "ConsoleApp"
    language "c++"
    targetdir "bin/%{cfg.buildcfg}"

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On" 
