# New ports collection makefile for:	nagios-check_netsnmp
# Date created:				7 December 2011
# Whom:					Dmitry Sivachenko <demon@FreeBSD.org>
#
# $FreeBSD: ports/net-mgmt/nagios-check_netsnmp/Makefile,v 1.3 2012/11/17 06:00:33 svnexp Exp $
#

PORTNAME=	check_netsnmp
PORTVERSION=	1.0
CATEGORIES=	net-mgmt
MASTER_SITES=	# none
PKGNAMEPREFIX=	nagios-
DISTFILES=	# none

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Nagios plug-in to get some common NetSNMP-exported information

RUN_DEPENDS=	${LOCALBASE}/libexec/nagios/utils.pm:${PORTSDIR}/net-mgmt/nagios-plugins \
		p5-Net-SNMP>=0:${PORTSDIR}/net-mgmt/p5-Net-SNMP

USE_PERL5_RUN=	yes
NO_BUILD=	yes
PLIST_FILES=	libexec/nagios/check_netsnmp %%DOCSDIR%%/check_netsnmp.html
PLIST_DIRS=	%%DOCSDIR%%

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/check_netsnmp ${PREFIX}/libexec/nagios
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${FILESDIR}/check_netsnmp.html ${DOCSDIR}

.include <bsd.port.mk>
