# Created by: ijliao
# $FreeBSD: ports/net-mgmt/echolot/Makefile,v 1.12 2012/11/17 06:00:31 svnexp Exp $

PORTNAME=	echolot
PORTVERSION=	0.1.0
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	SF \
		http://benjamin-schweizer.de/files/echolot/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Packet sniffer that grabs ARP packets on any ethernet devices

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN1=		echolot.1
PORTDOCS=	*
PLIST_FILES=	bin/echolot

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
