# $FreeBSD: ports/security/netpgp/Makefile,v 1.12 2012/11/30 10:49:47 svnexp Exp $

PORTNAME=	netpgp
PORTVERSION=	20101107
CATEGORIES=	security
MASTER_SITES=	NETBSD/LOCAL_PORTS

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	PGP signing, verification, encryption, and decryption program

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/Licence

USE_OPENSSL=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CFLAGS+=	-DOPENSSL_NO_IDEA -Wno-error

MAN1+=		netpgp.1 \
		netpgpkeys.1 \
		netpgpverify.1
MAN3+=		libnetpgp.3 \
		libmj.3

.include <bsd.port.mk>
