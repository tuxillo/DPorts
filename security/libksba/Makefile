# New ports collection Makefile for:	libksba
# Date created:				July 17 2002
# Whom:					Tilman Linneweh <arved@FreeBSD.org>
#
# $FreeBSD: ports/security/libksba/Makefile,v 1.53 2012/11/17 06:01:07 svnexp Exp $

PORTNAME=	libksba
PORTVERSION=	1.3.0
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_GNUPG}
MASTER_SITE_SUBDIR=	${PORTNAME}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${DISTNAME}${EXTRACT_SUFX}.sig
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	KSBA is an X.509 Library

BUILD_DEPENDS+=	libgpg-error>=1.10:${PORTSDIR}/security/libgpg-error
LIB_DEPENDS+=	gpg-error:${PORTSDIR}/security/libgpg-error

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--enable-static
USE_LDCONFIG=	yes
USE_PERL5_BUILD=yes

INFO=		ksba

verify: checksum
	gpg --verify ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX}.sig

.include <bsd.port.mk>
