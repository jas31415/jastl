I started making jastd just for convenience and experience. It compiles into a library file you will find in the `build/` folder, and an executable for unit testing, also present in that same folder.

If you want to use Cmake to compile a project with this, the source code's [CMakeLists.txt](CMakeLists.txt) is a good example of how to add it to your project.

> [!NOTE]
> I will provide a neat explanation of how this library will function by use of an std::string wrapper... whenever I get around to that.

Using it in a project should hopefully be as simple as adding the `.a` to wherever you wanna link it from, and then also having an includes folder with all the headers in it.

Another goal is that it should have clear and helpful documentation for all its components, inside of the source code and outside the source code.

The name is a blend word of **jas**31415 (that me, btw) and **std**lib (for standard library) =]
