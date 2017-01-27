#include "benchmark/benchmark.h"
#include "nemo/count_primes.hh"

static void BM_CountPrimes(benchmark::State& state) {
  while (state.KeepRunning()) {
    nemo::count_primes(state.range(0));
  }
}
BENCHMARK(BM_CountPrimes)
    ->Args({100})
    ->Args({1000})
    ->Args({10000})
    ->Args({100000});

static void BM_CountPrimesWithoutGoto(benchmark::State& state) {
  while (state.KeepRunning()) {
    nemo::count_primes_no_goto(state.range(0));
  }
}
BENCHMARK(BM_CountPrimesWithoutGoto)
    ->Args({100})
    ->Args({1000})
    ->Args({10000})
    ->Args({100000});

BENCHMARK_MAIN();
