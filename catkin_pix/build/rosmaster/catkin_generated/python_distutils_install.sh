#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/rishi/catkin_pix/src/ros_comm/tools/rosmaster"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/rishi/catkin_pix/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/rishi/catkin_pix/install/lib/python3/dist-packages:/home/rishi/catkin_pix/build/rosmaster/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/rishi/catkin_pix/build/rosmaster" \
    "/usr/bin/python3" \
    "/home/rishi/catkin_pix/src/ros_comm/tools/rosmaster/setup.py" \
    egg_info --egg-base /home/rishi/catkin_pix/build/rosmaster \
    build --build-base "/home/rishi/catkin_pix/build/rosmaster" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/rishi/catkin_pix/install" --install-scripts="/home/rishi/catkin_pix/install/bin"
