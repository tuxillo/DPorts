# Ports collection Makefile for:	symbion-sslproxy
# Date created:				10 Dec 2005
# Whom:					Gabor Kovesdan
# $FreeBSD: ports/security/symbion-sslproxy/Makefile,v 1.9 2012/11/17 06:01:21 svnexp Exp $

PORTNAME=	symbion-sslproxy
PORTVERSION=	1.0.5
CATEGORIES=	security
MASTER_SITES=	SF/sslproxy/sslproxy/${PORTVERSION}
DISTNAME=	sslproxy-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SSL proxy for securing insecure connections

USE_OPENSSL=	YES
USE_GMAKE=	YES
PLIST_FILES=	sbin/ssl_proxy
SUB_FILES+=	pkg-message

.include <bsd.port.pre.mk>

.if !defined(NOPORTDOCS)
PORTDOCS=	README
.endif

post-patch:
	${REINPLACE_CMD} -e 's|CC =|CC ?=|' \
			-e 's|CFLAGS =|CFLAGS +=|' ${WRKSRC}/Makefile.global

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ssl_proxy ${PREFIX}/sbin

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

post-install:
	${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
