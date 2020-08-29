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
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ravi/UKIERI/src/exotica/exotica_examples"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ravi/UKIERI/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ravi/UKIERI/install/lib/python2.7/dist-packages:/home/ravi/UKIERI/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ravi/UKIERI/build" \
    "/usr/bin/python2" \
    "/home/ravi/UKIERI/src/exotica/exotica_examples/setup.py" \
    build --build-base "/home/ravi/UKIERI/build/exotica/exotica_examples" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/ravi/UKIERI/install" --install-scripts="/home/ravi/UKIERI/install/bin"
