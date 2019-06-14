# Source files and their filters

file(GLOB SourceFiles *.cpp *.h)
	
# Target
add_library(kD3D12RenderAPI SHARED ${SourceFiles})

# Common flags
add_common_flags(kD3D12RenderAPI)

# Includes
target_include_directories(kD3D12RenderAPI PRIVATE "./")

# Defines
target_compile_definitions(kD3D12RenderAPI PRIVATE -DBS_D3D12_EXPORTS)

# Libraries	

## Local libs
target_link_libraries(kD3D12RenderAPI PRIVATE bsf)

# IDE specific
set_property(TARGET kD3D12RenderAPI PROPERTY FOLDER Plugins)

# Install
if(RENDER_API_MODULE MATCHES "DirectX 12")
	install_bsf_target(kD3D12RenderAPI)
endif()

conditional_cotire(kD3D12RenderAPI)
