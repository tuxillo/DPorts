# New ports collection makefile for:   xrick
# Date created:        15 March 2002
# Whom:                David Sieb�rger <drs@rucus.ru.ac.za>
#
# $FreeBSD: ports/games/xrick/Makefile,v 1.18 2012/11/17 05:57:58 svnexp Exp $
#

PORTNAME=	xrick
PORTVERSION=	021212
PORTREVISION=	8
CATEGORIES=	games
MASTER_SITES=	http://www.bigorno.net/xrick/
EXTRACT_SUFX=	.tgz

MAINTAINER=	drs@rucus.ru.ac.za
COMMENT=	A clone of Rick Dangerous

LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg

RESTRICTED=	Copyright status of the graphics and sounds is uncertain
USE_GMAKE=	yes
USE_SDL=	sdl

MAN6=		xrick.6
MANCOMPRESSED=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|sysarg_args_data = NULL|sysarg_args_data = "${PREFIX}/share/xrick/data.zip"|' ${WRKSRC}/src/sysarg.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xrick ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/xrick.6.gz ${PREFIX}/man/man6/xrick.6.gz
	${MKDIR} ${PREFIX}/share/xrick
	${INSTALL_DATA} ${WRKSRC}/data.zip ${PREFIX}/share/xrick/data.zip

.include <bsd.port.mk>
