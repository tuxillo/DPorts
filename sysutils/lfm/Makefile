# ex:ts=8
# New ports collection makefile for:	lfm
# Date created:			Jul 21, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/sysutils/lfm/Makefile,v 1.14 2012/11/17 06:01:36 svnexp Exp $
#

PORTNAME=	lfm
PORTVERSION=	2.3
CATEGORIES=	sysutils
MASTER_SITES=	http://www.terra.es/personal7/inigoserna/lfm/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Last File Manager, a simple 'commander'-type file manager

LICENSE=	GPLv3

USE_PYTHON=	2.4+
USE_PYDISTUTILS=	yes
MAN1=		lfm.1 pyview.1

post-patch:
	@${REINPLACE_CMD} -e '/MAN_FILES/d' ${WRKSRC}/setup.py
	@${REINPLACE_CMD} -e '/DOC_FILES/d' ${WRKSRC}/setup.py

post-install:
.for f in lfm pyview
	@${INSTALL_MAN} ${WRKSRC}/${f}.1 ${MAN1PREFIX}/man/man1/
.endfor
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for f in COPYING ChangeLog NEWS README README.pyview TODO
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
