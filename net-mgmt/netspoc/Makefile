# ex:ts=8
# Ports collection makefile for:	netspoc
# Date created:			Nov 3, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/net-mgmt/netspoc/Makefile,v 1.13 2012/11/17 06:00:34 svnexp Exp $
#

PORTNAME=	netspoc
PORTVERSION=	3.2
CATEGORIES=	net-mgmt
MASTER_SITES=	BERLIOS
DISTNAME=	Netspoc-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Network Security Policy Compiler

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_PERL5=	yes
PERL_CONFIGURE=	yes

MAN1=		netspoc.1 print-group.1
MAN3=		Netspoc.3
PORTDOCS=	*
PORTEXAMPLES=	*

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/ChangeLog ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/index.shtml ${DOCSDIR}
	@${MKDIR} ${DOCSDIR}/doc
	@(cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${DOCSDIR}/doc)
.endif
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${EXAMPLESDIR})
.endif

.include <bsd.port.mk>
