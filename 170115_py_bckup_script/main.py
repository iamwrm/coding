#!/usr/bin/env python3

import zipfile
import os
import datetime

def my_backup(filename):
    current_time=str(datetime.datetime.now())
    cc=current_time

    back_up_dir="/Users/wangren/Box Sync/spacemacs-bkp/backup_python/"
    back_up_file=back_up_dir + cc[0:19] +".zip"
    backupZIP=zipfile.ZipFile(back_up_file,'a')

    backupZIP.write(filename)

    backupZIP.close()
    print(filename+" backup into "+back_up_file+" succeeded!")



my_backup("/Users/wangren/.spacemacs")
my_backup("/Users/wangren/.emacs.d/init.el")



