/**
 *  Copyright 2025 Patrick L. Branson
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef VECTOR_H
#define VECTOR_H

#define X 0
#define Y 1
#define Z 2

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /// @brief The Vector Array
    typedef double Vector[3];

    /// @brief Initializes the Vector array
    /// @param dst the destination Vector array
    /// @param x the mathematical reference to the x-coordinate value
    /// @param y the mathematical reference to the y-coordinate value
    /// @param z the mathematical reference to the z-coordinate value
    void vector_init(Vector dst, double x, double y, double z);

    /// @brief Copies one Vector array to another Vector array
    /// @param dst the destination Vector array
    /// @param src the source Vector array
    void vector_copy(Vector dst, Vector src);

    /// @brief Calculates the sum of a Vector and another Vector
    /// @param dst the destination Vector array
    /// @param lhs the left-hand-side Vector array
    /// @param rhs the right-hand-side Vector array
    void vector_add(Vector dst, Vector lhs, Vector rhs);

    /// @brief Calculates the difference between a Vector and another Vector
    /// @param dst the destination Vector array
    /// @param lhs the left-hand-side Vector array
    /// @param rhs the right-hand-side Vector array
    void vector_subtract(Vector dst, Vector lhs, Vector rhs);

    /// @brief Calculates the product from a Vector and another Vector
    /// @param dst the destination Vector array
    /// @param lhs the left-hand-side Vector array
    /// @param rhs the right-hand-side Vector array
    void vector_multiply(Vector dst, Vector lhs, Vector rhs);

    /// @brief Calculates the quotient between a Vector and another Vector
    /// @param dst the destination Vector array
    /// @param lhs the left-hand-side Vector array
    /// @param rhs the right-hand-side Vector array
    void vector_divide(Vector dst, Vector lhs, Vector rhs);

    /// @brief Calculates the sum of a Vector and a scalar value
    /// @param dst the destination Vector array
    /// @param src the source Vector array
    /// @param scl the scalar value
    void vector_scalar_add(Vector dst, Vector src, double scl);

    /// @brief Calculates the difference between a Vector and a scalar value
    /// @param dst the destination Vector array
    /// @param src the source Vector array
    /// @param scl the scalar value
    void vector_scalar_subtract(Vector dst, Vector src, double scl);

    /// @brief Calculates the product a Vector and a scalar value
    /// @param dst the destination Vector array
    /// @param src the source Vector array
    /// @param scl the scalar value
    void vector_scalar_multiply(Vector dst, Vector src, double scl);

    /// @brief Calculates the quotient between a Vector and a scalar value
    /// @param dst the destination Vector array
    /// @param src the source Vector array
    /// @param scl the scalar value
    void vector_scalar_divide(Vector dst, Vector src, double scl);

    /// @brief Calculates the length of a Vector
    /// @param src the source Vector array
    /// @return the length of the Vector
    double vector_length(Vector src);

    /// @brief Calculates the squared length of a Vector
    /// @param src the source Vector array
    /// @return the squared length of the Vector
    double vector_squared_length(Vector src);

    /// @brief Calculates the normalized (unit) Vector
    /// @param dst the destination Vector array
    /// @param src the source Vector array
    void vector_normalize(Vector dst, Vector src);

    /// @brief Calculates the dot product of two Vectors
    /// @param lhs the left-hand-side Vector array
    /// @param rhs the right-hand-side Vector array
    /// @return the dot product of two Vectors
    double vector_dot_product(Vector lhs, Vector rhs);

    /// @brief Calculates the cross product of two Vectors
    /// @param dst the destination Vector array
    /// @param lhs the left-hand-side Vector array
    /// @param rhs the right-hand-side Vector array
    void vector_cross_product(Vector dst, Vector lhs, Vector rhs);

#ifdef __cplusplus
} // C++ Wrapper
#endif

#endif /* VECTOR_H */