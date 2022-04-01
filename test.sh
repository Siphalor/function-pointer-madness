#! /usr/bin/bash

repo_url="https://github.com/Siphalor/function-pointer-madness"
repo_url=$(sed 's/\//\\\//g' <<<"$repo_url")
for f in $(grep -Po "\|\s+(.*blob/\w+)?/\K[^#]+" README.md)
do
  echo "git log -n 1 --pretty=format:%H -- $f"
	commit=$(git log -n 1 --pretty=format:%H -- $f)
	f_url=$(sed 's/\//\\\//g' <<<"$f")
	sed -i "s/| \([^|]*blob\/[a-zA-Z0-9]\+\)\?\/$f_url/| $repo_url\/blob\/$commit\/$f_url/" README.md
done
