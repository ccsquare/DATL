file(REMOVE_RECURSE
  "liblibdatl.pdb"
  "liblibdatl.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang)
  include(CMakeFiles/libdatl.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
