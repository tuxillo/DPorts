# New ports collection makefile for:	yolk
# Date created:		2007-03-11
# Whom:			Nicola Vitale <nivit@FreeBSD.org>
#
# $FreeBSD: ports/misc/py-yolk/Makefile,v 1.13 2012/11/17 05:59:44 svnexp Exp $
#

PORTNAME=	yolk
PORTVERSION=	0.4.1
PORTREVISION=	1
CATEGORIES=	misc python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP} \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
MASTER_SITE_SUBDIR=	source/y/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	A Python tool for listing packages installed by setuptools

USE_PYTHON=	2.6+
USE_PYDISTUTILS=	easy_install

.if !defined (NO_INSTALL_MANPAGES)
MAN1=	${PORTNAME}.1
.endif

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} == 271 || ${PYTHON_REL} == 320
IGNORE=	does not work with ${PYTHON_VERSION} (see http://goo.gl/SZpDN)
.endif

post-install:
.if !defined (NO_INSTALL_MANPAGES)
	@${INSTALL_DATA} ${WRKSRC}/docs/${PORTNAME}.1 ${MANPREFIX}/man/man1/${PORTNAME}.1
.endif
.if !defined (NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@cd ${WRKSRC}/examples && ${FIND} . -type d -exec ${MKDIR} ${EXAMPLESDIR}/{} ";"
	@cd ${WRKSRC}/examples && ${FIND} . -type f -exec ${INSTALL_DATA} {} ${EXAMPLESDIR}/{} ";"
.endif

.if !defined (NOPORTEXAMPLES)
EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}
.endif

.include <bsd.port.post.mk>
