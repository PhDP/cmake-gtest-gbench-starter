add_library(gtest ./gtest/gtest-all.cc)
include_directories(.)
target_link_libraries(gtest ${CMAKE_THREAD_LIBS_INIT})

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
