# LyX layouts for the jlreq LaTeX document class

These layout files provide document processor [LyX](https://www.lyx.org/) with the ability to create documents based on *jlreq* LaTeX document class.

*jlreq* is a LaTeX document class which implements the standard of *Requirements for Japanese Text Layout* set by W3C and available at [https://github.com/abenori/jlreq](https://github.com/abenori/jlreq).

## Install

### Installing to the system directory
1. Copy files in the [**layouts** directory](https://github.com/kojiOnHill/JLReq-LyX-layout/tree/main/layouts/) to `LYXDIR/layouts/`
2. Copy files in the [**examples** directory](https://github.com/kojiOnHill/JLReq-LyX-layout/tree/main/examples/) to `LYXDIR/examples/Articles/`
3. Run LyX
4. Choose menu **Tools -> Reconfigure**

The place of LYXDIR depends on OS's. Most likely places are:
- `/usr/local/share/lyx` or `/usr/share/lyx` on UN\*X-like systems including Linux,
- `C:\Program Files\LyX` on Windows, 
- `/Applications/LyX/Contents/Resources` on MacOS.

You will need to acquire writing permission on these directories.

### Installing to a user directory
Alternatively,
1. you can copy files in the [**layouts** directory](https://github.com/kojiOnHill/JLReq-LyX-layout/tree/main/layouts/) to an arbitrary place as you like and
2. specify them from "Local Class" at Document -> Setting -> Document Class.

## Documentation
Look at one of example files available in the **examples** directory ([PDF output](examples/jlreq-article-tate.pdf): see lyx file for its composition), and also the documentation of the *jlreq* LaTeX class itself. Note that the lyx file in the examples directory is readable with LyX versions greater than LyX-2.3.x.

## License
[GPL 2.0](https://github.com/kojiOnHill/JLReq-LyX-layout/tree/main/LICENSE).

## History
Feb. 7, 2023.  Support for XHTML and DocBook is added.
