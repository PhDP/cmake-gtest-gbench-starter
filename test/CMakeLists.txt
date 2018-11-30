add_subdirectory(gtest)

include_directories(./gtest/googletest/include)

set(test_src
  run_all.cc
  foo_test.cc
  bar_test.cc
  answer_test.cc
  primes_test.cc
)

add_executable(nemo_tests ${test_src})

target_link_libraries(nemo_tests
  gtest
  nemo
  ${CMAKE_THREAD_LIBS_INIT}
  ${MATH_LIBS}
)

add_test(
  NAME tests
  COMMAND nemo_tests
)
