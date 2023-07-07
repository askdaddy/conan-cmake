set -ex
conan profile detect --force; 
conan install . --output-folder=cmake-conan --build=missing
