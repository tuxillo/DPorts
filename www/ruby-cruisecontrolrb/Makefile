# Ports collection makefile for:	ruby-cruisecontrolrb
# Date created:				25 Sep 2007
# Whom:					Philip M. Gollucci <pgollucci@p6m7g8.com>
#
# $FreeBSD: ports/www/ruby-cruisecontrolrb/Makefile,v 1.13 2012/11/17 06:03:03 svnexp Exp $

PORTNAME=	cruisecontrolrb
PORTVERSION=	1.4.0
PORTREVISION=	1
CATEGORIES=	www devel ruby
MASTER_SITES=	RF
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	cruisecontrol-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Continuous Integration Server For Rails Applications

RUN_DEPENDS=	rubygem-mongrel>=1.0.1:${PORTSDIR}/www/rubygem-mongrel \
		svn:${PORTSDIR}/devel/subversion

USE_RC_SUBR=	cruisecontrolrb

NO_BUILD=	yes

CPIOARGS=	--quiet -pdum -R

do-install:
	@ ${INSTALL} -d -m 0755 ${WWWDIR}
	@ cd ${WRKSRC} && ${FIND} . -name \*.bat -o -name \*.orig -o -name \*Changelog -o -name .gitignore -o -print | \
		${CPIO} ${CPIOARGS} ${WWWOWN}:${WWWGRP} ${WWWDIR}

.include <bsd.port.mk>
