# New ports collection makefile for:	queue-repair
# Date created:		22 Aug 2002
# Whom:			Sergei Kolobov <sergei@kolobov.com>
#
# $FreeBSD: ports/mail/queue-repair/Makefile,v 1.13 2012/11/17 05:59:13 svnexp Exp $
#

PORTNAME=	queue-repair
PORTVERSION=	0.9.0
PORTREVISION=	1
CATEGORIES=	mail python
MASTER_SITES=	http://pyropus.ca/software/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A qmail queue diagnostic and repair tool

.if !defined(WITHOUT_QMAIL_PORT)
USE_QMAIL_RUN=	yes
.endif

USE_PYTHON=	yes

PLIST_FILES=	bin/queue-repair
PORTDOCS=	BLURB CHANGELOG TODO

do-build:
	${REINPLACE_CMD} -e 's,^#!/usr/bin/python,#!${PYTHON_CMD},' \
		${WRKSRC}/queue_repair.py
.if !defined(WITHOUT_QMAIL_PORT)
	${REINPLACE_CMD} -e 's,nofiles,qnofiles,' ${WRKSRC}/queue_repair.py
.endif

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/queue_repair.py ${PREFIX}/bin/queue-repair
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
. for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
. endfor
.endif

.include <bsd.port.mk>
