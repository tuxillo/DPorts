# New ports collection makefile for:	ts
# Date created:		3 April 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/ts/Makefile,v 1.11 2012/11/17 06:01:48 svnexp Exp $
#

PORTNAME=	ts
PORTVERSION=	0.6.4
CATEGORIES=	sysutils
MASTER_SITES=	http://vicerveza.homeunix.net/~viric/soft/ts/ CENKES

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Serial task spooler

USE_GMAKE=	yes
PLIST_FILES=	bin/ts
PORTDOCS=	OBJECTIVES PROTOCOL README TRICKS
MAN1=		ts.1

post-patch:
	${REINPLACE_CMD} -e '/^GLIBCFLAGS/d;/^CFLAGS/d'\
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ts ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/ts.1 ${MAN1PREFIX}/man/man1/
.ifndef NOPORTDOCS
	${INSTALL} -d ${DOCSDIR}/
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
