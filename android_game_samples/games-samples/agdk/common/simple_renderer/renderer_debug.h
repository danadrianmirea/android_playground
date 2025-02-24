/*
 * Copyright 2023 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SIMPLERENDERER_DEBUG_H
#define SIMPLERENDERER_DEBUG_H

#include "common.hpp"

#define RENDERER_ERROR ALOGE
#define RENDERER_LOG ALOGI
#define RENDERER_ASSERT MY_ASSERT

#ifdef NDEBUG
#define RENDERER_CHECK_GLES(a)
#define RENDERER_CHECK_VK(b)
#else
#define RENDERER_CHECK_GLES(a) RendererCheckGLES(a)
#define RENDERER_CHECK_VK(a, b) RendererCheckVk(a, b)
#endif

namespace simple_renderer {
bool RendererCheckGLES(const char* message);
bool RendererCheckVk(int result, const char* message);
}

#endif // SIMPLERENDERER_DEBUG_H
