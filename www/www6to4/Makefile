# New ports collection makefile for:    www6to4
# Date created:         22.03.2002
# Whom: Janos Mohacsi <janos.mohacsi@dante.org.uk>
#
# $FreeBSD: ports/www/www6to4/Makefile,v 1.7 2012/11/17 06:03:11 svnexp Exp $

PORTNAME=	www6to4
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	www ipv6
MASTER_SITES=	ftp://ftp.pasta.cs.uit.no/pub/Vermicelli/

MAINTAINER=	janos.mohacsi@bsd.hu
COMMENT=	Lightweight http proxy to help IPv4 only browsers

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:S/./-/}

USE_RC_SUBR=	www6to4

post-patch:
	@${REINPLACE_CMD} -e 's,/etc,${PREFIX}/etc,' \
		${WRKSRC}/www6to4.c
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/www6to4 ${PREFIX}/sbin
	@if [ ! -d ${PREFIX}/etc/www6to4 ]; then \
		${MKDIR} ${PREFIX}/etc/www6to4; fi
	${INSTALL_DATA} ${WRKSRC}/www6to4.conf \
		${PREFIX}/etc/www6to4/www6to4.conf.sample
	${INSTALL_DATA} ${WRKSRC}/www6to4_forward.conf \
		${PREFIX}/etc/www6to4/www6to4_forward.conf.sample
.if !defined(NOPORTDOCS)
	if [ ! -d ${DOCSDIR} ]; then \
		${MKDIR} ${DOCSDIR}; fi
	${INSTALL_DATA} ${WRKSRC}/README \
		${DOCSDIR}
.endif

.include <bsd.port.mk>
