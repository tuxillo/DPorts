# New ports collection makefile for:   jpilot-picsnvideos
# Date created:        18 Feb 2010
# Whom:                Sascha Klauder <sklauder@trimind.de>
#
# $FreeBSD: ports/palm/jpilot-picsnvideos/Makefile,v 1.7 2012/11/17 06:00:44 svnexp Exp $
#

PORTNAME=	picsnvideos
PORTVERSION=	0.2
PORTREVISION=	3
CATEGORIES=	palm comms graphics
MASTER_SITES=	SF/${PORTNAME}/source%20code/${PORTVERSION}
PKGNAMEPREFIX=	jpilot-

MAINTAINER=	sklauder@trimind.de
COMMENT=	JPilot plugin to download photos and videos

RUN_DEPENDS=	jpilot:${PORTSDIR}/palm/jpilot
BUILD_DEPENDS=	jpilot:${PORTSDIR}/palm/jpilot
LIB_DEPENDS=	gdbm.4:${PORTSDIR}/databases/gdbm

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

LDFLAGS+=	-L${PREFIX}/lib
PORTDOCS=	README AUTHORS
PLIST_FILES=	lib/jpilot/plugins/libpicsnvideos.la	\
		lib/jpilot/plugins/libpicsnvideos.so

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' \
		${WRKSRC}/configure

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
. for FILE in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${FILE} ${DOCSDIR}
. endfor
.endif

.include <bsd.port.mk>
