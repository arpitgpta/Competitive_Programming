name='round'$1
mkdir $name
cd $name
cp ../Templet.cpp a.cpp
cp ../Templet.cpp b.cpp
cp ../Templet.cpp c.cpp
touch in.txt out.txt 
code a.cpp in.txt out.txt
