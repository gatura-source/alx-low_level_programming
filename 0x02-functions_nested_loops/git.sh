echo
git add --all
echo -e "enter commit message"
read -e message
git commit -m "($message)"
git push
