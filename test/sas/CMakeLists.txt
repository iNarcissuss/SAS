add_subdirectory(ThreadSafety)
add_subdirectory(Performance)
if(EXAMPLE_CHECKERS OR ALL_CHECKERS)
  add_subdirectory(Example)
endif()
add_subdirectory(CodingConventions/General)
if(FCCSW_CHECKERS OR ALL_CHECKERS)
   add_subdirectory(CodingConventions/FCCSW)
endif()
if(ROOT_CHECKERS OR ALL_CHECKERS)
   add_subdirectory(CodingConventions/ROOT)
endif()