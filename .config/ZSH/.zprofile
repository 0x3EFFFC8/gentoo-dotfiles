export QT_QPA_PLATFORMTHEME=qt5ct

typeset -U PATH path
export PATH=("$PATH:$HOME/.local/bin/:$HOME/.config/scripts/:$JAVA_HOME")

export SXHKD_SHELL='/bin/sh'

[[ $(fgconsole 2>/dev/null) == 1 ]] && exec startx $HOME/.config/X11/xinitrc &> /dev/null

eval "$(ssh-agent -s)" &> /dev/null
