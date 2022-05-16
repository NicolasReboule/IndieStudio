FROM ubuntu:20.04

RUN apt-get update -qq && \
    apt-get install gcc-multilib -y && \
    apt-get install -y --no-install-recommends libglfw3 libglfw3-dev libx11-dev libxcursor-dev libxrandr-dev libxinerama-dev libxi-dev libxext-dev libxfixes-dev

RUN apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/* \

