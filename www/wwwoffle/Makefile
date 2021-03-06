# New ports collection makefile for:	wwwoffle
# Date created:		1 Jun 1998
# Whom:			Peter Mutsaers
#
# $FreeBSD: ports/www/wwwoffle/Makefile,v 1.64 2012/11/17 06:03:11 svnexp Exp $
#

PORTNAME=	wwwoffle
PORTVERSION=	2.9i
CATEGORIES=	www ipv6
MASTER_SITES=	http://www.gedanken.demon.co.uk/download-wwwoffle/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A caching proxy server for HTTP and FTP designed for dial-up hosts

LIB_DEPENDS=	gnutls.47:${PORTSDIR}/security/gnutls

USE_PERL5=	yes
USE_GMAKE=	yes
USE_RC_SUBR=	${PORTNAME}d

# $SPOOL seems like a common name which could be used for other things, so
# use $WWWOFFLE_SPOOL as the overriding setting.
WWWOFFLE_SPOOL?=	/var/spool/wwwoffle

PLIST_SUB+=	WWWOFFLE_SPOOL=${WWWOFFLE_SPOOL}

HAS_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS=-lmd
CONFIGURE_ARGS=	--with-confdir=${PREFIX}/etc --with-ipv6 \
		--with-gnutls=${PREFIX} \
		--with-spooldir=${WWWOFFLE_SPOOL} \
		--docdir=${DOCSDIR} \
		--mandir=${MANPREFIX}/man

MAN1=		wwwoffle.1
MAN5=		wwwoffle.conf.5
MAN8=		wwwoffled.8

.if ${WWWOFFLE_SPOOL} != "/var/spool/wwwoffle"
# If using a non-standard spool, change all the documentation (and anything
# else) to reflect that.
PKGMESSAGE=${WRKDIR}/MESSAGE

post-configure:
	@${SED} 's@/var/spool/wwwoffle@${WWWOFFLE_SPOOL}/wwwoffle@g' \
	  ${PKGDIR}/pkg-message > ${PKGMESSAGE}

.endif

post-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/conf/upgrade-config.pl ${WWWOFFLE_SPOOL}
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
