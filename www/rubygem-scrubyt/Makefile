# New ports collection makefile for:	rubygem-scrubyt
# Date created:		2007-03-13
# Whom:			TAKATSU Tomonari <tota@rtfm.jp>
#
# $FreeBSD: ports/www/rubygem-scrubyt/Makefile,v 1.14 2012/11/17 06:03:05 svnexp Exp $
#

PORTNAME=	scrubyt
PORTVERSION=	0.4.11
CATEGORIES=	www rubygems
MASTER_SITES=	RF

MAINTAINER=	tota@FreeBSD.org
COMMENT=	A powerful web scraping toolkit written in Ruby

RUN_DEPENDS=	rubygem-hpricot>=0.5:${PORTSDIR}/www/rubygem-hpricot \
		rubygem-mechanize>=0.6.3:${PORTSDIR}/www/rubygem-mechanize

LICENSE=	GPLv2

GEM_NAME=	${PORTNAME}-0.4.1

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
