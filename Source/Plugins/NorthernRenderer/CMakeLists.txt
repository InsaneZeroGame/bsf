# Source files and their filters
	
file(GLOB SourceFiles *.cpp *.h)

# Target
add_library(NorthernRenderer SHARED ${SourceFiles})

# Common flags
add_common_flags(NorthernRenderer)

# Includes
target_include_directories(NorthernRenderer PRIVATE "./")

# Defines
target_compile_definitions(NorthernRenderer PRIVATE -DBS_NR_EXPORTS)

# Libraries
## Local libs
target_link_libraries(NorthernRenderer bsf)

# IDE specific
set_property(TARGET NorthernRenderer PROPERTY FOLDER Plugins)

# Install
install_bsf_target(NorthernRenderer)

conditional_cotire(NorthernRenderer)
