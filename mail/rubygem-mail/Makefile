# Ports collection makefile for:	rubygem-mail
# Date created:				30 Aug 2010
# Whom:					Eric Freeman <freebsdports@chillibear.com>
#
# $FreeBSD: ports/mail/rubygem-mail/Makefile,v 1.19 2012/11/17 05:59:14 svnexp Exp $
#

PORTNAME=	mail
PORTVERSION=	2.4.4
PORTEPOCH=	1
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	freebsdports@chillibear.com
COMMENT=	A Ruby email handler

LICENSE=	MIT

RUN_DEPENDS=	rubygem-treetop>=1.4.8:${PORTSDIR}/devel/rubygem-treetop \
		rubygem-mime-types>=1.16:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-i18n>=0.4.0:${PORTSDIR}/devel/rubygem-i18n

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
