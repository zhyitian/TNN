// Tencent is pleased to support the open source community by making TNN available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#include "pytnn/pytnn.h"
#include "tnn/utils/bfp16_utils.h"

namespace py = pybind11;

namespace TNN_NS {

void InitBFP16UtilsPy(py::module& m) {
    m.def("ConvertFromFloatToBFP16", &ConvertFromFloatToBFP16);
    m.def("ConvertFromBFP16ToFloat", &ConvertFromBFP16ToFloat);
}

}  // namespace TNN_NS
