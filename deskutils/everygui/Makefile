# New ports collection makefile for:	everygui
# Date Created:				09 Jan 2006
# Whom:					Remington Lang <MrL0Lz@gmail.com>
#
# $FreeBSD: ports/deskutils/everygui/Makefile,v 1.12 2012/11/17 05:55:27 svnexp Exp $

PORTNAME=	everygui
PORTVERSION=	0.99.b
PORTREVISION=	7
CATEGORIES=	deskutils gnome
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dynamic GUI for an OS command

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
USE_GNOME=	libglade2 pygnome2

WRKSRC=		${WRKDIR}/${PORTNAME}

post-patch:
	@${FIND} ${WRKSRC} -name "*.py" | ${XARGS} ${REINPLACE_CMD} -e\
		's,/usr/share,${PREFIX}/share,g' -e\
		's,/usr/src,${PREFIX}/src,g'
	@${REINPLACE_CMD} -e 's,/usr/src/everygui,${PREFIX}/src/everygui,g' \
		${WRKSRC}/everygui
	@${REINPLACE_CMD} -e 's,/usr/src,${PREFIX}/src,g' \
		${WRKSRC}/egdesign
	@${FIND} ${WRKSRC} -name "*.bak" -delete

.include <bsd.port.mk>
