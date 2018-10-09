# NDK_DEEP
##### javah 命令
BUILD FAILED in 1s
192:NDK_DEEP mac$ javah
用法:
  javah [options] <classes>
其中, [options] 包括:
  -o <file>                输出文件 (只能使用 -d 或 -o 之一)
  -d <dir>                 输出目录
  -v  -verbose             启用详细输出
  -h  --help  -?           输出此消息
  -version                 输出版本信息
  -jni                     生成 JNI 样式的标头文件 (默认值)
  -force                   始终写入输出文件
  -classpath <path>        从中加载类的路径
  -cp <path>               从中加载类的路径
  -bootclasspath <path>    从中加载引导类的路径
<classes> 是使用其全限定名称指定的
(例如, java.lang.Object)。
## cmakelist配置

## 生成方式
as工具栏->build->rebuild project
## .so文件目录
build->intermediates->cmake
## 日志的使用方式
1. 增加 #include <android/log.h>
2. 增加  #define LOG_TAG  "C_TAG"
3. 增加  #define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

调用方式
LOGD("==============hello.length=%d",hello.length());