# New ports collection makefile for:	pgpgpg
# Date created:				16 December 1999
# Whom:					Matt Behrens <matt@zigg.com>
#
# $FreeBSD: ports/security/pgpgpg/Makefile,v 1.12 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	pgpgpg
PORTVERSION=	0.13
PORTREVISION=	4
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_PACKETSTORM} \
		ftp://ftp.gnupg.org/gcrypt/historic/ \
		http://www.nessie.de/mroth/pgpgpg/
MASTER_SITE_SUBDIR=	crypt/pgpgpg

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Wrapper for GnuPG to simulate PGP 2.6.x

# BUILD_DEPENDS is necessary because the configure script will bomb out
# if it can't find gpg.  RUN_DEPENDS is necessary to make the package
# dependency register correctly.  Hence the apparent redundancy.

BUILD_DEPENDS=	${PREFIX}/bin/gpgv:${PORTSDIR}/security/gnupg1
RUN_DEPENDS=	${PREFIX}/bin/gpgv:${PORTSDIR}/security/gnupg1

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-gpg-path=${PREFIX}/bin/gpg
PLIST_FILES=	bin/pgpgpg

.include <bsd.port.mk>
