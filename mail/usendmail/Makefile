# New ports collection makefile for:	usendmail
# Date created:		2004-02-19
# Whom:			Thomas Seck <tmseck@netcologne.de>
#
# $FreeBSD: ports/mail/usendmail/Makefile,v 1.10 2012/11/17 05:59:17 svnexp Exp $
#

PORTNAME=	usendmail
PORTVERSION=	0.1.6
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	http://www.ohse.de/uwe/usendmail/

MAINTAINER=	tmseck@netcologne.de
COMMENT=	A replacement for qmail's sendmail drop-in

USE_QMAIL=	yes

WRKSRC=		${WRKDIR}/mail/${DISTNAME}

PLIST_FILES=	sbin/usendmail
PORTDOCS=	NEWS README
SUB_FILES=	pkg-message
SUB_LIST=	QMAIL_PREFIX=${QMAIL_PREFIX}

post-patch:
	@${REINPLACE_CMD} -e 's,/var/qmail,${QMAIL_PREFIX},' \
	    ${WRKSRC}/src/usendmail.c
	@${REINPLACE_CMD} -e 's,^CC=,CC\?=,' \
	    ${WRKSRC}/src/Makefile

regression-test: build
	cd ${WRKSRC} && ./package/check

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/command/usendmail ${PREFIX}/sbin/
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/src && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
