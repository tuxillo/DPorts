# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD: ports/security/zombiezapper/Makefile,v 1.13 2012/11/17 06:01:23 svnexp Exp $

PORTNAME=	zombiezapper
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	security
MASTER_SITES=	PACKETSTORM/distributed/zombie
DISTNAME=	zombie-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Send a terminate command to Trinoo/TFN/Stacheldracht DDoS agents

BUILD_DEPENDS=	${LIBNET_CONFIG}:${PORTSDIR}/net/libnet10

LIBNET_CONFIG?=	${LOCALBASE}/bin/libnet10-config

CPPFLAGS+=	$$(${LIBNET_CONFIG} --cflags --defines)
LDFLAGS+=	$$(${LIBNET_CONFIG} --libs)

PORTDOCS=	USAGE tekpaper.txt
PLIST_FILES=	bin/zz

.include <bsd.port.options.mk>

do-build:
	cd ${WRKSRC} && \
		${CC} ${CFLAGS} ${CPPFLAGS} -o zz zz.c ${LDFLAGS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/zz ${PREFIX}/bin
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
