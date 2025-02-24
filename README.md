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





gem install gist
Fetching gist-6.0.0.gem
ERROR:  While executing gem ... (Gem::FilePermissionError)
    You don't have write permissions for the /var/lib/gems/3.2.0 directory.
	/usr/lib/ruby/vendor_ruby/rubygems/installer.rb:713:in `verify_gem_home'
	/usr/lib/ruby/vendor_ruby/rubygems/installer.rb:903:in `pre_install_checks'
	/usr/lib/ruby/vendor_ruby/rubygems/installer.rb:303:in `install'
	/usr/lib/ruby/vendor_ruby/rubygems/resolver/specification.rb:105:in `install'
	/usr/lib/ruby/vendor_ruby/rubygems/request_set.rb:195:in `block in install'
	/usr/lib/ruby/vendor_ruby/rubygems/request_set.rb:183:in `each'
	/usr/lib/ruby/vendor_ruby/rubygems/request_set.rb:183:in `install'
	/usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:215:in `install_gem'
	/usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:231:in `block in install_gems'
	/usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:224:in `each'
	/usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:224:in `install_gems'
	/usr/lib/ruby/vendor_ruby/rubygems/commands/install_command.rb:170:in `execute'
	/usr/lib/ruby/vendor_ruby/rubygems/command.rb:328:in `invoke_with_build_args'
	/usr/lib/ruby/vendor_ruby/rubygems/command_manager.rb:253:in `invoke_command'
	/usr/lib/ruby/vendor_ruby/rubygems/command_manager.rb:193:in `process_args'
	/usr/lib/ruby/vendor_ruby/rubygems/command_manager.rb:151:in `run'
	/usr/lib/ruby/vendor_ruby/rubygems/gem_runner.rb:52:in `run'
	/usr/bin/gem:12:in `<main>'




> (umask 0077 && echo ${GIST_TOKEN} > ~/.gist)
~/workspace > 





