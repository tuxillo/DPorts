# New ports collection makefile for:	nagios-check_hdd_health
# Date created:				2010-12-02
# Whom:					jamrich.majo@gmail.com
#
# $FreeBSD: ports/net-mgmt/nagios-check_hdd_health/Makefile,v 1.5 2012/11/17 06:00:33 svnexp Exp $
#

PORTNAME=	nagios-check_hdd_health
PORTVERSION=	1.1
CATEGORIES=	net-mgmt
MASTER_SITES=	# No distfile
DISTFILES=	# No distfile

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nagios plug-in to check HDD health from S.M.A.R.T

RUN_DEPENDS=	smartmontools>=0:${PORTSDIR}/sysutils/smartmontools

NO_BUILD=	yes

do-install:
	@${MKDIR} ${PREFIX}/libexec/nagios
	@${INSTALL_SCRIPT} ${.CURDIR}/src/check_hdd_health ${PREFIX}/libexec/nagios

.include <bsd.port.mk>
