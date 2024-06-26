set -e

SCRIPT_DIR="$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

if [ "$1" = 'crkbd' ]; then
    mkdir -p qmk/$1
    mustache values.yaml $1.mustache > qmk/$1/keymap.c

    KEYMAP_DIR="$SCRIPT_DIR/../qmk_firmware/keyboards/$1/keymaps/justincmoy"
    mkdir -p $KEYMAP_DIR
    cp qmk/common/config.h $KEYMAP_DIR/
    cp qmk/$1/keymap.c $KEYMAP_DIR/

    qmk flash -c -kb $1 -km justincmoy
    exit
fi

if [ "$1" = 'model100' ]; then
    j2 -f yaml $1.j2 values.yaml --filters filters.py -o kaleidoscope/$1/$1.ino
else
    mustache values.yaml $1.mustache > kaleidoscope/$1/$1.ino
fi
cp kaleidoscope/Makefile kaleidoscope/$1/

set +e

pushd kaleidoscope/$1

KALEIDOSCOPE_DIR=$SCRIPT_DIR/../kaleidoscope make flash

popd
