# New ports collection makefile for:	htx
# Date created:		2005-07-19
# Whom:			Vsevolod Stakhov <vsevolod@highsecure.ru>
#
# $FreeBSD: ports/converters/htx/Makefile,v 1.11 2012/11/17 05:55:03 svnexp Exp $
#

PORTNAME=	htx
DISTVERSION=	0.7.8
CATEGORIES=	converters www
MASTER_SITES=	http://stuff.myrealm.co.uk/htx/ CENKES

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTML to XHTML converter

USE_PERL5=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/htx

post-patch:
	@${PERL5} -pi.orig -e 's,/usr/bin/perl,${PERL5},' ${WRKSRC}/htx

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/htx ${PREFIX}/bin

.include <bsd.port.mk>
