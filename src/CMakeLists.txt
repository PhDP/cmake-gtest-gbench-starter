set(nemo_src
  foo.cc
  bar.cc
  answer.cc
  count_primes.cc
)

add_library(nemo ${LIB_TYPE} ${nemo_src})

add_executable(nemo_exe main.cc)

target_link_libraries(nemo_exe nemo ${CMAKE_THREAD_LIBS_INIT} ${MATH_LIBS})

install(TARGETS nemo LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
install(TARGETS nemo_exe RUNTIME DESTINATION bin)
install(DIRECTORY ../include/nemo DESTINATION include)
