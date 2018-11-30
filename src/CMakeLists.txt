# Source files (except the main for the executable):
set(nemo_src
  foo.cc
  bar.cc
  answer.cc
  count_primes.cc
)

# Compile the library
add_library(${NEMO_LIB_NAME} ${NEMO_LIB_TYPE} ${nemo_src})

# Compile the executable
add_executable(nemo_exe main.cc)

# Link the executable to the nemo library (and thread/math libs).
target_link_libraries(nemo_exe ${NEMO_LIB_NAME} ${CMAKE_THREAD_LIBS_INIT} ${MATH_LIBS})

# How and what to install
install(TARGETS ${NEMO_LIB_NAME} LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
install(TARGETS nemo_exe RUNTIME DESTINATION bin)
install(DIRECTORY ../include/nemo DESTINATION include)
