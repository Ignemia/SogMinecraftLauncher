FROM ubuntu:20.04

# setup system
ARG DEBIAN_FRONTEND=noninteractive
ARG TZ=Etc/UTC
ENV DISPLAY=host.docker.internal:0.0
RUN apt-get update && apt-get install -y git gdb x11-apps # system constant packages
RUN apt-get install -y cmake build-essential # dev packages

# download used libraries
RUN apt-get install -y --fix-missing \
    libsfml-dev

# copy project files
COPY . ./MinecraftLauncher
WORKDIR ./MinecraftLauncher

# make build
RUN mkdir -p build && cd build && cmake .. && make

# run app
CMD ./build/MinecraftLauncher
