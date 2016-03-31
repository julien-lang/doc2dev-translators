#! /usr/bin/python
# -*- coding: utf-8 -*-

# Copyright (C) 2016 Julien Langlois
# Author Julien Langlois <julien.langlois@gmail.com> 2016

# NTSTATUS values
# 1. open a web browser and load this page: https://msdn.microsoft.com/en-ca/library/cc704588.aspx
# 2. save the page in a html file as 'input.html'
# 3. start this script to convert the HTML in a C++ code

if __name__ == "__main__":
	import re
	import sys
	
	path = "input.html"
	
	f = open(path, "r")
	c = f.read()
	f.close()
	
	# <p>0x00000000</p>
	# <p>STATUS_WAIT_0</p>
	rr = re.findall("<p>(0x[0-9A-Fa-f]+)</p>.*\n.*<p>(.*)</p>" , c, re.MULTILINE)

	data = {}
	for k,v in rr:
		# print k,v
		if k not in data:
			data[k] = []
		
		data[k].append(v)

	keys = data.keys()
	keys.sort()

	print "std::wstring value;"
	print "switch(status) {"
	for k in keys:
		v = data[k]
		print "	case %s:" % k
		print '		value = L"%s";' % " or ".join(v)
		print "		break;"

	print "	default:"
	print '		value = L"UNKNOWN";'
	print "}"
