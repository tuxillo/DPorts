# New ports collection makefile for:	mindterm-binary
# Date created:				22 Sep 2000
# Whom:					alex@FreeBSD.org
#
# $FreeBSD: ports/security/mindterm-binary/Makefile,v 1.12 2012/11/17 06:01:08 svnexp Exp $

PORTNAME=	mindterm-binary
PORTVERSION=	1.2.1
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	alex
DISTNAME=	mindtermbin-v121
DISTFILES=	mindterm-ssh.html ${EXTRACT_ONLY}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A full vt220 compatible Java SSH-1 client (not only for websites)

USE_ZIP=	yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
NO_CDROM=	Do not sell for profit

post-extract:
	@${CP} ${DISTDIR}/mindterm-ssh.html ${WRKSRC}
	@${MV} ${WRKSRC}/mindtermfull.jar ${WRKSRC}/mindterm.jar

do-install:
	@${MKDIR} ${PREFIX}/share/java/mindterm
	@${INSTALL_DATA} ${WRKSRC}/mindterm.jar ${PREFIX}/share/java/mindterm/
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for DOC in CHANGES FAQ FEATURES PLATFORMS TODO mindterm-ssh.html
	@${INSTALL_DATA} ${WRKSRC}/${DOC} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
