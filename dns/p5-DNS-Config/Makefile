# New ports collection makefile for:		p5-DNS-Config
# Date created:					22 February 2003
# Whom:	      					Clement Laforet <sheepkiller@cultdeadsheep.org>
#
# $FreeBSD: ports/dns/p5-DNS-Config/Makefile,v 1.9 2012/11/17 05:57:09 svnexp Exp $
#

PORTNAME=	DNS-Config
PORTVERSION=	0.66
PORTREVISION=	0
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DNS::Config is set of perl modules for name service configurations

PERL_CONFIGURE=	yes

post-patch:
	${FIND} ${WRKSRC} -name '*.pm' -o -name '*.t' -o -name '*.PL' | \
	${XARGS} ${PERL} -pi -e '$$_="" if /^use 5/;' \
			     -e '$$_="" if /(use|no) warnings/;'

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
