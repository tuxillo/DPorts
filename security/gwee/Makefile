# New ports collection makefile for:	gwee
# Date created:        2005-05-04
# Whom:                chinsan <chinsan@mail2000.com.tw>
#
# $FreeBSD: ports/security/gwee/Makefile,v 1.6 2012/11/17 06:01:05 svnexp Exp $
#

PORTNAME=	gwee
PORTVERSION=	1.36
CATEGORIES=	security www
MASTER_SITES=	PACKETSTORM
MASTER_SITE_SUBDIR=	UNIX/utilities

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to exploit command execution vulnerabilities in web scripts

USE_OPENSSL=	yes
USE_PERL5=	yes
USE_PYTHON=	yes

LDFLAGS+=	-lssl -lcrypto
CFLAGS+=	-DWITH_SSL

MAN1=		gwee.1
PLIST_FILES=	bin/gwee

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} ${WRKSRC}/${PORTNAME}.c \
		-o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
