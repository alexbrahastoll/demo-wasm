### WebAssembly Demo
A simple WebAssembly demo as a continuation to the lecture given
at Fatec Mogi das Cruzes (at Nov. 6th, 2018).

If you can read Portuguese, I recommend you take a look at the
[article](https://alexbs.com.br/blog/wasm-intro.html) related to this repo in my personal website.

This demo uses Emscripten to compile a simple C program (that calculates
and prints the first Fibonacci sequence numbers) to WebAssembly (.wasm).

To run the demo, you just need to download this repo and open up **main.html**
with a modern web browser (Firefox 52+ highly recommended, since it does
not work locally in other browsers out of the box).

### Compiling main.c
If you want to play with the demo and maybe change the algorithm a little bit,
use the following command to compile the C program and to generate an updated
**main.html** file:

`emcc main.c -s WASM=1 -s EXIT_RUNTIME=1 -o main.html`

Bare in mind that in order to compile to WebAssembly you will need to have
Emscripten installed and configured on your local env. See [this article](https://kripken.github.io/emscripten-site/docs/getting_started/downloads.html) for
more info on how to setup Emscripten.
