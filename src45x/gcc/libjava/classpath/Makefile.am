## Input file for automake to generate the Makefile.in used by configure

# lib first, to compile .class files before native code, last examples
## GCJ LOCAL: unconditionally build tools subdur
SUBDIRS = lib doc external include native resource scripts tools $(EXAMPLESDIR)
DIST_SUBDIRS = lib doc external include native resource scripts tools examples

# Allow users to pass site-specific flags to autoreconf via an env var. 
## GCJ LOCAL: we need an extra -I here.
ACLOCAL_AMFLAGS = -I m4 -I ../.. -I ../../config ${LOCAL_AUTORECONF_FLAGS}

native: lib

EXTRA_DIST = HACKING BUGS THANKYOU mauve-classpath LICENSE ChangeLog-2007 \
             ChangeLog-2003 ChangeLog-2004 ChangeLog-2005 ChangeLog-2006 \
             ChangeLog.gnujaxp.1 ChangeLog.gnujaxp.2 ChangeLog.libxmlj \
	     autogen.sh ChangeLog-2008

DISTCHECK_CONFIGURE_FLAGS = --with-gjdoc --enable-gstreamer-peer \
	--enable-xmlj --enable-qt-peer

dist-hook:
	-$(mkinstalldirs) $(distdir)/include
	-cp -f $(top_srcdir)/include/*.in $(distdir)/include
	-cp -f $(top_srcdir)/include/*.h $(distdir)/include

ChangeLog:
	cvs2cl.pl -b --gmt --log-opts "-d'1998-06-30< now'" --window 7200 --usermap ChangeLog.usermap --ignore ChangeLog --fsf
