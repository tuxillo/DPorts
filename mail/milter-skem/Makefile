# New ports collection makefile for:	milter-skem
# Date created:				14 July 2004
# Whom:					Mikhail Teterin
#
# $FreeBSD: ports/mail/milter-skem/Makefile,v 1.5 2012/11/17 05:59:06 svnexp Exp $
#

PORTNAME=	skem
PORTVERSION=	1.0.1
CATEGORIES=	mail
MASTER_SITES=	http://virtual-estates.net/skem/

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Cache earlier sendmail's verdicts for the relays

USE_BZIP2=	yes

PLIST_FILES=	sbin/skem
MAN8=		skem.8
MANCOMPRESSED=	maybe

OPTIONS=	SKEM_MILTER421 "Sendmail was built with -D_FFR_MILTER_421" off \
		SKEM_NO_CLEANUP "Omit the auto-cleanup module" off \
		SKEM_NO_LOGWATCHER "Omit the log-watching module" off \
		SKEM_NETINET6 "Support IPv6 addresses (not tested)" off \
		SKEM_NETINET "Support IPv4 addresses" on

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
BROKEN=		Does not compile on powerpc
.endif

.if ${OSVERSION} >= 700011
EXTRA_PATCHES=  files/timet.patch
.endif

.if defined(PTHREAD_LIBS)
MAKE_ENV+=	PTHREAD_LIBS="${PTHREAD_LIBS}"
.endif
.if defined(PTHREAD_CFLAGS)
MAKE_ENV+=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}"
.endif

.for o in ${OPTIONS:MSKEM_*}
.	if defined(WITH_$o)
MAKE_ARGS+=	-D$o
.	endif
.endfor

.include <bsd.port.post.mk>
