# New ports collection makefile for:	rubygem-capistrano
# Date created:				22 March 2006
# Whom:					Roderick van Domburg <r.s.a.vandomburg@student.utwente.nl>
#
# $FreeBSD: ports/sysutils/rubygem-capistrano/Makefile,v 1.39 2012/11/17 06:01:44 svnexp Exp $
#

PORTNAME=	capistrano
PORTVERSION=	2.13.3
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A utility for executing commands in parallel on multiple machines

RUN_DEPENDS= 	rubygem-highline>=0:${PORTSDIR}/devel/rubygem-highline \
		rubygem-net-scp>=1.0.0:${PORTSDIR}/security/rubygem-net-scp \
	  	rubygem-net-sftp>=2.0.0:${PORTSDIR}/security/rubygem-net-sftp \
		rubygem-net-ssh>=2.0.14:${PORTSDIR}/security/rubygem-net-ssh \
		rubygem-net-ssh-gateway>=1.1.0:${PORTSDIR}/security/rubygem-net-ssh-gateway

USE_RUBY=	yes
USE_RAKE=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/cap bin/capify

post-install:
	@${ECHO_MSG} "======================================================================"
	@${ECHO_MSG}
	@${ECHO_MSG} "If upgrading/switching from SwitchTower to Capistrano, be sure to:"
	@${ECHO_MSG} " - pkg_delete ${PKG_DBDIR}/rubygem-switchtower-*"
	@${ECHO_MSG} " - for all Rails projects, execute \"cap -A .\", keeping deploy.rb"
	@${ECHO_MSG} " - for all Rails projects, remove lib/tasks/switchtower.rake"
	@${ECHO_MSG}
	@${ECHO_MSG} "======================================================================"

.include <bsd.port.mk>
