问题1：编译报错未找到stdio.h
	由于在更改软件源的地址是未考虑系统版本导致gcc版本不匹配，先通过
	lsb_release -a
	查询系统版本号 得知为focal
	再通过
	sudo gedit /etc/apt/sources.list
	修改软件镜像源的地址 改为focal
	
	执行更新命令：
	sudo apt-get update
	再重新卸载安装gcc，
	sudo apt-get remove gcc
	sudo apt-get install gcc

问题2：未找到sys/utsname.h
	推测是gcc环境未装完，类似问题也可通过安装环境依赖解决
	sudo apt-get  install  build-essential

