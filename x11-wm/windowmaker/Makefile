# Created by: Brian Handy <handy@physics.montana.edu>
# $FreeBSD: ports/x11-wm/windowmaker/Makefile,v 1.176 2013/02/08 09:54:25 svnexp Exp $

PORTNAME?=	windowmaker
PORTVERSION=	0.95.4
PORTREVISION?=	0
CATEGORIES=	x11-wm windowmaker
MASTER_SITES=	http://windowmaker.org/pub/%SUBDIR%/
MASTER_SITE_SUBDIR=	source/release
DISTNAME=	WindowMaker-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT?=	GNUstep-compliant NeXTstep window manager clone

LICENSE?=	GPLv2

LIB_DEPENDS=	gif:${PORTSDIR}/graphics/giflib \
		png15:${PORTSDIR}/graphics/png \
		jbig:${PORTSDIR}/graphics/jbigkit \
		tiff:${PORTSDIR}/graphics/tiff

.if !defined(LWR_SLAVE)
LIB_DEPENDS+=	wraster:${PORTSDIR}/x11-wm/libwraster
RUN_DEPENDS+=	${LOCALBASE}/share/WindowMaker/Themes/LeetWM.themed/style:${PORTSDIR}/graphics/wmicons
USE_PERL5=	yes
OPTIONS_DEFINE=	NLS XRANDR
.endif

USE_GCC=	any
USE_XORG=	xft xinerama xmu xpm
USE_GNOME=	gnomehack
USE_PKGCONFIG=	build
USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--with-pixmapdir=${PREFIX}/include/X11/pixmaps \
		--with-nlsdir=${PREFIX}/share/locale \
		--with-libs-from="-L${LOCALBASE}/lib" \
		--with-incs-from="-I${LOCALBASE}/include" \
		--with-gnustepdir="${PREFIX}/GNUstep" \
		--enable-modelock \
		--enable-xinerama --enable-usermenu \
		--with-x
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

.if !defined(LWR_SLAVE)

.if ${ARCH} == x86_64 && ${OSVERSION} < 800000
CONFIGURE_ENV+=	ac_cv_c_inline_asm=no
.endif

.if ${OSVERSION} < 800000
CPPFLAGS+=	-DHAVE_SYS_SELECT_H
.endif

.if ${PORT_OPTIONS:MNLS}
USE_GETTEXT=   yes
LINGUAS=	be bg bs ca cs da de el es et fi fr gl hr hu hy it ja ko ms nl no pl pt ro ru sk sv tr zh_CN zh_TW
CONFIGURE_ENV+=	LINGUAS="${LINGUAS}"
PLIST_SUB=     NLS=""
.else
CONFIGURE_ARGS+=       --disable-locale
PLIST_SUB=     NLS="@comment "
.endif

.if ${PORT_OPTIONS:MXRANDR}
USE_XORG+=	xrandr
CONFIGURE_ARGS+=	--enable-xrandr
.endif

MANLANG=	"" cs sk ru
MAN1_EN=	geticonset.1x getstyle.1x seticons.1x setstyle.1x wdwrite.1x \
		wmaker.1x wmsetbg.1x wxcopy.1x wxpaste.1x get-wings-flags.1 \
		get-wutil-flags.1 wdread.1 WindowMaker.1x wmagnify.1x \
		wmgenmenu.1 wmmenugen.1 WPrefs.1x

MAN8_EN=	upgrade-windowmaker-defaults.8

MAN1_CS=	geticonset.1x setstyle.1x wxpaste.1x getstyle.1x wdwrite.1x \
		wmsetbg.1x seticons.1x wmaker.1x wxcopy.1x

MAN1_SK=	geticonset.1x setstyle.1x wxpaste.1x getstyle.1x wdwrite.1x \
		wmsetbg.1x seticons.1x wmaker.1x wxcopy.1x

MAN1_RU=	geticonset.1x setstyle.1x wxpaste.1x getstyle.1x wdwrite.1x \
		wmsetbg.1x seticons.1x wmaker.1x wxcopy.1x

PORTDOCS=	AUTHORS BUGFORM BUGS ChangeLog FAQ FAQ.I18N INSTALL \
		INSTALL-WMAKER NEWS README README.definable-cursor TODO

post-patch:
.for f in WINGs/wapplication.c WPrefs.app/Menu.c WPrefs.app/Paths.c \
    WindowMaker/*menu*
	@${REINPLACE_CMD} -e "s#/usr/local#${PREFIX}#g" ${WRKSRC}/${f}
.endfor
	@${REINPLACE_CMD} -e '/\/usr\/X11R6\/include\/X11\/pixmaps/d' \
	    -e '/\/usr\/share\/pixmaps/d' \
	    -e "s#\"/usr/local/share/pixmaps\",#\"${PREFIX}/share/pixmaps\"#" \
	    -e "s#/usr/share/icons#${PREFIX}/share/icons#" \
	    ${WRKSRC}/WindowMaker/Defaults/WindowMaker.in
	@${REINPLACE_CMD} -e "s#/usr/include/X11#${PREFIX}/share#" \
	    ${WRKSRC}/WPrefs.app/Paths.c
	@${REINPLACE_CMD} -e "s#WPrefs#${PREFIX}/GNUstep/Applications/WPrefs.app/WPrefs#" \
	    ${WRKSRC}/util/wmgenmenu.c
	@${REINPLACE_CMD} -e "764s#wPreferences.flags.restarting == 0#!wPreferences.flags.restarting#" \
	    ${WRKSRC}/src/startup.c

post-install:
	@${MKDIR} ${PREFIX}/GNUstep/Applications/WPrefs.app/xpm
	@${MKDIR} ${PREFIX}/share/WindowMaker/Sounds
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

update-LINGUAS: extract
	cd ${WRKSRC}/po && \
		${ECHO_CMD} *.po | ${SED} 's|\.po||g' > ${FILESDIR}/LINGUAS
.endif	# .if !defined(LWR_SLAVE)

.include <bsd.port.post.mk>
