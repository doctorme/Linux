GCC编译器常用选项
	• 生成动态链接库: gcc file.c -fPIC -o file.so, PIC表示Position-Independent Code: 独立地址代码
	• 编译: gcc -c file.c, c表示: compile(编译)
	• 只预处理: gcc -E file.c
	• 生成汇编代码: gcc -S file.c
	• 生成可执行文件: gcc file.c -o app
	• 生成调试信息: gcc -g file.c, 之后可以使用gdb进行调试, g表示generate(生成), 但是只有在发布app时, 使用strip app去掉调试信息
	• 显示所有警告: gcc -Wall file.c, Wall表示: Warn all
	• Werror: 将所有的警告视为错误
	• w: 禁止显示警告
	• 显示编译的详细信息: gcc -v file.c
	• 指定库所在的目录: gcc -L/paht/to/youlibdir/ file.c, 注意: -L后边紧跟的就是含有执行lib文件的目录, 没有空格
	• 指定库: gcc -l/path/to/youlib file.c, 注意: 小写的l跟L用法一样, 只是后边跟的是文件的路径
	• 指定头文件的目录: 使用-I
	• 指定头文件: 使用-l, 小写的L, 与上面的l不同, 该l后面要有空格
	• 其中的-I, -L, -l在命令中可以出现多次, 那-I为例, gcc -I/usr/include/ -I/usr/local/include -I./someheadersdir file.c
	• 指定需要编译的文件的语言: gcc -x C file.c
	• -mcmodel=small | large, 表示编译采用的memory code模型, small则会比较快, 但是不安全; large则反之; 一般文件比较大就是用large, 默认采用的是small
	• C语言是有内建函数的, 比如printf函数, 因为太常用了, 所以就将其整合为了一个内建函数, 在不导入头文件的情况下也可以是使用, 但是如果我们想要自己实现一个printf, 名字也一样, 这样不就名称冲突了么, gcc提供了一个选项-fno-builtin, gcc在编译的时候会忽略所有的内建函数, 如果要忽略特定的则是-fno-builtin-functionname
	• 通过-m32或者-m64编译对应平台的二进制程序


