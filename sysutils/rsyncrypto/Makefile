# Created by: Jin-Sih Lin <linpct@gmail.com>
# $FreeBSD: ports/sysutils/rsyncrypto/Makefile,v 1.1 2012/12/08 07:35:57 svnexp Exp $

PORTNAME=	rsyncrypto
PORTVERSION=	1.12
CATEGORIES=	sysutils net
MASTER_SITES=	SF

MAINTAINER=	linpct@gmail.com
COMMENT=	Rsync Friendly File Encryption

LICENSE=	GPLv2

BUILD_DEPENDS=	${LOCALBASE}/lib/libargtable2.so:${PORTSDIR}/devel/argtable
RUN_DEPENDS=	rsync:${PORTSDIR}/net/rsync \
	gzip:${PORTSDIR}/archivers/gzip

LDFLAGS+=	-L${LOCALBASE}/lib/
CPPFLAGS+=	-I${LOCALBASE}/include/

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

PLIST_FILES=	bin/rsyncrypto \
	bin/rsyncrypto_recover

MAN1=	rsyncrypto.1 rsyncrypto_recover.1

post-install:
	@${ECHO_MSG}
	@${ECHO_MSG} ${PORTNAME} requires archivers/gzip be built
	@${ECHO_MSG} with the RSYNCABLE flag to run properly
	@${ECHO_MSG}

.include <bsd.port.mk>
