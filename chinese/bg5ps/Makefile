# New ports collection makefile for:	bg5ps
# Date created:		17 June 1998
# Whom:			Jing-Tang Keith Jang <keith@FreeBSD.org>
#
# $FreeBSD: ports/chinese/bg5ps/Makefile,v 1.15 2012/11/17 05:54:55 svnexp Exp $
#

PORTNAME=	bg5ps
PORTVERSION=	1.3.0p3
CATEGORIES=	chinese print
MASTER_SITES=	http://ftp.jaist.ac.jp/pub/FreeBSD/distfiles/ \
		http://www.gtlib.gatech.edu/pub/FreeBSD/distfiles/
DISTNAME=	bg5ps-1.3.0

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert Chinese-Big5/GB encoded files to Postscript, using TTF fonts

USE_FREETYPE=	yes
USE_PYTHON=	yes
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES=	pkg-message

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bg5ps ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/ttf2psm ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/bg5ps.conf ${PREFIX}/etc/bg5ps.conf.sample
	${INSTALL_DATA} ${WRKSRC}/gb2312-bg5ps.conf ${PREFIX}/etc/gb2312-bg5ps.conf.sample
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${CP} -R ${WRKSRC}/doc/* ${DOCSDIR}
.endif
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/netscape.ps ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/test.big5 ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/test.gb2312 ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/test.sh ${EXAMPLESDIR}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
