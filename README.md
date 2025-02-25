> export GITHUB_USERNAME=matveech99
> echo $GITHUB_USERNAME
matveech99
> export GIST_TOKEN=token
> echo $GIST_TOKEN
token
> alias edit=vi





> mkdir -p ${GITHUB_USERNAME}/workspace
> cd ${GITHUB_USERNAME}/workspace
> pwd
/home/matvey/matveech99/workspace
> cd ..
> pwd
/home/matvey/matveech99





> cd ~
> mkdir -p workspace/tasks/
> mkdir -p workspace/projects/
> mkdir -p workspace/reports/
> cd workspace
~/workspace >





> wget https://nodejs.org/dist/v6.11.5/node-v6.11.5-linux-x64.tar.xz
--2025-02-24 21:04:21--  https://nodejs.org/dist/v6.11.5/node-v6.11.5-linux-x64.tar.xz
Распознаётся nodejs.org (nodejs.org)… 104.20.22.46, 104.20.23.46, 2606:4700:10::6814:162e, ...
Подключение к nodejs.org (nodejs.org)|104.20.22.46|:443... соединение установлено.
HTTP-запрос отправлен. Ожидание ответа… 200 OK
Длина: 9356460 (8,9M) [application/x-xz]
Сохранение в: ‘node-v6.11.5-linux-x64.tar.xz’

node-v6.11.5-linux- 100%[===================>]   8,92M  4,20MB/s    за 2,1s

2025-02-24 21:04:24 (4,20 MB/s) - ‘node-v6.11.5-linux-x64.tar.xz’ сохранён [9356460/9356460]

> tar -xf node-v6.11.5-linux-x64.tar.xz
> rm -rf node-v6.11.5-linux-x64.tar.xz
> mv node-v6.11.5-linux-x64 node
~/workspace >




ls node/bin
node  npm
> echo ${PATH}
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/snap/bin
> export PATH=${PATH}:`pwd`/node/bin
> echo ${PATH}
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/snap/bin:/home/matvey/workspace/node/bin
> mkdir scripts
> cat > scripts/activate<<EOF
export PATH=\${PATH}:`pwd`/node/bin
EOF
> source scripts/activate





> sudo gem install gist
[sudo] пароль для matvey: 
Fetching gist-6.0.0.gem
Successfully installed gist-6.0.0
Parsing documentation for gist-6.0.0
Installing ri documentation for gist-6.0.0
Done installing documentation for gist after 0 seconds
1 gem installed





> (umask 0077 && echo ${GIST_TOKEN} > ~/.gist)
~/workspace > 





