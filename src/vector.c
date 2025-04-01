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

#include <vector.h>

void vector_init(Vector dst, double x, double y, double z)
{
    dst[X] = x;
    dst[Y] = y;
    dst[Z] = z;
}

void vector_copy(Vector dst, Vector src)
{
    dst[X] = src[X];
    dst[Y] = src[Y];
    dst[Z] = src[Z];
}

void vector_add(Vector dst, Vector lhs, Vector rhs)
{
    dst[X] = lhs[X] + rhs[X];
    dst[Y] = lhs[Y] + rhs[Y];
    dst[Z] = lhs[Z] + rhs[Z];
}

void vector_subtract(Vector dst, Vector lhs, Vector rhs)
{
    dst[X] = lhs[X] - rhs[X];
    dst[Y] = lhs[Y] - rhs[Y];
    dst[Z] = lhs[Z] - rhs[Z];
}

void vector_multiply(Vector dst, Vector lhs, Vector rhs)
{
    dst[X] = lhs[X] * rhs[X];
    dst[Y] = lhs[Y] * rhs[Y];
    dst[Z] = lhs[Z] * rhs[Z];
}

void vector_divide(Vector dst, Vector lhs, Vector rhs)
{
    dst[X] = lhs[X] / rhs[X];
    dst[Y] = lhs[Y] / rhs[Y];
    dst[Z] = lhs[Z] / rhs[Z];
}

void vector_scalar_add(Vector dst, Vector src, double scl)
{
    dst[X] = src[X] + scl;
    dst[Y] = src[Y] + scl;
    dst[Z] = src[Z] + scl;
}

void vector_scalar_subtract(Vector dst, Vector src, double scl)
{
    dst[X] = src[X] - scl;
    dst[Y] = src[Y] - scl;
    dst[Z] = src[Z] - scl;
}

void vector_scalar_multiply(Vector dst, Vector src, double scl)
{
    dst[X] = src[X] * scl;
    dst[Y] = src[Y] * scl;
    dst[Z] = src[Z] * scl;
}

void vector_scalar_divide(Vector dst, Vector src, double scl)
{
    dst[X] = src[X] / scl;
    dst[Y] = src[Y] / scl;
    dst[Z] = src[Z] / scl;
}

double vector_length(Vector src)
{
    return sqrt(vector_squared_length(src));
}

double vector_squared_length(Vector src)
{
    return vector_dot_product(src, src);
}

double vector_dot_product(Vector lhs, Vector rhs)
{
    return (lhs[X] * rhs[X]) + (lhs[Y] * rhs[Y]) + (lhs[Z] * rhs[Z]);
}

void vector_normalize(Vector dst, Vector src)
{
    double magnitude = vector_length(src);
    if (magnitude == 0 || magnitude == 1)
        vector_copy(dst, src);
    else
    {
        dst[X] = src[X] / magnitude;
        dst[Y] = src[Y] / magnitude;
        dst[Z] = src[Z] / magnitude;
    }
}

void vector_cross_product(Vector dst, Vector lhs, Vector rhs)
{
    dst[X] = (lhs[Y] * rhs[Z]) - (lhs[Z] * rhs[Y]);
    dst[Y] = (lhs[Z] * rhs[X]) - (lhs[X] * rhs[Z]);
    dst[Z] = (lhs[X] * rhs[Y]) - (lhs[Y] * rhs[X]);
}