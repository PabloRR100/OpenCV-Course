# Run docker image
open -a XQuartz
defaults write org.macosforge.xquartz.X11 enable_iglx -bool true
IP=$(ifconfig en0 | grep inet | awk '$1=="inet" {print $2}')
xhost + $IP
docker run -v /tmp/.X11-unix:/tmp/.X11-unix -v $PWD/:/home/jovyan/work/ -e DISPLAY=$IP:0 -p 5000:5000 -p 8888:8888 -it vishwesh5/opencv:4-1-0-conda /bin/bash
