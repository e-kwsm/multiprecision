///////////////////////////////////////////////////////////////
//  Copyright 2012 John Maddock. Distributed under the Boost
//  Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at https://www.boost.org/LICENSE_1_0.txt

#include <boost/multiprecision/cpp_bin_float.hpp>

#include "test_arithmetic.hpp"

using namespace boost::multiprecision;

using cpp_bin_float_500_et_s = number<cpp_bin_float<500>, et_off>;

template <>
struct related_type<cpp_bin_float_500_et_s>
{
   using type = number<cpp_bin_float<500, digit_base_10, std::allocator<char> >, et_off>;
};

int main()
{
   test<cpp_bin_float_500_et_s>();
   return boost::report_errors();
}
