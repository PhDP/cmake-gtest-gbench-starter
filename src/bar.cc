#include "nemo/foo.hh"

namespace nemo {

auto bar(std::string const& x) -> size_t {
  return x.size();
}

} /* end namespace nemo */
