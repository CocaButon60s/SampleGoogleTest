FROM ubuntu:24.04

COPY <<EOF /etc/sudoers.d/ubuntu
ubuntu ALL=(ALL) NOPASSWD:ALL

EOF


RUN <<EOF
apt-get update
DEBIAN_FRONTEND=noninteractive apt-get install -y tzdata
ln -fs /usr/share/zoneinfo/Asia/Tokyo /etc/localtime
EOF

RUN apt-get install -y sudo wget cmake ninja-build build-essential pkg-config meson

WORKDIR /root
RUN <<EOF
wget https://github.com/google/googletest/releases/download/v1.17.0/googletest-1.17.0.tar.gz
tar -xzvf googletest-1.17.0.tar.gz
EOF

WORKDIR /root/googletest-1.17.0
RUN <<EOF
cmake -S . -B build
cmake --build build
cmake --install build
EOF