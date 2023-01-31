cmake_minimum_required(VERSION 3.25)
project( jspars LANGUAGES CXX)

SET(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
	cpr
	GIT_REPOSITORY	https://github.com/libcpr/cpr.git
	GIT_TAG			1.10.0
)
FetchContent_Declare(
	jsoncpp
	GIT_REPOSITORY	https://github.com/open-source-parsers/jsoncpp.git
	GIT_TAG			1.9.5
)
FetchContent_MakeAvailable(cpr jsoncpp)

add_executable( parse parse.cpp)
target_link_libraries( parse PUBLIC jsoncpp_lib cpr::cpr)
