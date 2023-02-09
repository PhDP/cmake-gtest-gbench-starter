FetchContent_Declare(
  googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           b796f7d44681514f58a683a3a71ff17c94edb0c1 # version 1.13.0
)

FetchContent_MakeAvailable(
  googletest
)

set(test_src
  run_all.cc
  foo_test.cc
  bar_test.cc
  answer_test.cc
  primes_test.cc
)

add_executable(test_nemo ${test_src})

target_link_libraries(test_nemo
  gtest
  ${NEMO_LIB_NAME}
  ${CMAKE_THREAD_LIBS_INIT}
  ${MATH_LIBRARIES}
)

add_test(
  NAME tests
  COMMAND test_nemo
)
