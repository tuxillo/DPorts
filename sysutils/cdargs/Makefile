# $FreeBSD: ports/sysutils/cdargs/Makefile,v 1.15 2012/12/12 18:51:48 svnexp Exp $

PORTNAME=	cdargs
PORTVERSION=	1.35
CATEGORIES=	sysutils
MASTER_SITES=	http://www.skamphausen.de/downloads/cdargs/ \
		http://fossies.org/unix/privat/ \
		http://www.atarininja.org/~wxs/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Navigate the filesystem using a menu interface or a bookmark system

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN1=		cdargs.1
PLIST_FILES=	bin/cdargs

post-patch:
	@${REINPLACE_CMD} -e \
		's|^AM_CXXFLAGS|#AM_CXXFLAGS|' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
