#include <stdexcept>

template<typename Target, typename Source>
Target narrow_cast(Source v)
{
  auto r = static_cast<Target>(v);
  if (static_cast<Source>(r)!=v)
    throw std::runtime_error("narrow_cast<>() failed");
  return r;
}

int main()
{
  auto a = narrow_cast<int>(3.0);
  auto a1 = narrow_cast<int>(1/3.0);
}
