SD=$(realpath .)
BASEDIR=$(basename "$SD")
set -ex

docker run --rm --entrypoint="" \
  -v $SD:/tmp/$BASEDIR -w /tmp/$BASEDIR \
  -e CONAN_HOME=/tmp/$BASEDIR/.conan clion-builder:22.04 \
  bash -c 'conan profile detect; conan install . --output-folder=cmake-conan --build=missing'
