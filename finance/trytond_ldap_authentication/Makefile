# New ports collection makefile for:	trytond_ldap_authentication
# Date created:		09 September, 2012
# Whom:			Matthias Petermann<matthias@petermann.it>
#
# $FreeBSD: ports/finance/trytond_ldap_authentication/Makefile,v 1.2 2012/11/17 05:57:27 svnexp Exp $
#

PORTNAME=	trytond_ldap_authentication
PORTVERSION=	2.4.0
CATEGORIES=	finance python
MASTER_SITES=	http://downloads2.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (LDAP Authentication Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_ldap_connection>=2.4.0:${PORTSDIR}/finance/trytond_ldap_connection

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
