# ports collection makefile for:   xhime
# Date created:        25 August 1998
# Whom:                Seiichirou Hiraoka
#
# $FreeBSD: ports/games/xhime/Makefile,v 1.15 2012/11/17 05:57:57 svnexp Exp $
#

PORTNAME=	xhime
PORTVERSION=	1.51
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://www.tcp-ip.or.jp/~shochan/linux/
DISTFILES=	xhime151.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Resident Himechan for X Window System

WRKSRC=		${WRKDIR}/xhime1.51
USE_IMAKE=	yes
USE_XORG=	x11 xext
MANCOMPRESSED=	yes
MANLANG=	. ja
MAN6=		xhime.6

NO_CDROM=	'contains commercial character data'

.include <bsd.port.pre.mk>

post-install:
	${STRIP_CMD} ${PREFIX}/bin/xhime
	${INSTALL_MAN} ${WRKSRC}/xhime-man.euc \
		${PREFIX}/man/ja/man6
	${MV} ${PREFIX}/man/ja/man6/xhime-man.euc ${PREFIX}/man/ja/man6/xhime.6
	${GZIP_CMD} ${PREFIX}/man/ja/man6/xhime.6
.if !defined(NOPORTDOCS)
	@${MKDIR} ${PREFIX}/share/doc/ja/xhime
	@(cd ${WRKSRC};\
	${INSTALL_DATA} xhime-doc.euc xhime.doc rh110-doc.euc \
		${PREFIX}/share/doc/ja/xhime; \
	)
.endif

.include <bsd.port.post.mk>
