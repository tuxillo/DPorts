# Ports collection makefile for:  horde-turba
# Date created:			  Sat Nov 16, 2001
# Whom:				  Thierry Thomas (<thierry@thomas.as>)
#
# $FreeBSD: ports/mail/horde-turba/Makefile,v 1.77 2013/01/10 18:35:13 svnexp Exp $
#

PORTNAME=	turba
PORTVERSION=	4.0.2
PKGNAMEPREFIX=	horde-
CATEGORIES=	mail www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde web based address book

LICENSE=	AL2
LICENSE_FILE=	${WRKSRC}/LICENSE

LATEST_LINK=	horde-${PORTNAME}

OPTIONS_DEFINE=	FACEBOOK IMSP LDAP
FACEBOOK_DESC=	Support connections with Facebook
IMSP_DSC=	Support IMSP addressbooks
LDAP_DESC=	Support LDAP Addressbooks

USE_PHP=	gettext hash json
USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		horde \
		Horde_Auth \
		Horde_Core \
		Horde_Data \
		Horde_Date \
		Horde_Exception \
		Horde_Form \
		Horde_Group \
		Horde_History \
		Horde_Icalendar \
		Horde_Mail \
		Horde_Mime \
		Horde_Nls \
		Horde_Perms \
		Horde_Prefs \
		Horde_Serialize \
		Horde_Share \
		Horde_Support \
		Horde_Url \
		Horde_Util \
		Horde_View

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MFACEBOOK}
USE_HORDE_RUN+=	Horde_Service_Facebook
.endif

.if ${PORT_OPTIONS:MIMSP}
USE_HORDE_RUN+=	Horde_Imsp
.endif

.if ${PORT_OPTIONS:MLDAP}
USE_HORDE_RUN+=	Horde_Ldap
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
