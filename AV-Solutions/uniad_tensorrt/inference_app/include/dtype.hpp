/*
 * SPDX-FileCopyrightText: Copyright (c) 2023-2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __DTYPE_HPP__
#define __DTYPE_HPP__

namespace nvtype {

struct Int2 {
  int x, y;

  Int2() = default;
  Int2(int x, int y = 0) : x(x), y(y) {}
};

struct Int3 {
  int x, y, z;

  Int3() = default;
  Int3(int x, int y = 0, int z = 0) : x(x), y(y), z(z) {}
};

struct Float2 {
  float x, y;

  Float2() = default;
  Float2(float x, float y = 0) : x(x), y(y) {}
};

struct Float3 {
  float x, y, z;

  Float3() = default;
  Float3(float x, float y = 0, float z = 0) : x(x), y(y), z(z) {}
};

struct Float4 {
  float x, y, z, w;

  Float4() = default;
  Float4(float x, float y = 0, float z = 0, float w = 0) : x(x), y(y), z(z), w(w) {}
};

// It is only used to specify the type only, while hoping to avoid header file contamination.
typedef struct {
  unsigned short __x;
} half;

};  // namespace nvtype

#endif  // __DTYPE_HPP__