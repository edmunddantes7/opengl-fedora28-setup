# opengl-fedora28-setup

## So you'd like to get started with OpenGL on Fedora huh?
By the way this guide is for `OpenGL 3.3` when following the tutorial https://learnopengl.com/Getting-started/Creating-a-window. I am bad at setups no matter how detailed they are, it usually goes like 4-5 days of setup with a few broken computer peripherals, which others complete in an hour or so with a cup of icecream. Tutorial for the lads and lasses who find it hard to set it up.

## Dependencies installation
### GLFW
This will take a few minutes depending on your computer. 
There could be more advanced packages / tools, but pardon me these are what I've used.

```bash
sudo dnf update
sudo dnf install cmake xorg-x11-server-devel glfw-devel # is the glfw-devel good enough
sudo dnf builddep glfw
git clone https://github.com/glfw/glfw.git # or use git@github.com:glfw/glfw.git if you use ssh keys
cd glfw
cmake .
```
That should install `glfw` for you.

__resource links:__
1. https://stackoverflow.com/questions/17768008/how-to-build-install-glfw-3-and-use-it-in-a-linux-project
2. https://github.com/openMVG/openMVG/issues/85#issuecomment-34821174

<br/>
Next thing you should do is to put those libraries at a place you can remember so that you can
include them during compilation. I've made an `include` at `~`. I have no idea why I did this, put it 
wherever you like and just remember the location.

### GLAD
I know, I know,  you'll be glad once this setup is done. We're almost done so hold your horses if you have any 
else get one they are fancy. I believe that you are following up the tutorial I mentioned when reading this.

<br/>
Pick a browser and navigate to http://glad.dav1d.de/#profile=core&specification=gl&api=gl%3D3.3&api=gles1%3Dnone&api=gles2%3Dnone&api=glsc2%3Dnone&language=c&loader=on
<br/>

Just download the zip amongst the files it shows you **after you hit generate**.

Unzip the file, put its contents in the same includes folder.

### Testing

Then do not forget to change the location on the first line of the example make file

```bash
git clone https://github.com/edmunddantes7/opengl-fedora28-setup.git
```
