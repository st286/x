## Pass the Wall

中国第一封电子邮件:

“Across the Great Wall we can reach every corner in the world ”（“越过长城，走向世界”）

[passWall](https://github.com/st286/network_passwall)

[左耳朵: 科学上网](https://github.com/haoel/haoel.github.io)

 [Naiveproxy](./Naiveproxy)

 [TUIC](./TUIC)

 [Xray](./Xray)

 [VPN](./VPN)

 [GOST](./GOST)

<details>
 <summary>sing-box: </summary>

[sing-box site](https://sing-box.sagernet.org)

[sing-box github](https://github.com/SagerNet/sing-box)

[节点自建 Shadowsocks篇】AEAD 2022抗审查加密隧道搭建教程 ](https://pincong.rocks/article/66046)

[sing-box官方文档](https://sing-box.sagernet.org/zh/)

[sing-box 网络代理平台的“瑞士军刀”，搭建shadowtls节点](https://bulianglin.com/archives/sing-box.html)

[Sing-box 全家桶](https://github.com/fscarmen/sing-box)

[最全协议sing-box一键脚本, 支持支持多协议多节点共存](https://github.com/TinrLin/sing-box)

[sing-box安装shadowtls和reality并共用443端口](https://mareep.net/posts/55957/)

[sing-box进阶](https://yugogo.xyz/?p=1999)

 ~~[SNELL](./SNELL)~~

</details>

[科学上网 2.0 时代](https://blog.forecho.com/science-internet-guide.html)

---

---
## [macOS (apple)](./macOS)

---
## [Linux](./linux)
[DebugPoint](https://www.debugpoint.com/)

DebugPoint.com is a portal covering Technology, Software News and stuff that matters. Heavily slant towards Linux and Open Source.

[ArchLinux - manjaro etc](./ArchLinux)

[linux源码的编译安装和卸载](https://segmentfault.com/a/1190000016073952)


[Bypass paywalls chrome ](https://github.com/iamadamdev/bypass-paywalls-chrome)

---
## [Openwrt 固件编译](./openwrt-lead)

---
## [C & CPP](./C)

 [CPP](./CPP)
---

---
 ### [基础知识，从案例出发深挖相关知识(计算机基础、网络基础)](https://plantegg.github.io)

 ### [chatGPT](https://chat.openai.com/chat)

chatGPT just funny!

 [AI Paper - 2022: A Year Full of Amazing AI papers- A Review](https://github.com/louisfb01/best_AI_papers_2022)

---
### [Ventoy - A New Bootable USB Solution](https://www.ventoy.net/)

[Ventoy - Github](https://github.com/ventoy/Ventoy)

---
### [Oracle cloud](https://cloud.oracle.com/)

[How to deploy a FREE Oracle Cloud VPS server](https://cleavr.io/cleavr-slice/how-to-deploy-free-oracle-cloud-vps/)

[如何创建自签名SSL证书](https://www.myfreax.com/creating-a-self-signed-ssl-certificate/)

[iptables详解（1）：iptables概念](https://www.zsythink.net/archives/1199)

[iptables命令详解 - LInux](https://www.orchome.com/10182)

Update Oracle iptables
```
sudo iptables -I INPUT 6 -m state --state NEW -p tcp --dport 443 -j ACCEPT
sudo iptables -I INPUT 6 -m state --state NEW -p tcp --dport 80 -j ACCEPT

sudo iptables -I INPUT 6 -m state --state NEW -p udp --dport 443 -j ACCEPT
sudo iptables -I INPUT 6 -m state --state NEW -p udp --dport 80 -j ACCEPT

sudo iptables -I INPUT 6 -m state --state NEW -p udp --dport 104 -j ACCEPT

sudo netfilter-persistent save
```

---

## [TextEditor](./TextEditor)

---
## Some useful tools

 [Dictionary: Dict & Dictd](https://github.com/st286/st286/blob/ca183386fe0a103d0eb1ffd1106f8030fe631fe3/Dictionary)

 [Telegram](https://telegram.org/)

 [git & github](https://github.com/st286/st286/tree/master/Git-Github)

  [TOR](https://www.torproject.org/)

Defend yourself against tracking and surveillance. Circumvent censorship.

[Support:How can we help?](https://support.torproject.org/)

[INSTALLATION](https://tb-manual.torproject.org/installation/)

 [Youtube downloader: yt-dlp](https://github.com/yt-dlp/yt-dlp)

   yt-dlp is a youtube-dl fork based on the now inactive youtube-dlc. The main focus of this project is adding new features and patches while also keeping up to date with the original project.
   In UNIX-like OSes (MacOS, Linux, BSD), you can also install the same in one of the following ways:
```
sudo curl -L https://github.com/yt-dlp/yt-dlp/releases/latest/download/yt-dlp -o /usr/local/bin/yt-dlp
sudo chmod a+rx /usr/local/bin/yt-dlp
```
**update**
```
sudo yt-dlp -U
```
 **Usage( output mp3)**
 ```
 yt-dlp -x --audio-format mp3 --trim-filenames 20  URL
 
 yt-dlp -x --audio-format mp3 --trim-filenames 30  --proxy socks5://127.0.0.1:1024/   URL
```
audio conversion failed: Unknown encoder 'libmp3lame'

ffmpeg Compile with libmp3lame:
```
git clone https://git.ffmpeg.org/ffmpeg.git ffmpeg
cd ffmpeg
./configure --enable-libmp3lame
make
make install
ffmpeg -version
```

## [nmap](https://nmap.org)

#### [Nmap参考指南-Man Page](https://nmap.org/man/zh/index.html)

   This is the traditional compile-it-yourself format. The Nmap tarball compiles under Linux, Mac OS X, Windows, and many UNIX platforms (Solaris, Free/Net/OpenBSD, etc.) It includes Zenmap, the GUI frontend.
   
   [Downloading Nmap](https://nmap.org/download.html)
   
   [Source Code Distribution](https://nmap.org/download.html#source)
   
```   
sudo apt update && sudo apt upgrade -y && sudo apt install nmap   
```   
**[Mac OS X Binaries & Source Code Distribution](https://nmap.org/download.html#macosx)**
```
cd nmap-7.93
./configure
make
sudo make install
```  
   **Compiling Nmap on Mac OS X requires [the command line tools](https://developer.apple.com/xcode/)**
   
      NPING SUCCESSFULLY INSTALLED
      NMAP SUCCESSFULLY INSTALLED

---
[FFmpeg](https://github.com/st286/st286/blob/41710c857c539ee5726261919dfe171e2a80d822/FFmpeg.md)

  A complete, cross-platform solution to record, convert and stream audio and video.
```   
sudo apt update && sudo apt upgrade -y && sudo apt install ffmpeg
```  

[GIMP](https://www.gimp.org)

   The Free & Open Source Image Editor.GIMP is a cross-platform image editor available for GNU/Linux, OS X, Windows and more operating systems. It is free software, you can change its source code and distribute your changes.
Whether you are a graphic designer, photographer, illustrator, or scientist, GIMP provides you with sophisticated tools to get your job done. You can further enhance your productivity with GIMP thanks to many customization options and 3rd party plugins.

[calibre](https://github.com/st286/st286.github.io/blob/master/calibre.md)

  Calibre是一款电子图书管理软件，其提供的“一站式”的电子书解决方案，可以全面满足对电子书需求，甚至可以利用它组织成属于自己的电子图书馆，它的功能更是多种多样，不仅可以用它对图书进行格式转换，归类整理电子书，还可以将文本图像材料、在线内容（RSS）加入并转换为电子书。更重要的是Calibre是免费的、开源的，拥有跨平台的设计，可在Linux， OS X和Windows操作系统中运行，堪称电子书管理神器！
```   
sudo apt update && sudo apt upgrade -y && sudo apt install calibre
```  

[exiftool](https://github.com/st286/st286.github.io/blob/master/ExifTool.md)

 ExifTool由Phil Harvey开发，是一款免费、跨平台的开源软件，用于读写和处理图像（主要）、音视频和PDF等文件的元数据（metadata）
 
 [Installing ExifTool -three platforms: Windows, MacOS, and Unix platforms](https://exiftool.org/install.html)
 
```   
sudo apt update && sudo apt upgrade -y && sudo apt install exiftool
```   

[age是一种简单，现代且安全的文件加密工具](https://github.com/FiloSottile/age)

[rage](https://github.com/str4d/rage)

   age is a simple, modern and secure file encryption tool, format, and Go library.

   It features small explicit keys, no config options, and UNIX-style composability.

 
[Croc](https://github.com/st286/st286.github.io/blob/master/Croc.md)

  兩台電腦透過 croc 工具來傳送檔案 (簡單, 加密, 快速)


---
## Python

  1. [草根学 Python](https://www.readwithu.com)
  
  2. [Python最佳实践指南！](https://pythonguidecn.readthedocs.io/zh/latest/index.html)
  
  3. [易百教学程](https://www.yiibai.com)
  
  4. [How To Install PIP to Manage Python Packages in Linux](https://www.tecmint.com/install-pip-in-linux/)
  
  5. [Pipenv vs virtualenv vs conda environment](https://medium.com/@krishnaregmi/pipenv-vs-virtualenv-vs-conda-environment-3dde3f6869ed)

---
## Windows (microsoft)

 1. [MobaXterm -- Enhanced terminal for Windows](https://mobaxterm.mobatek.net)
 
 2. [5 Best SSH Clients for Windows](https://activedirectorypro.com/ssh-clients-for-windows/)


---

---
### Banned Books

  [《鸿：三代中国女人的故事》 上](https://www.dw.com/zh/%E9%B8%BF%E4%B8%89%E4%BB%A3%E4%B8%AD%E5%9B%BD%E5%A5%B3%E4%BA%BA%E7%9A%84%E6%95%85%E4%BA%8B-%E4%B8%8A/a-15249195)
  
  
  [《鸿：三代中国女人的故事》下](https://www.dw.com/zh/%E9%B8%BF%E4%B8%89%E4%BB%A3%E4%B8%AD%E5%9B%BD%E5%A5%B3%E4%BA%BA%E7%9A%84%E6%95%85%E4%BA%8B%E4%B8%8B/a-15365675)
  
---
###  微信就是一個黑客軟件，非必要不使用！

      sudo chmod 400 /Users/hyh/Library/Containers/com.tencent.xinWeChat/Data/Library/Caches/com.tencent.xinWeChat/2.0b4.0.9
