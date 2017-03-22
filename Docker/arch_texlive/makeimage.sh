#docker pull archlinuxjp/archlinux
docker build --rm -t iamwr/arch_texlive:latest .
#docker run -it  iamwr/arch_texlive bash /startup_wr.sh
#docker run -d -p 8888:8888 -v /home/vik/notebooks:/home/ds/notebooks dataquestio/python3-starter.

#docker run -it -v $(pwd)/shared_folder:/home/shared_folder iamwr/arch_texlive bash /startup_wr.sh

docker run -it -v $(pwd)/shared_to_root_folder:/root iamwr/arch_texlive bash

# docker start 
# docker exec -it name bash