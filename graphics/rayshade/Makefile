# New ports collection makefile for:	rayshade
# Date created:		21 January 1998
# Whom:			giffunip@asme.org
#
# $FreeBSD: ports/graphics/rayshade/Makefile,v 1.23 2012/11/17 05:58:21 svnexp Exp $
#

PORTNAME=	rayshade
PORTVERSION=	4.0.6
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://ccl.net/cca/software/SOURCES/C/rayshade/ \
		http://www.mirrorservice.org/sites/graphics.stanford.edu/pub/rayshade/ \
		ftp://graphics.stanford.edu/pub/rayshade/
DISTNAME=	${PORTNAME}.${PORTVERSION}
EXTRACT_SUFX=	.tar.Z
.if !defined(NOPORTDOCS)
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} guide.ps.Z
.endif
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}
DIST_SUBDIR=	rayshade

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An extensible system for creating ray-traced images

BUILD_DEPENDS=	$(LOCALBASE)/lib/librle.a:${PORTSDIR}/graphics/urt

WRKSRC=		${WRKDIR}/${PORTNAME}.4.0

HAS_CONFIGURE=	yes
CONFIGURE_SCRIPT=	Configure
ALL_TARGET=	# empty

PORTDOCS=	*
PORTEXAMPLES=	*
PLIST_FILES=	bin/rayshade

.if defined(BATCH) || defined(PACKAGE_BUILDING)
CONFIGURE_ARGS=	< ${WRKDIR}/config.ans
.endif

pre-configure:
	@${SED} -e \
		"s,@CFLAGS@,${CFLAGS},g ; \
		 s,@CC@,${CC},g ; \
		 s,@LOCALBASE@,${LOCALBASE},g ; \
		 s,@PREFIX@,${PREFIX},g" \
		< ${FILESDIR}/config.ans > ${WRKDIR}/config.ans

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/rayshade/rayshade ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${DISTDIR}/${DIST_SUBDIR}/guide.ps.Z ${DOCSDIR}
.endif
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/Examples/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
