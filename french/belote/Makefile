# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: ports/french/belote/Makefile,v 1.7 2012/12/10 13:24:57 svnexp Exp $

PORTNAME=	belote
PORTVERSION=	20061109
PORTREVISION=	3
CATEGORIES=	french games java
MASTER_SITES=	http://coincher.free.fr/
DISTNAME=	belote

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Un jeu de belote coinchée contre l'ordinateur ou en réseau

USE_ZIP=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

SUB_FILES=	belote
SUB_LIST=	JAVA="${JAVA}"

DESKTOP_ENTRIES="Belote" \
		"Jouer à la belote" \
		"${PREFIX}/share/pixmaps/belote.gif" \
		"belote" \
		"" \
		false

post-extract:
	@${UNZIP_CMD} -qo ${WRKSRC}/data.bin rsc/vp.gif -d ${WRKSRC}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/belote ${PREFIX}/bin
	${MKDIR} ${DATADIR}
.for f in belote.jar data.bin
	${INSTALL_DATA} ${WRKSRC}/${f} ${DATADIR}
.endfor
	${MKDIR} ${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKSRC}/rsc/vp.gif ${PREFIX}/share/pixmaps/belote.gif

.include <bsd.port.mk>
