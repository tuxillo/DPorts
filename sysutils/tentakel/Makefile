# New ports collection makefile for:	tentakel
# Date created:			May 24, 2003
# Whom:				Munish Chopra <mchopra@engmail.uwaterloo.ca>
#
# $FreeBSD: ports/sysutils/tentakel/Makefile,v 1.8 2012/11/17 06:01:47 svnexp Exp $
#

PORTNAME=	tentakel
PORTVERSION=	2.2
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A program for executing commands on many hosts in parallel

WRKSRC=		${WRKDIR}/${DISTNAME}/py

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

MAN1=		tentakel.1

.include <bsd.port.mk>
