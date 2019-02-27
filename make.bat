mkdir build
pushd build
cmake -DCMAKE_GENERATOR_PLATFORM=x64 ..
cmake --build .
popd