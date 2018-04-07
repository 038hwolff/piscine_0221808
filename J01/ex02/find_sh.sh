find . -name '*.sh' -type f -print | sed -n "s/.*\/\(.*\).sh/\1/p"
