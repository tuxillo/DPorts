# New ports collection makefile for:	mp3riot
# Date created:			29 July 2003
# Whom:				Francisco Gomez <francisco@gomezmarin.com>
#
# $FreeBSD: ports/audio/mp3riot/Makefile,v 1.8 2012/11/17 05:54:39 svnexp Exp $
#

PORTNAME=	mp3riot
PORTVERSION=	1.3
CATEGORIES=	audio
MASTER_SITES=	http://www.linuxsecure.de/f2html/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mp3riot creates mp3 playlists, HTML files, etc

RUN_DEPENDS=	p5-MP3-Info>=0:${PORTSDIR}/audio/p5-MP3-Info

NO_BUILD=	yes
USE_PERL5=	yes
USE_ZIP=	yes
NO_WRKSUBDIR=	yes

PORTDOCS=	example.unix groupfile CHANGELOG MANUAL mp3table.sql README repl.dat TODO utf.dat
PLIST_FILES=	bin/mp3riot

.include <bsd.port.pre.mk>

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/mp3riot ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for item in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${item} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.post.mk>
