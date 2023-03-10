git.pull:
	git fetch
	git pull

git.push:
	git add .
	@read -p "Message: " commitmsg
	git commit -m "$$commitmsg;"
	git push
