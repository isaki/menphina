# Copyright 2024 isaki

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.74.0 REQUIRED COMPONENTS program_options)

add_executable(xiv-menphina
    m_exception.cpp
    platform.cpp
    json.cpp
    exec.cpp

    # Main should be last
    main.cpp
)

target_include_directories(xiv-menphina
    PRIVATE
    "${CMAKE_BINARY_DIR}/configured_files/include"
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_BINARY_DIR}/include"
)

target_link_libraries(xiv-menphina PRIVATE Boost::program_options glaze::glaze)
