# AIC8800D80 USB WiFi Driver for Linux (Kernel 6.18)


## Requirements

- Linux kernel **6.18** (tested on 6.18.0)
- Kernel headers and build tools

```bash
# Ubuntu / Debian
sudo apt install build-essential linux-headers-$(uname -r) git

# Fedora
sudo dnf install kernel-devel kernel-headers gcc make git

# Arch
sudo pacman -S linux-headers base-devel git
```

## Installation

download .zip and extract it to a directory , then make and install

```bash
cd ~

git clone https://github.com/AmmarHourani/AIC8800LinuxDriver.git

cd aic8800d80

make

sudo make install
```


## Credits

- Original driver: [goecho/aic8800_linux_drvier](https://github.com/goecho/aic8800_linux_drvier)
- Patched driver: [Xanderful/aic8800d80](https://github.com/Xanderful/aic8800d80)
- Upstream source: [shenmintao/aic8800d80](https://github.com/shenmintao/aic8800d80)

