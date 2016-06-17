## ======================================================================== ##
## Copyright 2009-2015 Intel Corporation                                    ##
##                                                                          ##
## Licensed under the Apache License, Version 2.0 (the "License");          ##
## you may not use this file except in compliance with the License.         ##
## You may obtain a copy of the License at                                  ##
##                                                                          ##
##     http://www.apache.org/licenses/LICENSE-2.0                           ##
##                                                                          ##
## Unless required by applicable law or agreed to in writing, software      ##
## distributed under the License is distributed on an "AS IS" BASIS,        ##
## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. ##
## See the License for the specific language governing permissions and      ##
## limitations under the License.                                           ##
## ======================================================================== ##

set(LIBRARY_NAME ospray_script)

add_library(${LIBRARY_NAME}
  OSPRayScriptHandler.cpp
  OSPRayScriptHandler.h
)

target_link_libraries(${LIBRARY_NAME}
  ospray_common
  ospray
  ${CMAKE_THREAD_LIBS_INIT}
  dl
)

ospray_set_library_version(${LIBRARY_NAME})

install(TARGETS ${LIBRARY_NAME}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT lib
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT lib
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT devel
)