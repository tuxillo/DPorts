# New ports collection makefile for:	ossp-l2
# Date created:				2003-01-31
# Whom:					Alan Eldridge <alane@geeksrus.net>
#
# $FreeBSD: ports/devel/ossp-l2/Makefile,v 1.27 2012/11/17 05:56:03 svnexp Exp $
#

PORTNAME=	l2
PORTVERSION=	0.9.13
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_OSSP}
MASTER_SITE_SUBDIR=	lib/${PORTNAME}
PKGNAMEPREFIX=	ossp-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A C library for a flexible and sophisticated Unix logging facility

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

MAN1=		l2-config.1 l2tool.1
MAN3=		l2.3

check:	build
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} check)

.include <bsd.port.mk>
