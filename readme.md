# SOG Minecraft Launcher

> Society of gamers runs is gettings its own Minecraft Launcher. This is the open-source project.

## Docker
We use docker as deployment tool. As you can see our Dockerfile, docker-compose and dockerignore

### Pre-Requisites
For correctly building the application in docker VcXsrv has to be installed in **Windows**.  
 
> **Install VcXsrv**
> 0. You can download it from here: https://sourceforge.net/projects/vcxsrv/ or here: https://github.com/ArcticaProject/vcxsrv/releases  
> 1. Install it and run XLaunch.  
> 2. Select **Multiple Windows** (Leave **Display Number** at **-1**)  
> 3. Then select "Start no Client"  
> 4. For the last option select all three (default and disable access control)  
> 5. Press finish

Then you can run the Dockerfile with command:  
```batchfile
docker build -t ubuntu:20.04 . 
docker run -v /tmp/.X11-unix:/tmp/.X11-unix -v ~\.XAuthority:/root/.Xauthority --name MinecraftLauncherContainer --privileged false ubuntu:20.04
```

Or you can start it using docker-compose
```batchfile
docker-compose build
docker-compose up
```


## Languages and Frameworks
### C++
Currently we are working with C++ as our main language for the launcher

### CMake
For building we use CMake

### Java
For this launcher to be effective a server plugin will be neccesary hence it will have to be made in java.