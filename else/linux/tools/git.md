# submission
## steps of the init submission
git config --global user.name 'YourName'  
git config --global user.email 'YourEmail'  
git init  
git add . //OR// git add files  
git commit -m  
git remote add \<lable of repository\> \<url\>  
ssh-keygen -t ed25519 -C 'YourEmail'  
add an ssh key on github  
git push  
## cancle commit
git reset --soft HEAD^  
## cancle commit and add
git reset --hard HEAD^  
# explanation
if * appears behind the local branch name, that means workspace/cache have changed, use 'git status' to see the changes  
# show configuration of git
git config --list--show--origin  
# cache
## remove files in the cache
git reset --files  
## see history of submission
git log --graph  
# branch
## check
git branch -avv  
&emsp;explanation:  
&emsp;&emsp;column 1 = branch name(the current branch is green)  
&emsp;&emsp;column 2 = version  
&emsp;&emsp;column 3 =
## set defalut push target
git push -u <lable of repository> <local branch name>  
## rename
git branch -m \<old_name\> \<new_name\>  
# repository
## check repository
git remote (-v)  
&emsp;-v verbose
## display infomation of repository
git remote show 'label of repository'
## rename remote repository
git remote rename 'label of repository'  
## clone the repository(download files as well)
git clone 'url'  
# fix problems
## need to specify how to reconcile divergent branches
git config pull.rebase false  
## updates were rejected because the tip of your current branch is behind its remote counterpart
method 1  
&emsp;git push 'label of repository' 'local branch name'  
&emsp;git pull 'label of repository' 'local branch name'  
method 2: pull forcibly强制提交(may cause remote modififcation to be lost, not recommended)  
&emsp;git push 'label of repository' 'local branch name'  
## please tell me who you are
add:  
&emsp;\[user\]  
&emsp;&emsp;name = YourName  
&emsp;&emsp;email = YourEmail
## refusing to merge unrelated histories
happended when git merge:  
&emsp;git merge \<local_branch\> \<remote_branch\>  
happened when git push:  
&emsp;git pull \<label of repository\> \<local_branch\> -allow-unrelated-histories  
&emsp;git push \<label of repository\> \<local_branch\>:\<remote_branch\>  
## fatal: detected dubious ownership in repository at ...
git config --global --add safe.directory '*'  
## Your local changes to the following files would be overwritten by merge
There have been no modifications made locally  
&emsp;&emsp;git pull  
There have modifications made locally  
&emsp;&emsp;you haven't executed 'add .' or else  
&emsp;&emsp;&emsp;&emsp;git checkout -- \<path have been dispaly on the warnning line\>  
&emsp;&emsp;&emsp;&emsp;git pull  
&emsp;&emsp;you have executed  
&emsp;&emsp;&emsp;&emsp;git reset --hard HEAD^\<path\>  
&emsp;&emsp;&emsp;&emsp;it checkout -- \<path\>  
&emsp;&emsp;&emsp;&emsp;git pull  