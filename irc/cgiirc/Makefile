# Created by: Vsevolod Stakhov <vsevolod@highsecure.ru>
# $FreeBSD: ports/irc/cgiirc/Makefile,v 1.13 2012/11/30 07:55:43 svnexp Exp $

PORTNAME=	cgiirc
PORTVERSION=	0.5.10
CATEGORIES=	irc www perl5
MASTER_SITES=	http://cgiirc.org/releases/ \
		SF/${PORTNAME}/cgi-irc/${PORTVERSION}

MAINTAINER=	rodrigo@bebik.net
COMMENT=	IRC web gateway written in Perl

LICENSE=	GPLv2

USE_PERL5=	yes
NO_BUILD=	yes

pre-install:
	@${MV} ${WRKSRC}/cgiirc.config ${WRKSRC}/cgiirc.config.sample 2>/dev/null || true

do-install:
	${MKDIR} ${PREFIX}/www/cgiirc
	${CP} -rp ${WRKSRC}/* ${PREFIX}/www/cgiirc
	${CHOWN} -R ${WWWOWN}:${WWWGRP} ${PREFIX}/www/cgiirc
	@[ -f ${PREFIX}/www/cgiirc/cgiirc.config ] || \
	${CP} ${WRKSRC}/cgiirc.config.sample ${PREFIX}/www/cgiirc/cgiirc.config

.include <bsd.port.mk>
