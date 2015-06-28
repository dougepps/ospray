// ======================================================================== //
// Copyright 2009-2015 Intel Corporation                                    //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#include "modules/loaders/OSPObjectFile.h"
#include "modules/loaders/RawVolumeFile.h"
#include "modules/loaders/PLYTriangleMeshFile.h"

//! Loader for XML object files.
OSP_REGISTER_OBJECT_FILE(OSPObjectFile, osp);

//! Loader for RAW volume files.
OSP_REGISTER_VOLUME_FILE(RawVolumeFile, raw);

//! Loader for PLY triangle mesh files.
OSP_REGISTER_TRIANGLEMESH_FILE(PLYTriangleMeshFile, ply);
