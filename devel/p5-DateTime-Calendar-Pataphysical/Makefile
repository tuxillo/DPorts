# New ports collection makefile for:	p5-DateTime-Calendar-Pataphysical
# Date created:	   1 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Calendar-Pataphysical/Makefile,v 1.9 2012/11/17 05:56:11 svnexp Exp $
#

PORTNAME=	DateTime-Calendar-Pataphysical
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dates in the pataphysical calendar

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Calendar::Pataphysical.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes README

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>
