# New ports collection makefile for:	p5-Time-Local
# Date created:	   1 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-Time-Local/Makefile,v 1.20 2012/12/17 13:43:44 svnexp Exp $
#

PORTNAME=	Time-Local
PORTVERSION=	1.22.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Efficiently compute time from local and GMT time

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

OPTIONS_DEFINE=	DOCS

PERL_CONFIGURE=	yes

MAN3=		Time::Local.3
PORTDOCS=	Changes

.include <bsd.port.pre.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.post.mk>
