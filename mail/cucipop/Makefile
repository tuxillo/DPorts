# Created by: igor@zynaps.ru
# $FreeBSD: ports/mail/cucipop/Makefile,v 1.22 2012/11/17 05:59:00 svnexp Exp $

# NOTE: APOP works only for virtual hosts as designed!
#       Virtual hosts works only with Berkeley DB2.
#       Berkeley DB2 is in conflict with libc, so commented out. :-(

PORTNAME=	cucipop
PORTVERSION=	1.31
PORTREVISION=	2
CATEGORIES=	mail ipv6
MASTER_SITES=	ftp://ftp.informatik.rwth-aachen.de/pub/packages/cucipop/ \
		http://ftp.riken.go.jp/archives/net/mail/pop/ \
		http://horms.net/projects/cucipop/download/

PATCH_SITES=	${MASTER_SITE_RINGSERVER}
PATCH_SITE_SUBDIR=	net/kame/misc
PATCHFILES=	cucipop-1.31-v6-20010223.diff.gz
PATCH_DIST_STRIP=	-p1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cubic Circle's POP3 daemon (fully RFC1939 compliant)

#BUILD_DEPENDS=  ${PREFIX}/include/db2/db.h:${PORTSDIR}/databases/db2

MAKE_JOBS_SAFE=	yes

MAN8=		cucipop.8 #makevpopdb.8
PLIST_FILES=	libexec/cucipop

.include <bsd.port.mk>
