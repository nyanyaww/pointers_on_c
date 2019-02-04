/*****************************
    输出错误信息
    input error message
    你只需要修改ERROR类型就可以了
    
 *****************************/

#define CODE_ERROR(error_type, error_code) \
    {                                      \
        fprintf(stderr, ERROR,             \
                error_type, error_code);   \
        exit(error_code);                  \
    }

#define ERROR "error : %s\n" \
              "error code : %d\n"

// ERROR类型
#define SOME_ERROR "some error occuared..."

// ERROR CODE
enum ERROR_CODE
{
    some_error_code = 1,
    argv_is_not_equal_2,
};