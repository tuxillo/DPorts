# New ports collection makefile for:	gaim-guifications
# Date created:		2004-05-04
# Whom:			ports@c0decafe.net
#
# $FreeBSD: ports/audio/pidgin-musictracker/Makefile,v 1.11 2012/12/10 19:23:58 svnexp Exp $
#

PORTNAME=	musictracker
PORTVERSION=	0.4.1
PORTREVISION=	7
CATEGORIES=	audio
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	pidgin-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plugin for Pidgin to displays the music track currently playing

BUILD_DEPENDS=	${LOCALBASE}/include/pidgin/pidgin.h:${PORTSDIR}/net-im/pidgin
RUN_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin
LIB_DEPENDS=	pcre.3:${PORTSDIR}/devel/pcre

USE_BZIP2=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
