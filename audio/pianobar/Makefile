# New ports collection makefile for: pianobar
# Date created: 8 October 2010
# Whom: John Hixson <john@pcbsd.org>
#
# $FreeBSD: ports/audio/pianobar/Makefile,v 1.14 2012/11/17 05:54:41 svnexp Exp $
#

PORTNAME=	pianobar
PORTVERSION=	2012.09.07
CATEGORIES=	audio
MASTER_SITES=	http://6xq.net/projects/${PORTNAME}/

MAINTAINER=	john@pcbsd.org
COMMENT=	Command line Pandora player

LICENSE=	MIT

LIB_DEPENDS=	ao:${PORTSDIR}/audio/libao \
		faad:${PORTSDIR}/audio/faad \
		mad:${PORTSDIR}/audio/libmad \
		gnutls:${PORTSDIR}/security/gnutls \
		json:${PORTSDIR}/devel/json-c \
		gcrypt:${PORTSDIR}/security/libgcrypt

MAN1=		pianobar.1
MAN_COMPRESSED=	no

PLIST_FILES=	bin/pianobar

USE_BZIP2=	yes
USE_GMAKE=	yes

CFLAGS=	-I${LOCALBASE}/include
LDFLAGS=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
