#!/usr/bin/awk

BEGIN {
    print "Begin opeation"; myval = 0
}
/debt/{myval-= $1}
/debt/{myval+= $1}
END {
    print myval
}

awk "{print $NF-1}"