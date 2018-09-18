constexpr int maxStudentsPerClass { 30 };
constexpr int maxNameLength { 30 };

// NOT

#define MAX_STUDENTS_PER_CLASS 30
#define MAX_NAME_LENGTH 30

// WHY

// 1. The second option creates macros that have file level scope
// 2. Also the value is not picked up by the debugger