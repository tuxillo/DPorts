# New ports collection makefile for:	courierpasswd
# Date created:				23th April 2006
# Whom:					Andrew St. Jean <andrew@arda.homeunix.net>
#
# $FreeBSD: ports/security/courierpasswd/Makefile,v 1.6 2012/11/17 06:01:02 svnexp Exp $

PORTNAME=	courierpasswd
PORTVERSION=	1.1.2
CATEGORIES=	security mail
MASTER_SITES=	http://www.arda.homeunix.net/store/

MAINTAINER=	andrew@arda.homeunix.net
COMMENT=	User authentication and password changing utility

BUILD_DEPENDS=	courierauthconfig:${PORTSDIR}/security/courier-authlib-base
RUN_DEPENDS=	courierauthconfig:${PORTSDIR}/security/courier-authlib-base

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MINUID?=	100

CONFIGURE_ARGS+=	--with-minuid=${MINUID}

MAN8=		courierpasswd.8

pre-fetch:
	@${ECHO} ""
	@${ECHO} "#############################################################"
	@${ECHO} ""
	@${ECHO} "  You should set the following build option."
	@${ECHO} ""
	@${ECHO} "  MINUID=uid"
	@${ECHO} "	Accounts with uids below this value cannot have"
	@${ECHO} "	their passwords changed. Default value is 100."
	@${ECHO} ""
	@${ECHO} "#############################################################"
	@${ECHO} ""

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/AUTHORS ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/ChangeLog ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/COPYING ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/INSTALL ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/NEWS ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
