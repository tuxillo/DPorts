# New ports collection makefile for:	audio/mp3wrap
# Date created:				30.05.2003
# Whom:					Ulrich Spoerlein <uspoerlein@gmail.com>
#
# $FreeBSD: ports/audio/mp3wrap/Makefile,v 1.10 2012/11/17 05:54:39 svnexp Exp $
#

PORTNAME=	mp3wrap
PORTVERSION=	0.5
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	uqs@FreeBSD.org
COMMENT=	Utility to merge mp3 files (and other formats)

GNU_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

MAN1=		mp3wrap.1
PLIST_FILES=	bin/mp3wrap

.include <bsd.port.mk>
