FROM archlinuxjp/archlinux
MAINTAINER iamwr iamwrm@gmail.com




ADD startup_wr.sh startup_wr.sh 
RUN rm /etc/pacman.d/mirrorlist
ADD mirrorlist  /etc/pacman.d/mirrorlist

RUN pacman -S --noconfirm git
RUN pacman -S --noconfirm vim
RUN pacman -S --noconfirm wget

RUN pacman -S --noconfirm texlive-most

RUN pacman -S --noconfirm python
RUN pacman -S --noconfirm python-pip
RUN pip install ipython

RUN chmod +x /startup_wr.sh
