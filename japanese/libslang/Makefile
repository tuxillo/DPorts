# New ports collection makefile for:	ja-S-lang library
# Date created:		3 September 1999
# Whom:			IWASHITA Yoji <shuna@pop16.odn.ne.jp>
#
# $FreeBSD: ports/japanese/libslang/Makefile,v 1.24 2012/11/17 05:58:36 svnexp Exp $
#

PORTNAME=	libslang
PORTVERSION=	${VERSION}.j${JP_VERSION}
CATEGORIES=	japanese devel
MASTER_SITES=	http://www.emaillab.org/mutt/tools/ \
		http://my.reset.jp/~iwashita/mutt/distfiles/ \
		http://www.actweb.ne.jp/k-yosino/
DISTNAME=	slang-${VERSION}jp${JP_VERSION}

MAINTAINER=	iwashita@cqmail.net
COMMENT=	A library permits a programmer to develop software

CONFLICTS=	libslang2-[0-9]* libslang-1.*[^j]*

VERSION=	1.4.5
JP_VERSION=	2

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--includedir=${PREFIX}/include/slang
ALL_TARGET=	all elf
INSTALL_TARGET=	install-elf
USE_LDCONFIG=	yes
MAKE_JOBS_UNSAFE=	yes

post-install:
	${INSTALL_DATA} ${WRKSRC}/slang-j.doc ${PREFIX}/share/doc/slang

.include <bsd.port.mk>
