cmake_minimum_required(VERSION 3.24)
project(VisualGpEngine)

set(CMAKE_CXX_STANDARD 17)

find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(VisualGpEngine main.cpp src/Engine/Core/Job.cpp src/Engine/Core/Job.h src/Engine/Core/Entity.cpp src/Engine/Core/Entity.h src/Engine/Core/Engine.cpp src/Engine/Core/Engine.h src/Engine/Render/Jobs/RenderMeshJob.cpp src/Engine/Render/Jobs/RenderMeshJob.h src/Engine/Render/Data/Mesh.cpp src/Engine/Render/Data/Mesh.h src/Engine/Render/Data/Material.cpp src/Engine/Render/Data/Material.h src/Engine/Render/Data/Texture.cpp src/Engine/Render/Data/Texture.h src/Engine/Render/Data/GpuBuffer.cpp src/Engine/Render/Data/GpuBuffer.h src/Engine/Render/Jobs/LightJob.cpp src/Engine/Render/Jobs/LightJob.h src/Engine/Core/Jobs/TransformJob.cpp src/Engine/Core/Jobs/TransformJob.h src/Engine/Loaders/MeshLoader.cpp src/Engine/Loaders/MeshLoader.h src/Engine/Loaders/TextureLoader.cpp src/Engine/Loaders/TextureLoader.h src/Engine/Render/API/Cmd/RenderAPI.cpp src/Engine/Render/API/Cmd/RenderAPI.h src/Engine/Render/Jobs/CameraJob.cpp src/Engine/Render/Jobs/CameraJob.h src/Engine/Render/API/Cmd/RenderCommandBuffer.cpp src/Engine/Render/API/Cmd/RenderCommandBuffer.h src/Engine/Render/API/Cmd/RenderCommand.cpp src/Engine/Render/API/Cmd/RenderCommand.h src/Engine/Render/API/Cmd/DrawMeshRenderCommand.cpp src/Engine/Render/API/Cmd/DrawMeshRenderCommand.h src/Engine/Core/Scene.cpp src/Engine/Core/Scene.h src/Engine/Loaders/Loader.cpp src/Engine/Loaders/Loader.h src/Engine/Render/API/Wrapper/RenderWrapper.cpp src/Engine/Render/API/Wrapper/RenderWrapper.h src/Engine/Loaders/IAsset.cpp src/Engine/Loaders/IAsset.h)

target_link_libraries(VisualGpEngine PUBLIC GLEW::GLEW glfw)

