# New ports collection makefile for:	sleuth
# Date created:			Jun 15, 2001
# Whom:				Mark Pulford <mark@kyne.com.au>
#
# $FreeBSD: ports/dns/sleuth/Makefile,v 1.16 2012/11/17 05:57:11 svnexp Exp $
#

PORTNAME=	sleuth
PORTVERSION=	1.4.4
CATEGORIES=	dns
MASTER_SITES=	ftp://atrey.karlin.mff.cuni.cz/pub/local/mj/net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A tool for checking DNS zones

RUN_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS

USE_PERL5=	yes

PLIST_FILES=	bin/sleuth etc/sleuth.conf.sample

post-patch:
	${PERL} -pi -e "s|/etc/sleuth.conf|${PREFIX}/etc/sleuth.conf|g; \
		s|#!/usr/bin/perl|#!${PERL}|g;" ${WRKSRC}/sleuth

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/sleuth ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/sleuth.conf ${PREFIX}/etc/sleuth.conf.sample

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
