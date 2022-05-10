#!/bin/bash
ifconfig -a | grep -e ether | awk {'print $2 "  "$3 " " $4 "  "$5'}