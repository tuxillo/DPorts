# New ports collection makefile for: 	iftop
# Date created:       			24 May 2003
# Whom:					Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/net-mgmt/iftop/Makefile,v 1.19 2012/11/17 06:00:32 svnexp Exp $
#

PORTNAME=	iftop
PORTVERSION=	0.17
CATEGORIES=	net-mgmt
MASTER_SITES=	http://www.ex-parrot.com/~pdw/iftop/download/

MAINTAINER=	vd@FreeBSD.org
COMMENT=	Display bandwidth usage on an interface by host

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-resolver=netdb_1thread

MAN8=		iftop.8

.if !defined(NOPORTDOCS)
PORTDOCS=	README
.endif
PLIST_FILES=	bin/iftop

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g' \
		 ${WRKSRC}/configure

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.8 ${MAN8PREFIX}/man/man8

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
