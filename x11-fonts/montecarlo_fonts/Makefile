# New ports collection makefile for:	montecarlo_fonts
# Date Created:				20 Okt 2008
# Whom:					Dennis Herrmann <adox@mcx2.org>
#
# $FreeBSD: ports/x11-fonts/montecarlo_fonts/Makefile,v 1.4 2012/11/17 06:03:29 svnexp Exp $
#

PORTNAME=	montecarlo_fonts
PORTVERSION=	1.0
CATEGORIES=	x11-fonts
MASTER_SITES=	http://bok.net/MonteCarlo/downloads/ \
		http://mirror.4bit.ws/
DISTNAME=	MonteCarlo-PCF
EXTRACT_SUFX=	.tgz

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	A monospace font

RUN_DEPENDS=	mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir

USE_XORG=	x11
NO_BUILD=	yes
FONTDIR=	${PREFIX}/lib/X11/fonts/montecarlo

PLIST_FILES=	lib/X11/fonts/montecarlo/fonts.dir \
		lib/X11/fonts/montecarlo//MonteCarloBold.pcf \
		lib/X11/fonts/montecarlo//MonteCarloMedium.pcf
PLIST_DIRS=	lib/X11/fonts/montecarlo

do-install:
	@${MKDIR} ${FONTDIR}
	@${INSTALL_DATA} ${WRKSRC}/*.pcf ${FONTDIR}
	@(cd ${FONTDIR}; mkfontdir)

.include <bsd.port.mk>
