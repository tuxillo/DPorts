# New ports collection makefile for:	www/rubygem-rails-app-installer
# Date created:				15 September 2006
# Whom:					Geraud Continsouzas <geraud@gcu.info>
#
# $FreeBSD: ports/www/rubygem-rails-app-installer/Makefile,v 1.11 2012/11/17 06:03:04 svnexp Exp $
#

PORTNAME=	rails-app-installer
PORTVERSION=	0.2.0
PORTREVISION=	1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An installer for Rails apps

RUN_DEPENDS=	rubygem-sqlite3-ruby>=1.1.0:${PORTSDIR}/databases/rubygem-sqlite3-ruby \
		rubygem-mongrel>=0.3.13.3:${PORTSDIR}/www/rubygem-mongrel \
		rubygem-mongrel_cluster>=0.2.0:${PORTSDIR}/www/rubygem-mongrel_cluster

USE_RUBY=	yes
USE_RAKE=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/rails-app-installer-setup \
		bin/rails-backup \
		bin/rails-restore

.include <bsd.port.mk>
