# New ports collection makefile for:	whoson
# Date created:				14 May 2006
# Whom:					Sergey Matveychuk <sem@FreeBSD.org>
#
# $FreeBSD: ports/mail/whoson/Makefile,v 1.13 2012/11/17 05:59:17 svnexp Exp $
#

PORTNAME=	whoson
PORTVERSION=	2.05
CATEGORIES=	mail
MASTER_SITES=	SF

MAINTAINER=	sem@FreeBSD.org
COMMENT=	Implementation of `WHO iS ONline' protocol

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=		--with-config=${PREFIX}/etc/whoson.conf
USE_LDCONFIG=	yes

USE_RC_SUBR=	whoson

MAN3=	whoson.3 wso_login.3 wso_logout.3 wso_query.3 wso_version.3
MAN5=	whoson.conf.5
MAN8=	whoson.8 whosond.8

PORTDOCS=	README ChangeLog

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
