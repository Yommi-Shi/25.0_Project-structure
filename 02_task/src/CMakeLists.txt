add_executable(02_task main.cpp ${INCLUDE_DIR}/cpu.h cpu.cpp
                                ${INCLUDE_DIR}/ram.h ram.cpp
                                ${INCLUDE_DIR}/disk.h disk.cpp
                                ${INCLUDE_DIR}/gpu.h gpu.cpp
                                ${INCLUDE_DIR}/kbd.h kbd.cpp)

target_include_directories(02_task PUBLIC ${INCLUDE_DIR})