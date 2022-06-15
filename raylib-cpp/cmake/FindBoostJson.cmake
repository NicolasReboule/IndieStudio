# Usage:
# FIND_PACKAGE(BoostJson REQUIRED)
# [...]
# TARGET_LINK_LIBRARIES(target_name BoostJson)

CMAKE_MINIMUM_REQUIRED(VERSION 3.17)

if (NOT BoostJson_FOUND)
    include(FetchContent)
    FetchContent_Declare(BoostJson URL https://pkg.cppget.org/1/stable/boost/libboost-json-1.78.0.tar.gz)
    FetchContent_GetProperties(BoostJson)
    if (NOT BoostJson_POPULATED)
        set(FETCHCONTENT_QUIET NO)
        FetchContent_Populate(BoostJson)
        message("hein ${BoostJson_BINARY_DIR}")
        set(BoostJson_FOUND TRUE)
    endif ()
endif ()
