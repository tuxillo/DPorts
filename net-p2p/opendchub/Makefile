# New ports collection makefile for:	opendchub
# Date created:			May 29, 2002
# Whom:				Munish Chopra <mchopra@engmail.uwaterloo.ca>
#
# $FreeBSD: ports/net-p2p/opendchub/Makefile,v 1.29 2012/11/17 06:00:40 svnexp Exp $
#

PORTNAME=	opendchub
PORTVERSION=	0.8.2
CATEGORIES=	net-p2p
MASTER_SITES=	SF/${PORTNAME}/Open%20DC%20Hub/${PORTVERSION}

MAINTAINER=	yashin.dm@gmail.com
COMMENT=	Unofficial Unix version of the Direct Connect Hub software

USE_PERL5=	yes
USE_OPENSSL=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

PORTDOCS=	README configfiles general scriptdoc
PLIST_FILES=	bin/${PORTNAME}

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

pre-install:
	@${CHMOD} a+rx ${WRKSRC}/install-sh

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Documentation/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
