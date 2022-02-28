#ifdef __i386__
# define this_ptr_value ((void *)0xdeadbeef)
#else
# define this_ptr_value ((void *)0xdeadbeefdeadc0de)
#endif

#define data_ptr_value ((void *)0xd474)

extern void clear_parameters(void);

extern HmdRect2_t DEFAULT_RECT;
extern HmdVector2_t DEFAULT_VECTOR2;
extern HmdVector3_t DEFAULT_VECTOR3;
extern HmdColor_t DEFAULT_COLOR;

extern void push_ptr_parameter(const void *v);
extern void push_bool_parameter(bool b);
extern void push_float_parameter(float f);
extern void push_uint32_parameter(uint32_t u);
extern void push_uint64_parameter(uint64_t u);
extern void push_HmdRect2_parameter(HmdRect2_t v);
extern void push_HmdVector2_parameter(HmdVector2_t v);
extern void push_HmdVector3_parameter(HmdVector3_t v);
extern void push_HmdColor_parameter(HmdColor_t v);

#define check_ptr_parameter(a, b) check_ptr_parameter_(__FILE__, __LINE__, a, b)
extern void check_ptr_parameter_(const char *file, unsigned int line, const char *name, const void *v);
#define check_bool_parameter(a, b) check_bool_parameter_(__FILE__, __LINE__, a, b)
extern void check_bool_parameter_(const char *file, unsigned int line, const char *name, bool b);
#define check_float_parameter(a, b) check_float_parameter_(__FILE__, __LINE__, a, b)
extern void check_float_parameter_(const char *file, unsigned int line, const char *name, float f);
#define check_uint32_parameter(a, b) check_uint32_parameter_(__FILE__, __LINE__, a, b)
extern void check_uint32_parameter_(const char *file, unsigned int line, const char *name, uint32_t u);
#define check_uint64_parameter(a, b) check_uint64_parameter_(__FILE__, __LINE__, a, b)
extern void check_uint64_parameter_(const char *file, unsigned int line, const char *name, uint64_t u);
#define check_HmdRect2_parameter(a, b) check_HmdRect2_parameter_(__FILE__, __LINE__, a, b)
extern void check_HmdRect2_parameter_(const char *file, unsigned int line, const char *name, HmdRect2_t v);
#define check_HmdVector2_parameter(a, b) check_HmdVector2_parameter_(__FILE__, __LINE__, a, b)
extern void check_HmdVector2_parameter_(const char *file, unsigned int line, const char *name, HmdVector2_t v);
#define check_HmdVector3_parameter(a, b) check_HmdVector3_parameter_(__FILE__, __LINE__, a, b)
extern void check_HmdVector3_parameter_(const char *file, unsigned int line, const char *name, HmdVector3_t v);
#define check_HmdColor_parameter(a, b) check_HmdColor_parameter_(__FILE__, __LINE__, a, b)
extern void check_HmdColor_parameter_(const char *file, unsigned int line, const char *name, HmdColor_t v);
