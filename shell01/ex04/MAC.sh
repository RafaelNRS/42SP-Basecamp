#!/usr/bin/env bash
ifconfig -a | perl -ne 'print ($1."\n") if /.*(\w{2}\:\w{2}\:\w{2}\:\w{2}\:\w{2}\:\w{2}.*txqueuelen.*)/'
