# Ports collection makefile for:  pear-gnupg
# Date created:			  16 March 2006
# Whom:				  mnag@FreeBSD.org
#
# $FreeBSD: ports/security/pecl-gnupg/Makefile,v 1.16 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	gnupg
PORTVERSION=	1.3.2
CATEGORIES=	security
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	A pecl wrapper around the gpgme library

LIB_DEPENDS=	gpgme.19:${PORTSDIR}/security/gpgme

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS=	--with-gnupg=${LOCALBASE}/include/gpgme
LDFLAGS+=	-L${LOCALBASE}/lib
USE_PHP=	yes
USE_PHPEXT=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|$$GNUPG_DIR/lib|${LOCALBASE}/lib|; s| -ldl||g' \
		${WRKSRC}/config.m4

.include <bsd.port.mk>
