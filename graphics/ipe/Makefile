# New ports collection makefile for:	Ipe
# Date created:				October 25 2000
# Whom:					bremner@unb.ca
#
# $FreeBSD: ports/graphics/ipe/Makefile,v 1.35 2012/11/17 05:58:09 svnexp Exp $
#

PORTNAME=	ipe
DISTVERSION=	7.1.2
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=	${PORTNAME}7/${PORTNAME}/7.1.0
DISTNAME=	${PORTNAME}-${DISTVERSION}-src

MAINTAINER=	tkjacobsen@gmail.com
COMMENT=	Extensible drawing editor

LIB_DEPENDS=	cairo.2:${PORTSDIR}/graphics/cairo
RUN_DEPENDS=	latex:${PORTSDIR}/print/teTeX

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}/src

USE_LDCONFIG=	yes
USE_LUA=	5.1
USE_GMAKE=	yes
USE_GNOME=	pkgconfig
USE_QT4=	gui qt3support qmake_build moc_build uic_build rcc_build
MAN1=		ipe.1 ipe6upgrade.1 ipeextract.1 iperender.1 ipetoipe.1 ipescript.1

.if defined(NOPORTDOCS)
EXTRA_PATCHES+=	${FILESDIR}/extrapatch-ipe__Makefile
.endif

PLIST_SUB+=	VERSION="${DISTVERSION}"

post-install:
	cd ${WRKSRC}/../fontmaps && ${MKDIR} ${DATADIR}/${DISTVERSION} && \
	${SED} s,/usr/share/fonts/type1/gsfonts,${PREFIX}/share/ghostscript/fonts, \
	< gsfonts-fontmap.xml > ${DATADIR}/${DISTVERSION}/fontmap.xml

.include <bsd.port.mk>
