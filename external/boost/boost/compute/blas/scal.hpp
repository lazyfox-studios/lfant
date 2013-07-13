//---------------------------------------------------------------------------//
// Copyright (c) 2013 Kyle Lutz <kyle.r.lutz@gmail.com>
//
// Distributed under the Boost Software License, Version 1.0
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt
//
// See http://kylelutz.github.com/compute for more information.
//---------------------------------------------------------------------------//

#ifndef BOOST_COMPUTE_BLAS_SCAL_HPP
#define BOOST_COMPUTE_BLAS_SCAL_HPP

#include <boost/compute/device_ptr.hpp>
#include <boost/compute/command_queue.hpp>
#include <boost/compute/blas/yax.hpp>

namespace boost {
namespace compute {
namespace blas {

template<class Scalar>
inline void scal(const int N,
                 Scalar alpha,
                 device_ptr<Scalar> X,
                 const int incX,
                 command_queue &queue)
{
    BOOST_ASSERT_MSG(incX == 1, "Only contiguous arrays are currently supported.");

    ::boost::compute::blas::yax(N, alpha, X, incX, X, incX, queue);
}

} // end blas namespace
} // end compute namespace
} // end boost namespace

#endif // BOOST_COMPUTE_BLAS_SCAL_HPP
