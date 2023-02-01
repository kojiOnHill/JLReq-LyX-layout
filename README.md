# LyX layouts for the jlreq LaTeX document class

These layout files provide document processor [LyX](https://www.lyx.org/) with the ability to create documents based on *jlreq* LaTeX document class.

*jlreq* is a LaTeX document class which implements the standard of *Requirements for Japanese Text Layout* set by W3C and available at https://github.com/abenori/jlreq.

## Install
1. Copy files in the **layouts** directory to `LYXDIR/layouts/`
2. Copy files in the **examples** directory to `LYXDIR/examples/Articles/`
3. Run LyX
4. Choose menu **Tools -> Reconfigure**

The place of LYXDIR depends on OS's. Most likely places are:
- `/usr/local/share/lyx` or `/usr/share/lyx` on UN\*X-like systems including Linux,
- `C:\Program Files\LyX` on Windows, 
- `/Applications/LyX/Contents/Resources` on MacOS.

## Documentation
Look at one of example files available in the **examples** directory ([PDF output](examples/jlreq-article-tate.pdf): see lyx file for its composition), and also the documentation of the *jlreq* LaTeX class itself. Note that the lyx file in the examples directory is readable with LyX versions greater than LyX-2.3.x.

## To Do
Output to XHTML and DocBook is not implemented yet.
