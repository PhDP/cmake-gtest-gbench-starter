set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "Suppressing benchmark's tests" FORCE)

add_subdirectory(benchmark)
include_directories(benchmark/include)

set(bench_cc
  primes_bench.cc
)

add_executable(nemo_benchmark ${bench_cc})

target_link_libraries(nemo_benchmark
  benchmark
  nemo
  ${CMAKE_THREAD_LIBS_INIT}
  ${MATH_LIBS}
)
