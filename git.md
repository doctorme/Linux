1.创建分支，删除分支，提交本地分支：
	git branch xxx
	git push origin xxx
	
	
	
2. 仅仅删除远程分支文件，不删除本地文件
删除远程文件filename
git rm --cached filename
git commit -m "delete remote file filename "
git push -u origin master(此处是当前分支的名字)

删除远程文件夹directoryname
git rm -r --cached directoryname
git commit -m "delete remote directory directoryname "
git push -u origin master(此处是当前分支的名字)

git clean -d -fx表示：删除 一些 没有 git add 的 文件；

