# New ports collection makefile for:	nkf
# Date created:		5 February 1995
# Whom:			asami
#
# $FreeBSD: ports/japanese/nkf/Makefile,v 1.42 2012/11/17 05:58:38 svnexp Exp $
#

PORTNAME=	nkf
PORTVERSION=	2.1.2
PORTEPOCH=	1
CATEGORIES?=	japanese
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE_JP}
MASTER_SITE_SUBDIR=	${PORTNAME}/53171
PKGNAMEPREFIX?=	ja-

MAINTAINER=	ports@FreeBSD.org
COMMENT?=	Network Kanji code conversion Filter

.if ${PKGNAMEPREFIX} != "ja-p5-"
MAN1=		nkf.1
MANLANG=	"" ja
PLIST_FILES=	bin/nkf
ALL_TARGET=	nkf
.endif

.include <bsd.port.mk>
