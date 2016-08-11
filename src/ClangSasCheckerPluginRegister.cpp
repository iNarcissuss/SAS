/*
Auto-generated by SAS's CMakeLists.txt
*/

#include "Example/VarnameChecker.h"
#include "Performance/ArgSizeChecker.h"
#include "Performance/FiniteMathChecker.h"
#include "ThreadSafety/ConstCastChecker.h"
#include "ThreadSafety/ConstCastAwayChecker.h"
#include "ThreadSafety/GlobalStaticChecker.h"
#include "ThreadSafety/StaticLocalChecker.h"
#include "ThreadSafety/MutableMemberChecker.h"


#include <clang/StaticAnalyzer/Core/CheckerRegistry.h>

// register all custom checkers with clang
// add new entries here if you want to create a new checker
template<class CHECKER>
void AddToRegistry(clang::ento::CheckerRegistry& registry){
  registry.addChecker<CHECKER>(CHECKER::GetName(),CHECKER::GetDescription());
}

extern "C" void clang_registerCheckers(clang::ento::CheckerRegistry& registry)
{
  {
  using namespace sas::Example;
  AddToRegistry<VarnameChecker>(registry);
  }
  {
  using namespace sas::Performance;
  AddToRegistry<ArgSizeChecker>(registry);
  AddToRegistry<FiniteMathChecker>(registry);
  }
  {
  using namespace sas::ThreadSafety;
  AddToRegistry<ConstCastChecker>(registry);
  AddToRegistry<ConstCastAwayChecker>(registry);
  AddToRegistry<GlobalStaticChecker>(registry);
  AddToRegistry<StaticLocalChecker>(registry);
  AddToRegistry<MutableMemberChecker>(registry);
  }
}

extern "C" const char clang_analyzerAPIVersionString[] = CLANG_ANALYZER_API_VERSION_STRING;
