sudo mkdir /usr/include/agl/graphics
sudo cp -Rap *.h /usr/include/agl/graphics/
make debug
sudo cp -Rap ../lib/*.so /usr/lib/
